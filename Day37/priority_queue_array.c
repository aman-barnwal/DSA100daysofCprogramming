#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(){
int n,i,x,size=0;
int pq[MAX];
char op[20];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",op);
if(strcmp(op,"insert")==0){
scanf("%d",&x);
pq[size++]=x;
}
else if(strcmp(op,"delete")==0){
if(size==0) printf("-1\n");
else{
int min=0,j;
for(j=1;j<size;j++) if(pq[j]<pq[min]) min=j;
printf("%d\n",pq[min]);
for(j=min;j<size-1;j++) pq[j]=pq[j+1];
size--;
}
}
else if(strcmp(op,"peek")==0){
if(size==0) printf("-1\n");
else{
int min=0,j;
for(j=1;j<size;j++) if(pq[j]<pq[min]) min=j;
printf("%d\n",pq[min]);
}
}
}
return 0;
}
