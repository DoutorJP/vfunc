#include <stdio.h>
#include "src/Vfunc.h"

int main(void)
{
    double v, s, t;
    char opt;

    printf("Selecione a opção\n");
    printf("==================\n");
    printf("[0] --- > Velocidade Media (Vm)\n[1] --- > Tempo\n[2] --- > Distancia\n");
    printf("==================\n:");
    scanf("\n%d", &opt);

    switch ( opt )
    {
        case 0 : 
            printf("Deslocamento (Δs): ");
            scanf("%lf", &s);
            printf("Tempo (Δt): ");
            scanf("\n%lf", &t);

            v = Vm(s, t);

            printf("A velocidade média é: %.2lf km/h.", v);

            break;

            v = 0; t = 0; s = 0;


        case 1 : 
            printf("Deslocamento (Δs): ");
            scanf("%lf", &s);
            printf("Velocidade media (Vm): ");
            scanf("%lf", &v);

            t = Vt(s, v); 

            printf("O tempo foi: %.2lf horas.", t);

            break;

            v = 0; t = 0; s = 0;

        case 2 : 
            printf("Velocidade media (Vm): ");
            scanf("%lf", &v);
            printf("Tempo (Δt): ");
            scanf("\n%lf", &t);

            s = Vs(v, t);

            printf("A distancia/deslocamento (Δs) foi: %.2lf km", s); 


    }




    return 0;
}

