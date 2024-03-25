/*Samir Cerrato
COMP211
Professor Manfredi
September 25, 2022
*/

#include <stdio.h>
#include <string.h>

char min = ' ';
char max = '~';

char doshift(char c, int s){
  return min+(c-min+s) % (max - min + 1);



}
int main(void){

  char string[256];
  char cipher[256];

  int shift;

  printf("Enter a string to encyrpt: ");
  fgets(string, 256, stdin);

  printf("Enter the shift amount for Caesar cipher: ");
  scanf(" %d", &shift);

  for (int i = 0; i < strlen(string)-1; i++) {
    cipher[i]= doshift(string[i], shift);
  }

  printf("Cipher text is:  %s", cipher);

  return 0;

}
