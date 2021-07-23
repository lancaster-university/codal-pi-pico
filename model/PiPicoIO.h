/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#ifndef PI_PICO_IO_H
#define PI_PICO_IO_H

#include "CodalConfig.h"
#include "RP2040Pin.h"

//
// Component IDs for each pin.
// The can be user defined, but uniquely identify a pin when using the eventing APIs/
#define ID_PIN_GP0           (DEVICE_ID_IO_P0 + 0)
#define ID_PIN_GP1           (DEVICE_ID_IO_P0 + 1)
#define ID_PIN_GP2           (DEVICE_ID_IO_P0 + 2)
#define ID_PIN_GP3           (DEVICE_ID_IO_P0 + 3)
#define ID_PIN_GP4           (DEVICE_ID_IO_P0 + 4)
#define ID_PIN_GP5           (DEVICE_ID_IO_P0 + 5)
#define ID_PIN_GP6           (DEVICE_ID_IO_P0 + 6)
#define ID_PIN_GP7           (DEVICE_ID_IO_P0 + 7)
#define ID_PIN_GP8           (DEVICE_ID_IO_P0 + 8)
#define ID_PIN_GP9           (DEVICE_ID_IO_P0 + 9)
#define ID_PIN_GP10           (DEVICE_ID_IO_P0 + 10)
#define ID_PIN_GP11           (DEVICE_ID_IO_P0 + 11)
#define ID_PIN_GP12           (DEVICE_ID_IO_P0 + 12)
#define ID_PIN_GP13           (DEVICE_ID_IO_P0 + 13)
#define ID_PIN_GP14           (DEVICE_ID_IO_P0 + 14)
#define ID_PIN_GP15           (DEVICE_ID_IO_P0 + 15)
#define ID_PIN_GP16           (DEVICE_ID_IO_P0 + 16)
#define ID_PIN_GP17           (DEVICE_ID_IO_P0 + 17)
#define ID_PIN_GP18           (DEVICE_ID_IO_P0 + 18)
#define ID_PIN_GP19           (DEVICE_ID_IO_P0 + 19)
#define ID_PIN_GP20           (DEVICE_ID_IO_P0 + 20)
#define ID_PIN_GP21           (DEVICE_ID_IO_P0 + 21)
#define ID_PIN_GP22           (DEVICE_ID_IO_P0 + 22)
#define ID_PIN_GP25           (DEVICE_ID_IO_P0 + 25)
#define ID_PIN_GP26           (DEVICE_ID_IO_P0 + 26)
#define ID_PIN_GP27           (DEVICE_ID_IO_P0 + 27)
#define ID_PIN_GP28           (DEVICE_ID_IO_P0 + 28)

#define PIN_NAME_GP0          0
#define PIN_NAME_GP1          1
#define PIN_NAME_GP2          2
#define PIN_NAME_GP3          3
#define PIN_NAME_GP4          4
#define PIN_NAME_GP5          5
#define PIN_NAME_GP6          6
#define PIN_NAME_GP7          7
#define PIN_NAME_GP8          8
#define PIN_NAME_GP9          9
#define PIN_NAME_GP10         10
#define PIN_NAME_GP11         11
#define PIN_NAME_GP12         12
#define PIN_NAME_GP13         13
#define PIN_NAME_GP14         14
#define PIN_NAME_GP15         15
#define PIN_NAME_GP16         16
#define PIN_NAME_GP17         17
#define PIN_NAME_GP18         18
#define PIN_NAME_GP19         19
#define PIN_NAME_GP20         20
#define PIN_NAME_GP21         21
#define PIN_NAME_GP22         22
#define PIN_NAME_GP25         25
#define PIN_NAME_GP26         26
#define PIN_NAME_GP27         27
#define PIN_NAME_GP28         28



namespace codal
{
    /**
      * Represents a collection of all I/O pins exposed by the device.
      */
    class PiPicoIO
    {
        public:
        RP2040Pin       pin[0];
        RP2040Pin       GP0;
        RP2040Pin       GP1;
        RP2040Pin       GP2;
        RP2040Pin       GP3;
        RP2040Pin       GP4;
        RP2040Pin       GP5;
        RP2040Pin       GP6;
        RP2040Pin       GP7;
        RP2040Pin       GP8;
        RP2040Pin       GP9;
        RP2040Pin       GP10;
        RP2040Pin       GP11;
        RP2040Pin       GP12;
        RP2040Pin       GP13;
        RP2040Pin       GP14;
        RP2040Pin       GP15;
        RP2040Pin       GP16;
        RP2040Pin       GP17;
        RP2040Pin       GP18;
        RP2040Pin       GP19;
        RP2040Pin       GP20;
        RP2040Pin       GP21;
        RP2040Pin       GP22;
        RP2040Pin       GP25;
        RP2040Pin       GP26;
        RP2040Pin       GP27;
        RP2040Pin       GP28;

        RP2040Pin&      led;

        /**
          * Constructor.
          *
          * Create a representation of all given I/O pins on the edge connector
          *
          */
        PiPicoIO();
    };
}

#endif