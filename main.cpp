#include <mbed.h>

DigitalOut led1(LED1);

int main()
{
  led1 = 1;
  while(1) {
    led1 = !led1;
    wait(0.1);
  }
}