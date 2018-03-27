#include <stdio.h>
/* this program can be rewritten for exercises of any kind */

main()
{
  int c;
  while (1) {
    if ((c = getchar() != EOF) == 1) {
      printf("uno\n");
    } else if (c == 0) {
      printf("cero\n");
      break;
    } else {
      printf("what\n");
    }
  }
}
