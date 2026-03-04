#include <stdio.h>
#define MAX 1000

int main(){
int n,i,m,x;
int stack[MAX];
int top=-1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
stack[++top]=x;
}
scanf("%d",&m);
for(i=0;i<m;i++){
if(top>=0) top--;
}
for(i=top;i>=0;i--){
printf("%d",stack[i]);
if(i>0) printf(" ");
}
return 0;
}
