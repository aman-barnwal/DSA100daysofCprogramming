#include <stdio.h>
#define MAX 1000

int main(){
int n,i,x;
int queue[MAX];
int front=0,rear=-1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
queue[++rear]=x;
}
for(i=front;i<=rear;i++){
printf("%d",queue[i]);
if(i<rear) printf(" ");
}
return 0;
}
