#include <stdio.h>
#include <windows.h>

#define PROGRESS_BAR_SIZE 40

void print_n_chars(int n, int c) {
    while (n-- > 0) putchar(c);
}

void display_progress_bar(int p) {
    putchar('\r');
    putchar('[');
    print_n_chars(PROGRESS_BAR_SIZE * p / 100, '|');
    print_n_chars(PROGRESS_BAR_SIZE - PROGRESS_BAR_SIZE * p / 100, ' ');
    putchar(']');
}

int main(void) {
    int p;
    for (p = 0; p <= 100; ++p) {
        display_progress_bar(p);
        Sleep(100);
    }
    return 0;
}
