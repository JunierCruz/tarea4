
#include <stdio.h>

void main()
{
    char dias[5][10]  = {"Lunes","Martes","Miercoles","Jueves","Viernes"};
    float ventas[5][3]  = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i < 5; i++) {
        printf("Ventas del dia %s \n", dias[i]);
        for (int j = 0; j < 3; j++) {
             printf("Vendedor %i \n", j+1);
             scanf("%f", &ventas[i][j]);
        }
    }
     for (int i = 0; i < 5; i++) {
        printf("Promedio de ventas del dia %s \n", dias[i]);
        float promediodiario = 0;
        for (int j = 0; j < 3; j++) {
             promediodiario += ventas[i][j];
        }
        printf("%.2f B/. \n", promediodiario/3);
    }
    
    
}
