# Installation
## Method 1: `make`
First, navigate to the notex folder
```
cd notex
```
Then,type `make`
```
make
```
Optionally, add `make desktop` to add it to your desktop
```
make desktop
```
To remove, type `make clean`
```
make clean
```
## Method 2: Manual
```
gcc -o ~/notex c/app.c `pkg-config --libs --cflags gtk+-3.0 webkitgtk-3.0`
chmod +x notex.desktop
cp notex.desktop ~/.local/share/applications/
```
