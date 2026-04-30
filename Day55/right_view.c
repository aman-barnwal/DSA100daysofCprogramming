#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*create(int val){
if(val==-1)return NULL;
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

struct Node*queue[1000];
int front=0,rear=0;

void enqueue(struct Node*n){queue[rear++]=n;}
struct Node*dequeue(){return queue[front++];}

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

struct Node*nodes[1000];

for(int i=0;i<n;i++)nodes[i]=create(arr[i]);

for(int i=0;i<n;i++){
if(nodes[i]!=NULL){
int l=2*i+1,r=2*i+2;
if(l<n)nodes[i]->left=nodes[l];
if(r<n)nodes[i]->right=nodes[r];
}
}

struct Node*root=nodes[0];
enqueue(root);

while(front<rear){
int size=rear-front;

for(int i=0;i<size;i++){
struct Node*curr=dequeue();

if(i==size-1)printf("%d ",curr->data);

if(curr->left)enqueue(curr->left);
if(curr->right)enqueue(curr->right);
}
}

return 0;
}
