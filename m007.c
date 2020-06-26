/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

/* Count the number of letters in string s.*/

int lettercount (char *s)
{
  int n, i, w=0;
  n=strlen(s);
  for(i=0; i<n; i++)
  {
    if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z'){
    w = w+1;
    }
    if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z'){
    w = w+1;
    }
  }
  return w;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
