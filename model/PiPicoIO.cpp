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

/**
  * Class definition for Genuino Zero IO.
  * Represents a collection of all I/O pins on the device.
  */

#include "CodalConfig.h"
#include "PiPicoIO.h"

using namespace codal;

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by MicroBitPin instances on the default EventModel.
  */
PiPicoIO::PiPicoIO() :
    GP0(ID_PIN_GP0, (PinNumber)PIN_NAME_GP0, PIN_CAPABILITY_DIGITAL),
    GP1(ID_PIN_GP1, (PinNumber)PIN_NAME_GP1, PIN_CAPABILITY_DIGITAL),
    GP2(ID_PIN_GP2, (PinNumber)PIN_NAME_GP2, PIN_CAPABILITY_DIGITAL),
    GP3(ID_PIN_GP3, (PinNumber)PIN_NAME_GP3, PIN_CAPABILITY_DIGITAL),
    GP4(ID_PIN_GP4, (PinNumber)PIN_NAME_GP4, PIN_CAPABILITY_DIGITAL),
    GP5(ID_PIN_GP5, (PinNumber)PIN_NAME_GP5, PIN_CAPABILITY_DIGITAL),
    GP6(ID_PIN_GP6, (PinNumber)PIN_NAME_GP6, PIN_CAPABILITY_DIGITAL),
    GP7(ID_PIN_GP7, (PinNumber)PIN_NAME_GP7, PIN_CAPABILITY_DIGITAL),
    GP8(ID_PIN_GP8, (PinNumber)PIN_NAME_GP8, PIN_CAPABILITY_DIGITAL),
    GP9(ID_PIN_GP9, (PinNumber)PIN_NAME_GP9, PIN_CAPABILITY_DIGITAL),
    GP10(ID_PIN_GP10, (PinNumber)PIN_NAME_GP10, PIN_CAPABILITY_DIGITAL),
    GP11(ID_PIN_GP11, (PinNumber)PIN_NAME_GP11, PIN_CAPABILITY_DIGITAL),
    GP12(ID_PIN_GP12, (PinNumber)PIN_NAME_GP12, PIN_CAPABILITY_DIGITAL),
    GP13(ID_PIN_GP13, (PinNumber)PIN_NAME_GP13, PIN_CAPABILITY_DIGITAL),
    GP14(ID_PIN_GP14, (PinNumber)PIN_NAME_GP14, PIN_CAPABILITY_DIGITAL),
    GP15(ID_PIN_GP15, (PinNumber)PIN_NAME_GP15, PIN_CAPABILITY_DIGITAL),
    GP16(ID_PIN_GP16, (PinNumber)PIN_NAME_GP16, PIN_CAPABILITY_DIGITAL),
    GP17(ID_PIN_GP17, (PinNumber)PIN_NAME_GP17, PIN_CAPABILITY_DIGITAL),
    GP18(ID_PIN_GP18, (PinNumber)PIN_NAME_GP18, PIN_CAPABILITY_DIGITAL),
    GP19(ID_PIN_GP19, (PinNumber)PIN_NAME_GP19, PIN_CAPABILITY_DIGITAL),
    GP20(ID_PIN_GP20, (PinNumber)PIN_NAME_GP20, PIN_CAPABILITY_DIGITAL),
    GP21(ID_PIN_GP21, (PinNumber)PIN_NAME_GP21, PIN_CAPABILITY_DIGITAL),
    GP22(ID_PIN_GP22, (PinNumber)PIN_NAME_GP22, PIN_CAPABILITY_DIGITAL),
    GP25(ID_PIN_GP25, (PinNumber)PIN_NAME_GP25, PIN_CAPABILITY_DIGITAL),
    GP26(ID_PIN_GP26, (PinNumber)PIN_NAME_GP26, PIN_CAPABILITY_AD),
    GP27(ID_PIN_GP27, (PinNumber)PIN_NAME_GP27, PIN_CAPABILITY_AD),
    GP28(ID_PIN_GP28, (PinNumber)PIN_NAME_GP28, PIN_CAPABILITY_AD),
    led(GP25)
{
}