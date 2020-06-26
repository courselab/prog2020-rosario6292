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
  int n, i;
  n=strlen(s);
  for(i=0; i<n; i++)
  {
    if(s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0'){
    n = n-1;
    }
    if(s[i] == '!' || s[i] == '"' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '&' || s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '+' || s[i] == '@' || s[i] == ',' || s[i] == '.' || s[i] == '/' || s[i] == '<' || s[i] == '>' || s[i] == '=' || s[i] == '?' || s[i] == '{' || s[i] == '}'){
    n = n-1;
    }
    if(s[i] == ' '){
    n = n-1;
    }
  }
  n = n-1;
  return n;
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
