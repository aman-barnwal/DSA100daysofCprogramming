#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Node{
int data;
struct Node* next;
};

void push(struct Node** top,int x){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=x;
newNode->next=*top;
*top=newNode;
}

int pop(struct Node** top){
struct Node* temp=*top;
int x=temp->data;
*top=temp->next;
free(temp);
return x;
}

int main(){
char exp[200];
struct Node* top=NULL;
fgets(exp,200,stdin);
char* token=strtok(exp," ");
while(token){
if(isdigit(token[0])||(token[0]=='-'&&isdigit(token[1]))){
push(&top,atoi(token));
}
else{
int b=pop(&top);
int a=pop(&top);
if(token[0]=='+') push(&top,a+b);
else if(token[0]=='-') push(&top,a-b);
else if(token[0]=='*') push(&top,a*b);
else if(token[0]=='/') push(&top,a/b);
}
token=strtok(NULL," ");
}
printf("%d",top->data);
return 0;
}
