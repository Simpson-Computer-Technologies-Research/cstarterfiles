#include <stdio.h>

/**
 * Name: Program Name
 * Author: Your Name
 * Function: What does this program do?
 * Compilation: gcc -std=c99 -Wall -o build/main.out src/main.c
 * Execution: ./build/main.out
 */

typedef char *string;

int main(int argc, char *argv[])
{
  // Declare all constants here.
  // Declare all variables here.
  string text = "Hello, world!\n";

  printf("%s", text);

  return 0;
}

/**
 * Notes:
 *  - Use camelCase for variable names.
 *  - We're defining a string as a pointer to a char.
 *    We learn about this in chapter 6, 8, and 10.
 *    It's not necessary, you can remove it if you'd like.
 */
