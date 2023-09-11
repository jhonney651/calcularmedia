#include <ncurses.h>

int main() {
    float nota1, nota2, media;
    initscr();
    printw("Calculadora de Média \n\n");
    printw("Informe a primeira nota do aluno: ");
    scanw("%f", &nota1);
    printw("Informe a segunda nota do aluno: ");
    scanw("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printw("A média final do aluno é: %.2f", media);
    refresh();
    getch();
    endwin();
    return 0;
}
