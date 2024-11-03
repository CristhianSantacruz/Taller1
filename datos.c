#include <stdio.h>
#include "utils.h"

int solicitarFigura()
{
    char mensaje[] = "Bienvenido";
    int ancho = (sizeof(mensaje) - 1) + 4;
    for (int i = 0; i < ancho; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("* %s *\n", mensaje);
    for (int i = 0; i < ancho; i++)
    {
        printf("*");
    }
    printf("\n");
    int figura;
    printf("Calculos de figuras geometrica\n");
    printf("--------Area y Perimetro--------\n");
    printf("1.Triangulo\n2.Paralelogramo\n3.Cuadrado\n4.Rectangulo\n5.Rombo\n6.Trapecio\n7.Circulo\n8.PolignoRegular\n\n");
    printf("--------Superficie y volumen--------\n");
    printf("9.Cubo\n10.Cuboide\n11.Cilindro\n12.Recto\n13.Esfera\n14.Cono circular recto\n");
    printf("Selecciona una figura geometrica Por Favor:\n");
    scanf("%d", &figura);

    
    return figura;
}
int preguntarContinuar()
{
    char respuesta;
    printf("¿Desea realizar el análisis de otra figura? (s/n): ");
    scanf(" %c", &respuesta);
    return (respuesta == 's' || respuesta == 'S') ? 1 : 0;
}
