#include <mbed.h>
#include <USBCDC.h>

DigitalOut in_built(PC_13, 0);

int main() {
  while(1) {
    in_built = !in_built;
    ThisThread::sleep_for(2s);
  }
}