#include <stdio.h>
#define MAX 1000

int main(){
int n,i,type,value;
int stack[MAX];
int top=-1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&type);
if(type==1){
scanf("%d",&value);
if(top<MAX-1){
top++;
stack[top]=value;
}
}
else if(type==2){
if(top==-1) printf("Stack Underflow\n");
else{
printf("%d\n",stack[top]);
top--;
}
}
else if(type==3){
if(top==-1) printf("Stack Underflow\n");
else{
int j;
for(j=top;j>=0;j--){
printf("%d",stack[j]);
if(j>0) printf(" ");
}
printf("\n");
}
}
}
return 0;
}
