#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*newNode(int data){
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=data;n->left=n->right=NULL;
return n;
}

struct Node*insertLevelOrder(int arr[],int n,int i){
if(i<n){
struct Node*root=newNode(arr[i]);
root->left=insertLevelOrder(arr,n,2*i+1);
root->right=insertLevelOrder(arr,n,2*i+2);
return root;
}
return NULL;
}

struct Node*queue[100];
int front=0,rear=0;

void enqueue(struct Node*n){queue[rear++]=n;}
struct Node*dequeue(){return queue[front++];}

void levelOrder(struct Node*root){
if(root==NULL)return;
enqueue(root);
while(front<rear){
struct Node*curr=dequeue();
printf("%d ",curr->data);
if(curr->left)enqueue(curr->left);
if(curr->right)enqueue(curr->right);
}
}

int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)scanf("%d",&arr[i]);
struct Node*root=insertLevelOrder(arr,n,0);
levelOrder(root);
return 0;
}
