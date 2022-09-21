
#include <stdio.h>


int main()
{
    int ancho;
    int alto;
    int x;
    int y;
    int x2;
    int y2;
    float px;
    float py;
    float ancho2;
    float alto2;


    scanf_s("%i", &ancho);
    scanf_s("%i", &alto);
    scanf_s("%f", &px);
    scanf_s("%f", &py);
    scanf_s("%f", &ancho2);
    scanf_s("%f", &alto2);

    x = ancho * px;
    y = alto * py;
    x2 = x + (ancho2 * ancho);
    y2 = y + (alto * alto2);
    
    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, px, py, ancho2, alto2, x, y, x2, y2 );
        

    return 0;

}

