#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int heap[1000];
int size=0;

void swap(int *a,int *b){
int t=*a;*a=*b;*b=t;
}

void heapify_up(int i){
while(i>0 && heap[(i-1)/2]>heap[i]){
swap(&heap[i],&heap[(i-1)/2]);
i=(i-1)/2;
}
}

void heapify_down(int i){
while(2*i+1<size){
int smallest=i;
int left=2*i+1,right=2*i+2;
if(left<size && heap[left]<heap[smallest])smallest=left;
if(right<size && heap[right]<heap[smallest])smallest=right;
if(smallest!=i){
swap(&heap[i],&heap[smallest]);
i=smallest;
}else break;
}
}

void insert(int x){
heap[size]=x;
heapify_up(size);
size++;
}

void extractMin(){
if(size==0){printf("-1\n");return;}
printf("%d\n",heap[0]);
heap[0]=heap[size-1];
size--;
heapify_down(0);
}

void peek(){
if(size==0)printf("-1\n");
else printf("%d\n",heap[0]);
}

int main(){
int n;
scanf("%d",&n);
char op[20];

for(int i=0;i<n;i++){
scanf("%s",op);
if(strcmp(op,"insert")==0){
int x;scanf("%d",&x);
insert(x);
}
else if(strcmp(op,"extractMin")==0)extractMin();
else if(strcmp(op,"peek")==0)peek();
}
return 0;
}
