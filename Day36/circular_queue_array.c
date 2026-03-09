#include <stdio.h>
#define MAX 1000

int main(){
int n,m,i;
int q[MAX];
int front=0,rear=-1,size=0;
scanf("%d",&n);
for(i=0;i<n;i++){
int x;
scanf("%d",&x);
rear=(rear+1)%MAX;
q[rear]=x;
size++;
}
scanf("%d",&m);
for(i=0;i<m;i++){
if(size>0){
front=(front+1)%MAX;
size--;
}
}
for(i=0;i<size;i++){
printf("%d",q[(front+i)%MAX]);
if(i<size-1) printf(" ");
}
return 0;
}
