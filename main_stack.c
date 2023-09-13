#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
int main()
{
    st* s = (st *)malloc(sizeof(st));
    createStack(s);
    push(s,1);
    push(s,5);
    printf("%d\n",pop(s)); 
    printStack(s);
}