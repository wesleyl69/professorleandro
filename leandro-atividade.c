#include <stdio.h>
#include <math.h>
#include <locale.h>

int num;

int main(){
    setlocale(LC_ALL, "Portuguese");

    do{
        printf("\nDigite o numero de 0 a 10 \n");
        scanf("%d", &num);
        printf("Menu %d\n", num);

        if (num == 1){
            int parOuImpar;
            printf("\nDigite um numero para saber se e par ou impar: ");
            scanf("%d", &parOuImpar);

            if (num % 2 == 0){
                printf("\n%d é par", num);
            }
            else{
                printf("\n%d é impar", num);
            }
        }
        if (num == 2){
            float flutuante, potencia;
            int inteiro;

            printf("\nDigite o numero fluatuante: ");
            scanf("%f", &flutuante);

            printf("\nDigite o numero inteiro: ");
            scanf("%d", &inteiro);

            potencia = pow(flutuante, inteiro);

            printf("O resultado em notacao cientifica fica assim %.5e", potencia);
        }
        if (num == 3){
            float flutuante, raiz, logaritmo;
            int inteiro;
            printf("\nDigite o numero fluatuante: ");
            scanf("%f", &flutuante);

            printf("\nDigite o numero inteiro: ");
            scanf("%d", &inteiro);

            raiz = sqrt(flutuante);
            logaritmo = log(raiz) / log(inteiro);

            printf("O resultado de %f  na base %d em notação cientifica fica assim %.5e", flutuante, inteiro, logaritmo);
        }
        if (num == 4){
            int ano;

            printf("\nDigite o ano para saber se é bissexto: ");
            scanf("%d", ano);

            if (ano % 4 == 0){
                printf("\n%d é bissexto");
            }
            else{
                printf("\n%d não é bissexto");
            }
        }
        if (num == 5){
            float nota1, nota2, nota3, mediaPonderada;

            printf("\nDigite nota 1: ");
            scanf("%f", &nota1);
            printf("\nDigite nota 2: ");
            scanf("%f", &nota2);
            printf("\nDigite nota 3: ");
            scanf("%f", &nota3);

            mediaPonderada = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / (1 + 1 + 2);

            printf("\nSua média foi: %.2f", mediaPonderada);
        }
        if (num == 6){
            float nota1, nota2, media;

            printf("\nDigite nota 1: ");
            scanf("%f", &nota1);
            printf("\nDigite nota 2: ");
            scanf("%f", &nota2);

            if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
                media = (nota1 + nota2) / 2;
                printf("\nSua média foi: %.f", media);
            }
            else{
                printf("\nNotas invalidas!");
            }
        }
        if (num == 7){
            int fatorial, aux = 1, i;
            printf("\nDigite o numero para saber seu fatorial: ");
            scanf("%d", &fatorial);
            for (i = 1; i <= fatorial; i++){
                aux *= i;
            }
            printf("O fatorial de %d é %d", fatorial, aux);
        }
        if (num == 8){
            int primo, i, resultado = 0;
            printf("\nDigite um numero para saber se é primo: ");
            scanf("%d", &primo);
            for (i = 2; i <= primo / 2; i++){
                if (primo % i == 0){
                    resultado++;
                    break;
                }
            }
            if (resultado == 0){
                printf("%d é um número primo\n", primo);
            }
            else{
                printf("%d não é um número primo\n", primo);
            }
        }
        if (num == 9){
            int i, n1, n2, soma;
            printf("Digite dois numeros da sequencia: ");
            scanf("%d %d", &n1, &n2);
            printf("%d, %d", n1, n2);
            for (i = 3; i <= 10; i = i + 1){
                soma = n1 + n2;
                n1 = n2;
                n2 = soma;
                printf(", %d", soma);
            }
        }
        if (num == 10){
            printf("\nVoltando pro menu\n");
            main();
        }
        if (num > 10){
            printf("a opção desejada é inexistente.");
        }

        if (num == 0){
            printf("Até mais");
        }
    } while (num != 0);
    return 0;
}
