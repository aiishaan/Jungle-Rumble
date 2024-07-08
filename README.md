# Jungle-Rumble

## Overview
**Jungle-Rumble** is a captivating retro platformer game inspired by Donkey Kong, designed specifically for the Raspberry Pi. Dive into the jungle and navigate through exciting levels, encountering various challenges and enemies along the way.

## Requirements
- Raspberry Pi 4.
- SNES controller
- External monitor (connected via HDMI)
- Fedora Linux OS with the ability to run the `openocd` command
- GDB (GNU Debugger)

## Setup Instructions
1. **Connect your hardware:**
    - Connect the Raspberry Pi 4 to your computer
    - Connect the SNES controller to the Raspberry Pi
    - Connect the Raspberry Pi to an external monitor via HDMI

2. **Running the game:**
    - Open a terminal and run the following command:
      ```sh
      openocd -f rpi4.cfg
      ```
    - Open another terminal and start GDB:
      ```sh
      gdb
      ```
    - In GDB, run the following commands:
      ```sh
      set architecture aarch64
      target extended-remote :3333
      make
      load kernel8.elf
      continue
      ```

## Gameplay
Experience the classic platformer action with **Jungle-Rumble**. Guide your character through a vibrant jungle environment, avoid obstacles, and defeat enemies to advance through the levels. The SNES controller provides a nostalgic touch, enhancing the retro gaming experience.

## Contributing
I welcome contributions from the community to enhance the game. If you would like to contribute, please follow these steps:
1. Fork the repository
2. Create a new branch for your feature or bugfix
3. Commit your changes and push them to your fork
4. Open a pull request with a detailed description of your changes

## Contact
For any questions or support, please open an issue on the GitHub repository or contact the maintainers.

Enjoy playing **Jungle-Rumble** and relive the retro gaming era!

