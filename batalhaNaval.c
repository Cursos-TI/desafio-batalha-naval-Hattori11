#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os co
#define line 10
#define column 10

#define skill_line 5 
#define skill_column 5

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int board[line][column] = { // Tabuleiro
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
    };

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++){
            if (i == 7 && j > 1 && j < 5) { // Navio Horizontal
                board[7][2] = 3;
                board[7][3] = 3;
                board[7][4] = 3;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++){
            if (j == 9 && i > 0 && i < 4) { // Navio Vertical
                board[1][9] = 3;
                board[2][9] = 3;
                board[3][9] = 3;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++){
            if ((i >= 1 && i <= 3) && (j >= 1 && j <= 3)) { // Navio Diagonal 1
                board[1][1] = 3;
                board[2][2] = 3;
                board[3][3] = 3; 
            }
        }
        printf("\n");
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++){
            if ((i >= 8 && i <= 10) && (j >= 8 && j <= 10)) { // Navio Diagonal 2
                board[7][9] = 3;
                board[8][8] = 3;
                board[9][7] = 3; 
            }
        }
        printf("\n");
    }
    // Habilidade Cone
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if ((i == 0 && j == 4)) {
                board[i][j] = 5;
            }
            if (i == 1 && (j > 2 && j < 6)) {
                board[i][j] = 5;
            }
            if (i == 2 && (j > 1 && j < 7)) {
                board[i][j] = 5;
            }
        }
    }
    // Habilidade Cruz
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if (i == 6 && (j > 4 && j < column)) {
                board[i][j] = 5;
            }
            if (j == 7 && (i > 3 && i < 9)) {
                board[i][j] = 5;
            }
        }
    }
    // Habilidade Octaedro
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if (i == 5 && j == 2) {
                board[i][j] = 5;
            }
            if (i == 6 && (j > 0 && j < 4)) {
                board[i][j] = 5;
            }
            if (i == 7 && (j >= 0 && j < 5)) {
                board[i][j] = 5;
            }
            if (i == 8 && (j > 0 && j < 4)) {
                board[i][j] = 5;
            }
            if (i == 9 && j == 2) {
                board[i][j] = 5;
            }
        }
    }

    printf("|  BATALHA NAVAL  |\n");
    for (char i = 'A'; i < 'K'; i++) {
        printf("%c ", i);
    }
    printf("\n");
    int e = 1;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", board[i][j]); // Tabuleiro já com os navios e com as habilidades já lançadads
        }
        printf("%d", e);
        e++;
        printf("\n");
    }
    printf("\n");
    // Habilidades
    // Habilidade Octaedro
    printf("Demonstração da Habilidade Octaedro: \n");
    int octahedron[skill_line][skill_column];
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            octahedron[i][j] = 0;
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", octahedron[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            if (i == 0 && j == 2) {
                octahedron[i][j] = 5;
            }
            if (i == 1 && (j > 0 && j < 4)) {
                octahedron[i][j] = 5;
            }
            if (i == 2) {
                octahedron[i][j] = 5;
            }
            if (i == 3 && (j > 0 && j < 4)) {
                octahedron[i][j] = 5;
            }
            if (i == 4 && j == 2) {
                octahedron[i][j] = 5;
            }
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", octahedron[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Habilidade Cruz
    printf("Demonstração da Habilidade Cruz: \n");
    int cross[skill_line][skill_column];
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            cross[i][j] = 0;
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", cross[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            if (i == 2) {
                cross[i][j] = 5;
            }
            if (j == 2) {
                cross[i][j] = 5;
            }
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", cross[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Habilidade Cone
    printf("Demonstração da Habilidade Cone: \n");
    int cone[skill_line][skill_column];
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            cone[i][j] = 0;
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            if ((i == 0 && j == 2)) {
                cone[i][j] = 5;
            }
            if (i == 1 && (j > 0 && j < 4)) {
                cone[i][j] = 5;
            }
            if (i == 2) {
                cone[i][j] = 5;
            }
        }
    }
    for (int i = 0; i < skill_line; i++) {
        for (int j = 0; j < skill_column; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
