#include<stdio.h>
#include "stack.h"
int main()
{  int n;
st s1;
    do
    {  
       	printf("\nEnter 1:for merge sort \nEnter 2:for add \nEnter 3:for insertion sort \nEnter 4:for postfix evaluation \nEnter 0:for exit\n");
   	scanf("%d",&n);
   	
   	switch(n)
    {case 1:
    createStack(&s1);
    push(&s1,23);
    printf("%d",pop(&s1));
    }
        
    } while (n);
    
}