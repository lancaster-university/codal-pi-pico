// only one of the following defines can be enabled (set to one)
#define PICO_SDK_BLINKY 0
#define CODAL_PIN_SDK_BLINKY 0
#define CODAL_MODEL_SDK_BLINKY 0
#define CODAL_TIMER_BLINKY 0
#define PURE_CODAL_BLINKY 0
#define CODAL_GPIO_TEST 1


#if CODAL_GPIO_TEST
#include "PiPico.h"
#include "CodalDmesg.h"
using namespace codal;
PiPico pico;

int main() {
    pico.init();
    while(1) {
        DMESG("GDVU %d", pico.io.GP2.getDigitalValue(PullMode::Up));
        DMESG("GDVN %d", pico.io.GP2.getDigitalValue(PullMode::None));
        DMESG("GDVD %d", pico.io.GP2.getDigitalValue(PullMode::Down));
        pico.sleep(500);
    }
}
#endif

#if PURE_CODAL_BLINKY

#include "PiPico.h"
#include "CodalDmesg.h"
using namespace codal;
PiPico pico;

#define APP_ID  100
#define APP_EVT_ON 100
#define APP_EVT_OFF 101

void on() {
    while (1) {
        fiber_wait_for_event(APP_ID,APP_EVT_ON);
        pico.io.led.setDigitalValue(1);
    }
}

void off() {
    while (1) {
        fiber_wait_for_event(APP_ID,APP_EVT_OFF);
        pico.io.led.setDigitalValue(0);
    }
}

int main() {
    pico.init();
    create_fiber(on);
    create_fiber(off);
    while(1) {
        Event(APP_ID, APP_EVT_ON);
        pico.sleep(500);
        Event(APP_ID, APP_EVT_OFF);
        pico.sleep(750);
    }
}
#endif

#if CODAL_TIMER_BLINKY
#include "RP2040Pin.h"
#include "RP2040LowLevelTimer.h"
#include "Timer.h"
#include "CodalDmesg.h"
using namespace codal;
RP2040LowLevelTimer sys;
#define PICO_DEFAULT_LED_PIN 25
RP2040Pin p(100, (PinNumber)PICO_DEFAULT_LED_PIN, PIN_CAPABILITY_DIGITAL);

void timer_irq(uint16_t chans) {
    p.setDigitalValue(!p.getDigitalValue());
    sys.offsetCompare(0, 500000);
}

int main() {
    sys.setIRQ(timer_irq);
    uint32_t t = sys.captureCounter();
    sys.setCompare(0, sys.captureCounter() + 500000);
    sys.enable();
    while(1);
}
#endif

#if CODAL_TIMER_BLINKY
#include "RP2040Pin.h"
#include "RP2040LowLevelTimer.h"
#include "Timer.h"
#include "CodalDmesg.h"
using namespace codal;
RP2040LowLevelTimer sys;
#define PICO_DEFAULT_LED_PIN 25
RP2040Pin p(100, (PinNumber)PICO_DEFAULT_LED_PIN, PIN_CAPABILITY_DIGITAL);

void timer_irq(uint16_t chans) {
    p.setDigitalValue(!p.getDigitalValue());
    sys.offsetCompare(0, 500000);
}

int main() {
    sys.setIRQ(timer_irq);
    uint32_t t = sys.captureCounter();
    sys.setCompare(0, sys.captureCounter() + 500000);
    sys.enable();
    while(1);
}
#endif

#if CODAL_MODEL_SDK_BLINKY
// MODEL BLINKY with SDK
#include "PiPico.h"
using namespace codal;
PiPico pico;

int main() {
    pico.init();

    while (1) {
        pico.io.led.setDigitalValue(1);
        sleep_ms(1000);
        pico.io.led.setDigitalValue(0);
        sleep_ms(250);
    }
}
#endif

#if CODAL_PIN_SDK_BLINKY
#define PICO_DEFAULT_LED_PIN 25
RP2040Pin p(100, (PinNumber)PICO_DEFAULT_LED_PIN, PIN_CAPABILITY_DIGITAL);

int main() {
    while (1) {
        p.setDigitalValue(1);
        sleep_ms(500);
        p.setDigitalValue(0);
        sleep_ms(500);
    }
}
#endif


#if PICO_SDK_BLINKY
#define PICO_DEFAULT_LED_PIN 25
int main() {
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(2000);
        gpio_put(LED_PIN, 0);
        sleep_ms(2000);
    }
}
#endif