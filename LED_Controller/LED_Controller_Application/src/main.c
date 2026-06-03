#include "xparameters.h"
#include "xil_io.h"

#define LED_BASEADDR XPAR_LED_CONTROLLER_0_BASEADDR

int main() {
    int val = 0;
    while(1) {
        Xil_Out32(LED_BASEADDR, val);
        val++;
        if(val > 15) val = 0;  // 4 LED, max = 15

        for(int i = 0; i < 10000000; i++);
    }
    return 0;
}