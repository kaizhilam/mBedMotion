#include "mbed.h"

DigitalOut led1(LED1);
AnalogIn ain(p19);
Serial pc(USBTX, USBRX);



int main() {
    while (true)
    {
        if (ain <= 0.3) //approx 30 cm
        {
            led1 = 1;
        }
        else
        {
            led1 = 0;
        }
    }
}
