#include <msp430g2231.h>

int main(void) {

  volatile int i,k;

  int j=0,l=500,n=5;

  WDTCTL = WDTPW | WDTHOLD;

  P1DIR = 0x01;


  for (;;) {

        P1OUT = 0x01;

            for (i = 0; i < j; i++);

            j=j+n;                     //led on period

            P1OUT = 0x00;

            for (k = 0; k < l; k++);

            l=l-n;                     //led off period

        if(j==500||j==0){
            n=-n;                      // n is fade amount
        }

      }
}
