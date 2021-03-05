#include <stdio.h>
#include <conio.h>
void main(){
  int c = 0, count = 0;
  char s[1000];
  printf("Input a string:");
  gets(s);
  while (s[c] != '\0') {
    if (s[c] == 'a' ||
        s[c] == 'A' ||
        s[c] == 'e' ||
        s[c] == 'E' ||
        s[c] == 'i' ||
        s[c] == 'I' ||
        s[c] == 'o' ||
        s[c] == 'O' ||
        s[c] == 'u' ||
        s[c] == 'U'
    )
      count++;
    c++;
  }
  printf("no of vowels in string= %d\n", count);
  getch();
}
