#!/bin/bash
sudo avrdude -c arduino -P /dev/ttyUSB0 -p m328p -U flash:w:led.hex
