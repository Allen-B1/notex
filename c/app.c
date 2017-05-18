/* 
 * Copyright (c) Allen Bao
 * Licensed under the Apache License, version 2
 */

/* Compilation:
 *    gcc -o ~/notex app.c `pkg-config --libs --cflags gtk+-3.0 webkitgtk-3.0`
 * Run: 
 *    ~/notex 2>/dev/null
 */

#include <gtk/gtk.h>
#include <webkit/webkit.h>
#include <stdlib.h>

int main(void) {
	gtk_init(NULL, NULL);

	GtkWidget* main = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(main), "Notex");
	gtk_window_set_default_size(GTK_WINDOW(main), 800, 500);

	GtkWidget* web = (webkit_web_view_new());

	g_signal_connect(web , "close", G_CALLBACK(exit), NULL);
	g_signal_connect(main, "destroy", G_CALLBACK(exit), NULL);

	gtk_container_add(GTK_CONTAINER(main), web);
	webkit_web_view_load_uri(WEBKIT_WEB_VIEW(web), "http://lindalei.com/allenb/notex");
	
	gtk_widget_show_all(main);
	gtk_main();
}
