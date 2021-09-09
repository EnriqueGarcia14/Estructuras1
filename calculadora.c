#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char resp, tipo;
    int op, cont, n, f;
    float a, b, c, area, perimetro, h, l, r, l1, l2, l3, m,d;
	float resultadoX=0;

 do
    {

 printf("\n\t  Ahora indique con el n%cmero correspondiente la operaci%cn que desea realizar:", 163, 162);
                printf("\n\t  -> 1) Suma (a + b = c)");
                printf("\n\t  -> 2) Resta (a - b = c)");
                printf("\n\t  -> 3) Multiplicaci%cn (a * b = c)", 162);
                printf("\n\t  -> 4) Divisi%cn (a / b = c)", 162);
                printf("\n\t  -> 5) Potencia (a*a*a*a*a*n");
                printf("\n\t  -> 6) Modulo )");
                printf("\n\t  -> 7) Raiz cuadrada");
                printf("\n");
                printf("\n\t  Selecci%cn: ", 162);
                fflush(stdin);
                scanf("%d", &op);

  switch(op)
                {
                    case 1:
                        printf("\n\t  Usted ha seleccionado Suma (a + b = c)\n");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = a + b;
                        printf("\n\t  Resultado: %.2f + %.2f = %.2f", a, b, c);
                        printf("\n");
                        break;
                    case 2:
                        printf("\n\t  Usted ha seleccionado Resta (a - b = c)\n");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = a - b;
                        printf("\n\t  Resultado: %.2f - %.2f = %.2f", a, b, c);
                        printf("\n");
                        break;
                    case 3:
                        printf("\n\t  Usted ha seleccionado Multiplicacion (a * b = c)\n");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = a * b;
                        printf("\n\t  Resultado: %.2f * %.2f = %.2f", a, b, c);
                        printf("\n");
                        break;
                          case 4:
                        printf("\n\t  Usted ha seleccionado Division (a / b = c)\n");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = a / b;
                        printf("\n\t  Resultado: %.2f / %.2f = %.2f", a, b, c);
                        printf("\n");
                        break;
                         case 5:
                        printf("\n\t  Usted ha seleccionado Potencia");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b(a que potencia se elevara): ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = pow(a,b);
                        printf("\n\t  Resultado: %.2f / %.2f = %.2f", a, b, c);
                        printf("\n");
                        break;
                            case 6:
                        printf("\n\t  Usted ha seleccionado Modulo");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        //c = a % b;
                        printf("\n\t  Resultado:  %d", c);
                        printf("\n");
                        break;
                            case 7:
                        printf("\n\t  Usted ha seleccionado Raiz cuadrada");
                        printf("\n\t  Introduzca el valor de a: ");
                        fflush(stdin);
                        scanf("%f", &a);
                        printf("\n\t  Introduzca el valor de b: ");
                        fflush(stdin);
                        scanf("%f", &b);
                        c = sqrt(a);
                        d=sqrt(b);
                        printf("\n\t  Resultado raiz del primer numero:%.2f ",c );
                        printf("\n");
                         printf("\n\t  Resultado raiz del segundo numero:%.2f ",d );
                        printf("\n");
                        break;

                }

                   printf("\n\t  %cDesea realizar alguna otra operaci%cn?\n", 168, 162);
        printf("\n\t  (s/n): ");
        fflush(stdin);
        scanf("%c", &resp);
    }
     while(resp == 's');
    printf("\n\t  %cGracias, vuelva pronto!\n", 173);


}

