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

#ifndef CIRCUIT_PLAYGROUND_IO_H
#define CIRCUIT_PLAYGROUND_IO_H

#include "CodalConfig.h"
// #include "ZPin.h"

//
// Component IDs for each pin.
// The can be user defined, but uniquely identify a pin when using the eventing APIs/
//
#define ID_PIN_A0           (DEVICE_ID_IO_P0 + 0)
#define ID_PIN_A1           (DEVICE_ID_IO_P0 + 1)
#define ID_PIN_A2           (DEVICE_ID_IO_P0 + 2)
#define ID_PIN_A3           (DEVICE_ID_IO_P0 + 3)
#define ID_PIN_A4           (DEVICE_ID_IO_P0 + 4)
#define ID_PIN_A5           (DEVICE_ID_IO_P0 + 5)
#define ID_PIN_A6           (DEVICE_ID_IO_P0 + 6)
#define ID_PIN_A7           (DEVICE_ID_IO_P0 + 7)

namespace codal
{
    /**
      * Represents a collection of all I/O pins exposed by the device.
      */
    class PiPicoIO
    {
        public:

        // ZPin          pin[0];
        // ZPin          a0;
        // ZPin          a1;
        // ZPin          a2;
        // ZPin          a3;
        // ZPin          a4;
        // ZPin          a5;
        // ZPin          a6;
        // ZPin          a7;
        // ZPin          speaker;
        // ZPin          microphoneData;
        // ZPin          microphoneClock;
        // ZPin          led;
        // ZPin          int1;
        // ZPin          temperature;
        // ZPin          light;
        // ZPin          buttonA;
        // ZPin          buttonB;
        // ZPin          buttonC;
        // ZPin          sda;
        // ZPin          scl;
        // ZPin          neopixel;
        // ZPin          flashMISO;
        // ZPin          flashMOSI;
        // ZPin          flashSCLK;
        // ZPin          flashSSEL;

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