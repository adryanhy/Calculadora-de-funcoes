#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

/*--------------Adryan Andre------------------*/
/*--------------Lais de Campos Teixeira-------*/
/*--------------Lucas Araujo Ferreira---------*/

void header(){
    printf("------------CALCULADORA DE FUNCAO--------------\n");
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


//f(x) = k
float constante(float k) {
    return k;
}


//f(x) = a.x^2+b.x+c
float quadratic(float a, float b, float c, float x){
    float result = (a * x * x) + (b * x) + c;
    return result;
}

//f(x)= log_k(x)
float logaritmo(float k, float x) {
    return log(x) / log(k);
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

float grausParaRadianos(float graus) {
    return graus * M_PI / 180;
}

void calcularSeno(float x, char unidade) {
    float resultado;
    if (unidade == 'r') {
        resultado = sin(x);
    } else {
        resultado = sin(grausParaRadianos(x));
    }
    printf("f(x) = %.4f\n", resultado);
}

void calcularCosseno(float x, char unidade) {
    float resultado;
    if (unidade == 'r') {
        resultado = cos(x);
    } else {
        resultado = cos(grausParaRadianos(x));
    }
    printf("f(x) = %.4f\n", resultado);
}

void calcularTangente(float x, char unidade) {
    float resultado;
    if (unidade == 'r') {
        resultado = tan(x);
    } else {
        resultado = tan(grausParaRadianos(x));
    }
    printf("f(x) = %.4f\n", resultado);
}

int main()
{
    int opcao;
    float valor, resultado, a, b, c, x, result_quadratic, kConstante, xConstante, k;
    float zeroLinear, bY;
    char concavidade[50];
    char reta[50];
    char curva[50];
    char curvaLog[50];
    char linerCruzaY[50];
    char escolha[10];
    char input[100];
    double res, rad;
    int sub_escolha =0;
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
            printf("Digite o valor de k:\n");
            scanf("%f", &kConstante);
            printf("Digite o valor de x:\n");
            scanf("%f", &xConstante);

            float result = constante(kConstante);

            printf("f(x) = %.4f\n", result);

            break;



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
            break;

        case 4:
            printf("Digite o valor de x: ");
            scanf("%f", &x);
            if (x == 0) {
                printf("Valor de X invalido");
            }else {
                printf("Digite o valor de k: ");
                scanf("%f", &k);

                if(k > 1){
                    strcpy(curva, "Curva crescente");
                }else{
                    strcpy(curva, "Curva decrescente");
                }
                resultado = pow(x, k);
                printf("f(x) = %.4f\n" ,resultado);
                printf("%s\n", curva);
            }
            break;

        case 5:
            printf("Digite o valor de k:\n");
            scanf("%f", &k);
            printf("Digite o valor de x:\n");
            scanf("%f", &x);

            if(k > 1){
                strcpy(curvaLog, "Curva crescente");
            }else{
                strcpy(curvaLog, "Curva decrescente");
            }

            float resultLog = logaritmo(k, x);
            printf("f(x) = %.4f\n", resultLog);
            printf("%s\n", curvaLog);

            break;

        case 6:
            system("cls");
            while(sub_escolha != 1 && sub_escolha != 2){
                printf("\n1. Entrada em graus");
                printf("\n2. Entrada em radianos");
                printf("\n");
                scanf("%s", input);
                sub_escolha = atoi(input);
                if(sub_escolha < 1 || sub_escolha >2){
                    printf("\nOpcao invalida. Tente novamente.\n");
                }
            }
            if(sub_escolha == 1){
                printf("Voce escolheu a opcao 1.\n");
                printf("Digite o valor de x: ");
                scanf("%f",&x);
                rad = x * M_PI / 180.0;
            }else{
                printf("Voce escolheu a opcao 2.\n");
                printf("Digite o valor de x: ");
                scanf("%lf",&x);
                rad = x;
            }
            res = sin(rad);
            printf("f(x) = %.4lf\n", res);
            sub_escolha = 0;
            printf("Pressione qualquer tecla para continuar...\n");
            getch();
            system("cls");
            break;

        case 7:
            system("cls");
            while(sub_escolha != 1 && sub_escolha != 2){
                printf("\n1. Entrada em graus");
                printf("\n2. Entrada em radianos");
                printf("\n");
                scanf("%s",input);
                sub_escolha = atoi(input);
                if(sub_escolha < 1 ||sub_escolha > 2){
                    printf("\nOpcao invalida. Tente novamente.\n");
                }
            }
            if(sub_escolha == 1){
                printf("Você escolheua opção 1.\n");
                printf("Digite o valor de x: ");
                scanf("%lf",&x);
                rad = x * M_PI / 180.0;
            }else{
                printf("Voce escolheu a opcao 2.\n");
                printf("Digite o valor de x: ");
                scanf("%lf",&x);
                rad = x;
            }
            res = cos(rad);
            printf("f(x) = %.4lf\n", res);
            sub_escolha = 0;
            printf("\nPressione qualquer tecla para continuar...\n");
            getch();
            system("cls");
            break;

        case 8:
            system("cls");
            while(sub_escolha != 1 && sub_escolha != 2){
                printf("\n1. Entrada em graus");
                printf("\n2. Entrada em radianos");
                printf("\n");
                scanf("%s",input);
                sub_escolha = atoi(input);
                if(sub_escolha < 1 ||sub_escolha > 2){
                    printf("\nOpcao invalida. Tente novamente.\n");
                }
            }
            printf("Digite o valor de x (angulo): ");
            scanf("%lf", &x);
            if(sub_escolha == 1){
                while(fmod(x, 90) == 0){ //não aceita valores múltiplos de 90 graus
                    printf("\nValor invalido. Tente novamente.\n");
                    printf("Digite o valor de x: ");
                    scanf("%lf",&x);
                }
                printf("Voce escolheu a opcao 1.\n");
                rad = x * M_PI / 180.0;
            }else{
                printf("Voce escolheu a opcao 2.\n");
                rad = x;
            }
            res = tan(rad);
            printf("f(x) = %.4lf\n", res);
            sub_escolha = 0;
            printf("\nPressione qualquer tecla para continuar...\n");
            getch();
            system("cls");
            break;

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
}
