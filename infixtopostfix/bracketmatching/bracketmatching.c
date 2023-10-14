#include <stdio.h>
#include "../stack/stack.h"

int isMatching(char character1, char character2)
{
  if (character1 == '(' && character2 == ')')
    return 1;
  else if (character1 == '{' && character2 == '}')
    return 1;
  else if (character1 == '[' && character2 == ']')
    return 1;
  else
    return 0;
}

// fucntion to check if the brackets are balanced . Return 0 if not balanced or 1 if brackets are balanced
int areBracketsBalanced(char exp[])
{
  int i = 0;
  stack *s = createStack();
  while (exp[i] != '\0')
  {

    // checking for starting brackets and pushing to stack
    if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
      push(s, exp[i]);