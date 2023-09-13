#include "stack.h"
#include<stdlib.h>


//create stack
void createStack(st *s){
    s->top = -1;
}

int isFull(st* s){
    if(s->top==SIZE-1){
        return 1;
    }
    else 
    return 0;
}

int isEmpty(st *s)
{
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}



