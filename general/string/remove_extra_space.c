#include<stdio.h>

int main() {
  /* Variable Declaration and Initialization. */
  char inputs[100] = "I  am Nandhini", output[100];
  int c = 0, d = 0;

  /* Taking user input */
  //printf("Enter some text:\n");
  //gets(inputs);

  /* Check and remove additional spaces using loop. */
  while (inputs[c] != '\0') {
    if (!(inputs[c] == ' ' && inputs[c + 1] == ' ')) {
      output[d] = inputs[c];
      d++;
    }
    c++;
  }

  output[d] = '\0';
  printf("Text after removing extra spaces:\n%s\n", output);

  return 0;
}