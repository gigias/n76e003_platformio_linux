# n76e003_platformio_linux
 Nuvoton MCUs (N76E003) example project with PlatformIO using Linux


## Introduction
This project is a fork of [arduino12/n76e003_platformio](https://github.com/arduino12/n76e003_platformio) which was meant for windows.
Here we use [PlatformIO](https://platformio.org/) to compile with the free [SDCC](http://sdcc.sourceforge.net), and upload with [Nuvoprog](https://github.com/erincandescent/nuvoprog)!

## Features
* Fully free, no code size limit and open source thanks to SDCC + PlatformIO.
* When everything is installed in your system you will able to compile and upload an example led blinking program 

## Getting Started

### Hardware
* Buy Nu-Link ICP programmer: [this](https://www.aliexpress.com/item/32815222785.html) and [this](https://www.aliexpress.com/item/4000410409070.html) works for me.
* Buy N76E003 EVB: [this](https://www.aliexpress.com/item/1005002134285257.html) and [this](https://www.aliexpress.com/item/1005001893572711.html) works for me, also many modules use them like [this](https://www.aliexpress.com/item/33034099678.html)

### Software
* Install SDCC from your Linux distribuition repository.
* Install [PlatformIO](https://platformio.org/platformio-ide) to manage the building and upload.
* Install GO from your Linux distribution repository.
* Install [Nuvoprog](https://github.com/erincandescent/nuvoprog) to upload.
* Clone this [repo](https://github.com/gigias/n76e003_platformio_linux), there is an exmple program (LED Blinking on P15 pin). 
* Now, you can compile and upload with code and upload it via PlatformIO-upload command.
   
   pio run -e N76E003 -t upload 

## TODO
* Add more examples.

## Enjoy!
Gigias

