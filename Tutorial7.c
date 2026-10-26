#include<stdio.h> 
#include<ctype.h> 
#define MAX 5 
int stack[MAX]; 
int top=-1; 
void push(int x) 
{ 
stack [++top]=x; 
} 
int pop() 
{ 
return stack[top--]; 
} 
int evaluatepostfix(char*exp) 
{ 
int i; 
for(i=0;exp[i]!='\0';i++) 
{ 
char ch=exp[i]; 
if(isdigit(ch)) 
{ 
push(ch-'0'); 
} 
else 
{ 
int val1=pop(); 
int val2=pop(); 
switch(ch) 
{ 
case'+': 
push(val1+val2); 
break; 
case'-': 
push(val1-val2);
    break; 
case'*': 
push(val1*val2); 
break; 
case'/': 
push(val1/val2); 
break; 
} 
} 
} 
return pop(); 
} 
int main() 
{ 
char exp[100]; 
printf("Enter postfix expression:"); 
scanf("%s",exp); 
printf("Result=%d\n",evaluatepostfix(exp)); 
return 0; 
} 
