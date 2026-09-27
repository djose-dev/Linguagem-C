#include <stdio.h>

int main() {

    int x1, x2;
    int melhor_x1 = 0;
    int melhor_x2 = 0;

    double lucro;
    double melhor_lucro = 0;

    // Testa diferentes quantidades dos produtos
    for (x1 = 0; x1 <= 100; x1++) {

        for (x2 = 0; x2 <= 100; x2++) {

            // Verifica as restrições
            if (2*x1 + 3*x2 <= 120 &&       // matéria-prima
                4*x1 + 2*x2 <= 100 &&       // mão de obra
                3*x1 + 4*x2 <= 120) {       // máquina

                // Calcula o lucro
                lucro = 40*x1 + 50*x2;

                // Verifica se é a melhor solução
                if (lucro > melhor_lucro) {

                    melhor_lucro = lucro;

                    melhor_x1 = x1;
                    melhor_x2 = x2;
                }
            }
        }
    }

    // Exibe o resultado
    printf("=====================================\n");
    printf("     MAXIMIZACAO DO LUCRO\n");
    printf("=====================================\n");

    printf("Produto A: %d unidades\n", melhor_x1);
    printf("Produto B: %d unidades\n", melhor_x2);

    printf("Lucro maximo: R$ %.2f\n", melhor_lucro);

    // Mostra utilização dos recursos
    printf("\nUtilizacao dos recursos:\n");

    printf("Materia-prima: %.0f / 120 kg\n",
           2.0*melhor_x1 + 3.0*melhor_x2);

    printf("Mao de obra: %.0f / 100 h\n",
           4.0*melhor_x1 + 2.0*melhor_x2);

    printf("Maquina: %.0f / 120 h\n",
           3.0*melhor_x1 + 4.0*melhor_x2);

    return 0;
}