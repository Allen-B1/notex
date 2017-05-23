CC = gcc
OUT = ~/notex

all: build add

build:
	$(CC) -o $(OUT) c/app.c `pkg-config --libs --cflags gtk+-3.0 webkitgtk-3.0`

add:
	chmod +x notex.desktop
	cp notex.desktop ~/.local/share/applications/

desktop: add
	cp notex.desktop ~/Desktop

clean:
	rm ~/.local/share/applications/notex.desktop
	rm ~/Desktop/notex.desktop
