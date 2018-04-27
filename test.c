#include "input.h"
void open_file(*a);

int main(int argc, char const *argv[])
{
    open_file(&argv[1]);

    while (1) {
        c = kbget();        // Get input
        if (c == KEY_ENTER || c == KEY_ESCAPE) {
            break;
        } else
        if (c == KEY_LEFT) {
            printf("\033[1C");      // Move cursor one left
        } else
        if (c == KEY_RIGHT) {
            printf("\033[1D");      // Move cursor one right
        } else
        if (c == KEY_UP){
            printf("\033[5;3H");      // Move cursor to 5th row, 3rd column
        }else
        if (c == KEY_DOWN){

        } else {
            putchar(c);
        }
    }
    printf("\n");

    return 0;
}


void open_file(*a) {
  FILE

}
