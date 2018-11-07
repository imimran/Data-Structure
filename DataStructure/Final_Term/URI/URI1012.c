#include <stdio.h>
#define pi 3.14159
int main ()
{
    float x,y,z;
     scanf("%f %f %f",&x,&y,&z);


        printf ("TRIANGULO: %.3f\n",.5*(x*z));
        printf ("CIRCULO: %.3f\n",pi*(z*z));
        printf ("TRAPEZIO: %.3f\n",.5*(x+y)*z);
        printf ("QUADRADO: %.3f\n",y*y);
        printf ("RETANGULO: %.3f\n",x*y);


    return 0;

}
