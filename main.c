#include <stdio.h>
#include <stdlib.h>

/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o
total das vendas até R$ 1.500,00, mais 5% sobre o que ultrapassar este
valor de vendas, calcular e escrever o seu salário total.*/
/*desenvolvedor: @fischerxp*/

int main()
{
    float salario;
    float venda;
    printf("salario fixo: R$");
    scanf("%f",&salario);
    printf("\nvalor vendido esse mes: R$");
    scanf("%f",&venda);
        if (venda<=1500)
        {
            salario=salario+venda*0.3;
            printf("salario do final do mes: R$%.2f",salario);
        }
        else if (venda==0)
            printf("salario final do mes: R$%.2f",salario);
        else
        {
            salario=salario+venda*0.5;
            printf("salario do final do mes: R$%.2f",salario);
        }

        return 0;
}
