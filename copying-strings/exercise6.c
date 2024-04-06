#include<stdio.h>
#include<string.h>

int main() {
  
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan) + 1; // Checkpoint 2
  char dst2[len];
  strcpy(dst2, pan);
  // Code for checkpoint 1 goes here
  strcpy(dst, src);
  printf("%s\n", dst);  
  
  // Code for checkpoint 3 goes here
  
  printf("%s", dst2);

}