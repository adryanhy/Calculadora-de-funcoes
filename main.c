#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

/*--------------Adryan Andre------------------*/

void header(){
    printf("------------CALCULADORA DE CONVERSAO--------------\n");
}

float radianos_graus(float radianos)
{
    const float PI = M_PI;
    return radianos * (180.0 / PI);
}

float graus_radianos(float graus)
{
    const float PI = M_PI;
    return graus * (PI / 180.0);
}

//f(x) = a.x^2+b.x+c
float quadratic(float a, float b, float c, float x){
    float result = (a * x * x) + (b * x) + c;
    return result;
}

//f(x) = sin(x), f(x) = cos(x) e f(x) = tan(x)
float seno(float x){
    float result = sin(x);
    return result;
}

float cosseno(float x){
    float result = cos(x);
    return result;
}

float tangente(float x){
    float result = tan(x);
    return result;
}

float funcaoLinear(float a, float b, float x) {
    return a*x + b;
}

int main()
{
    int opcao;
    float valor, resultado, a, b, c, x, result_quadratic;
    float zeroLinear, bY;
    char concavidade[50];
    char reta[50];
    char linerCruzaY[50];
    header();
    printf("Menu:\n");
    printf("1. f(x) = k\n");
    printf("2. f(x) = a.x+b\n");
    printf("3. f(x) = a.x^2+b.x+c\n");
    printf("4. f(x) = k^x\n");
    printf("5. f(x) = log_k(x)\n");
    printf("6. f(x) = sin(x)\n");
    printf("7. f(x) = cos(x)\n");
    printf("8. f(x) = tg(x)\n");
    printf("0. SAIR\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:



        case 2:
            printf("Digite o valor de a: \n");
            scanf("%f", &a);
            printf("Digite o valor de b: \n");
            scanf("%f", &b);
            bY = b;
            printf("Digite o valor de x: \n");
            scanf("%f", &x);

            if(a > 0){
                strcpy(reta, "Reta crescente;");
            }
            else{
                strcpy(reta, "Reta decrescente;");
            }
            zeroLinear = (-b/a);

            float resultadoLinear = funcaoLinear(a,b,x);
            printf("%s\n", reta);
            printf("Intercepto y: %f\n", bY);
            printf("O zero de f(x) eh: %.4f\n", zeroLinear);
            printf("f(x) = %.4f\n", resultadoLinear);
            break;

        case 3:
            printf("Digite o valor de a: \n");
            scanf("%f", &a);
            printf("Digite o valor de b: \n");
            scanf("%f", &b);
            b =
            printf("Digite o valor de c: \n");
            scanf("%f", &c);
            printf("Digite o valor de x: \n");
            scanf("%f", &x);

            if(a > 0){
                strcpy(concavidade, "Parabola concava para cima");
            }
            else{
                strcpy(concavidade, "Parabola concava para baixo");
            }

            result_quadratic = quadratic(a,b,c,x);

            printf("f(x) = %.4f \n", result_quadratic);
            printf("%s\n", concavidade);

        case 0:
            if(opcao == 0)
            {
                system("cls");
                printf("Obrigado por utilizar nosso app");
                exit(0);
            }
            break;

        default:
            printf("Opcao invalida\n");
            printf("Selecione uma das opcoes citadas acima");
            break;
    }
    return 0;






    /*system("cls");
           printf("GRAUS PARA RADIANOS\n");
           printf("Digite o angulo em graus: ");
           scanf("%f", &valor);
           resultado = graus_radianos(valor);
           printf("Resultado da conversao: %.4f", resultado);
           printf("\n(0). Voltar ao menu\n");
           scanf("%d", &opcao);
           if(opcao == 0){
               system("cls");
               return main ();
           }
           break;*/
    /*system("cls");
            printf("RADIANOS PARA GRAUS\n");
            printf("Digite o angulo em radianos: ");
            scanf("%f", &valor);
            resultado = radianos_graus(valor);
            printf("Resultado da conversao: %.4f", resultado);
            printf("\n(0). Voltar ao menu\n");
            scanf("%d", &opcao);
            if(opcao == 0){
                system("cls");
                return main ();
            }
            break;*/
}
