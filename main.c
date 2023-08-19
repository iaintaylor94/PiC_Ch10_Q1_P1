// Program to concatenate two character arrays

#include <stdio.h>

// Declare Functions
void concat (int, const char [], int , const char [], char []);

int main(void) {

  // Define character arrays
  const char s1 [5] = { 'T', 'e', 's', 't', ' ' };
  const char s2 [6] = { 'w', 'o', 'r', 'k', 's', '.' };
  char s3 [11];

  // Concatenate s1 and s2
  concat ( 5, s1, 6, s2, s3);

  // Print s3
  for ( int i = 0; i < 11; i++) {
    printf ("%c", s3 [i]);
  }
  printf ("\n");
  
  return 0;
}

// Define Functions
void concat (int str1size, const char string1 [], int str2size, const char string2 [], char string3 []) {
  int i, j;

  // Copy string1 to string3
  for (i = 0; i < str1size; i++) {
    string3 [i] = string1 [i];
  }

  // Copy string2 to string3
  for (j = 0; j < str2size; j++) {
    string3 [str1size + j] = string2 [j];
  }
}