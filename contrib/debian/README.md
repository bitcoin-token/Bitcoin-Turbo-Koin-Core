
Debian
====================
This directory contains files used to package btkd/btk-qt
for Debian-based Linux systems. If you compile btkd/btk-qt yourself, there are some useful files here.

## btk: URI support ##


btk-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install btk-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your btkqt binary to `/usr/bin`
and the `../../share/pixmaps/btk128.png` to `/usr/share/pixmaps`

btk-qt.protocol (KDE)

