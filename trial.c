// #include <stdio.h>
//
//
// int main(int argc, char const *argv[]) {
//   int num, k;
//   FILE *fptr;
//   fptr = fopen(argv[1],"r+");
//   if (fptr) {
//     while ((k = getc(fptr)) != EOF)
//         putchar(k);
//     fclose(fptr);
//   }
//   return 0;
// }
#include <unistd.h>

int main() {
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
  return 0;
}
