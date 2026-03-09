#include <stdio.h>
#include <ctype.h>

int prec(char c){
if(c=='+'||c=='-') return 1;
if(c=='*'||c=='/') return 2;
if(c=='^') return 3;
return 0;
}

int main(){
char exp[100],stack[100];
int top=-1,i=0;
scanf("%s",exp);
while(exp[i]){
char c=exp[i];
if(isalnum(c)) printf("%c",c);
else{
while(top!=-1&&prec(stack[top])>=prec(c)) printf("%c",stack[top--]);
stack[++top]=c;
}
i++;
}
while(top!=-1) printf("%c",stack[top--]);
return 0;
}
