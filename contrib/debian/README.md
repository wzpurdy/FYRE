
Debian
====================
This directory contains files used to package fyred/fyre-qt
for Debian-based Linux systems. If you compile fyred/fyre-qt yourself, there are some useful files here.

## fyre: URI support ##


fyre-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fyre-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fyre-qt binary to `/usr/bin`
and the `../../share/pixmaps/fyre128.png` to `/usr/share/pixmaps`

fyre-qt.protocol (KDE)

