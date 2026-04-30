#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;int hd;};

struct Node*create(int val){
if(val==-1)return NULL;
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;n->hd=0;
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

int map[2000][100];
int count[2000]={0};

struct Node*root=nodes[0];
root->hd=1000;

enqueue(root);

while(front<rear){
struct Node*curr=dequeue();
int hd=curr->hd;

map[hd][count[hd]++]=curr->data;

if(curr->left){
curr->left->hd=hd-1;
enqueue(curr->left);
}
if(curr->right){
curr->right->hd=hd+1;
enqueue(curr->right);
}
}

for(int i=0;i<2000;i++){
if(count[i]>0){
for(int j=0;j<count[i];j++)
printf("%d ",map[i][j]);
printf("\n");
}
}

return 0;
}
