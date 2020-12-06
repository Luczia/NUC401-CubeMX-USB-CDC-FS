#NUC401-CubeMX-USB-CDC-FS

A base Example to communicate via a USB Virtal Com port through CDC FS VCP communication with CubeMX middleware


##Behavior

The code awaits a command from the VCP port (USB endpoint 1) and interpets is.
If first byte of the commands equals '1' then the board logs a 21 bits array containing data from the board.

The code is designed to work with the Python graphical USBPlotter : https://github.com/Luczia/USBPlotter 
