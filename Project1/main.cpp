#include "graphics.h"
#include <iostream>
#include <math.h>

extern HDC hDC;
extern HPEN PEN;
extern HANDLE StdOut;
extern WORD COLOR;
extern COORD BGN, POS;

    int main()
    {
        initgraph();

        
        short radius = 10;
        const int X=200, Y = 200;
        const int Delay= 400000;

        const long int CONSTAN = 1000000;

        int yy=0,xx=0;

        while(true) {
            
            yy = Y;
            while(yy >1) {
                elipse(100, 100, X, yy);
                for (int j = 0; j < Delay; j++) {}
                elipse(100, 100, X, yy, RGB(0, 0, 0));
                --yy;
            }

            yy = 0;
            while(yy < Y) {
                elipse(100, 100, X, yy);
                for (int j = 0; j < Delay; j++) {}
                elipse(100, 100, X, yy, RGB(0, 0, 0));
                yy++;
            }


            xx = X;
            while(xx > 1) {
                elipse(100, 100, xx, Y);
                for (int j = 0; j < Delay; j++) {}
                elipse(100, 100, xx, Y, RGB(0, 0, 0));
                xx--;
            }

            xx = 0;
            while(xx < X) {
                elipse(100, 100, xx, Y);
                for (int j = 0; j < Delay; j++) {}
                elipse(100, 100, xx, Y, RGB(0, 0, 0));
                xx++;
            }
        }
        
        return 0;
    }