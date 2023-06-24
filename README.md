# Jungle-Rumble
Authors: Aishan Irfan, Arian Safari.
A captivating Retro platformer game inspired by Donkey Kong for Raspberry Pi. 
To run the game, follow the instructions below:
You must be using a device with a Fedora Linux OS that is able to run the openocd command. 
Connect the Raspberry Pi 4 to your computer and the SNES controller to the Raaspberry Pi. 
The Raspberry Pi must also be connected to an external monitor via HDMI.
Open a terminal and run the command "openocd -f rpi4.cfg"
Open another terminal and run gdb
In gdb run the following commands:
set architechture aarch64
target extended-remote :3333
make
load kernel8.elf
continue
