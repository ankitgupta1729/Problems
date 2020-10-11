#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stack
{
	int top;
	unsigned capacity;
	int *array;
}
struct stack *create_stack(unsigned capacity1)
{
	struct stack *s1=(struct stack*)malloc(sizeof(struct stack*));
    if(!s1)
    	return NULL;
    s1->top=-1;
    s1->capacity=capacity1;
    s1->array=(int*)malloc(s1->capacity*sizeof(int));
    if(!s1->array)
    	return NULL;
    return s1;

}
int isOperand(char ch)
{
   return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ;
}
void push(struct stack *s2,char op)
{
	s2->array[s2->top++]=op;
}
int infix_to_postfix(char *exp)
{
      int i,k;
      struct stack *s2= create_stack(strlen(exp));
      if(!s2)
      	return -1;
      for(i=0,k=-1;exp[i];i++)
      {
      	if(isOperand(exp[i]))
      		exp[k++]=exp[i];
        else if (exp[i]=='(')
        	push(s2,exp[i]);
        else if(exp[i]==')')
        {
        	while(!)
        }
      }

}
int main()
{
	char exp[]="a*2+1-1&2/5";
	infix_to_postfix(exp);
}