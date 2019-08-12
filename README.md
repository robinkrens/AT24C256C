#INTRODUCTION
Driver for the AT24C256C EEPROM for STM32 based boards. Communication protocol is I2C.
Maximum write in limited to 64 bytes. Reading bytes is unlimited, but memory should
be allocated accordingly. 

This driver is written for my own (from scratch) RTOS. But I reckon, you should be able to port this driver using HAL or your own OS without too much effort.

#USAGE 
For example usage, please have a look at example.c
![Example output](https://github.com/example.png "Example output")
