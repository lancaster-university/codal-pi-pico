#include "PiPico.h"

using namespace codal;

PiPico pico;

int main() {
    pico.init();

    while (1) {
        pico.io.led.setDigitalValue(1);
        sleep_ms(750);
        pico.io.led.setDigitalValue(0);
        sleep_ms(250);
    }
}
