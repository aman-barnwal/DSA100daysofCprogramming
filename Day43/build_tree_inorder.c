#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* left;
struct Node* right;
};

struct Node* create(int val){
if(val==-1)return NULL;
struct Node* node=(struct Node*)malloc(sizeof(struct Node));
node->data=val;
node->left=node->right=NULL;
return node;
}

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

if(n==0)return 0;

struct Node* nodes[1000];

for(int i=0;i<n;i++){
nodes[i]=create(arr[i]);
}

for(int i=0;i<n;i++){
if(nodes[i]!=NULL){
int l=2*i+1,r=2*i+2;
if(l<n)nodes[i]->left=nodes[l];
if(r<n)nodes[i]->right=nodes[r];
}
}

void inorder(struct Node* root){
if(root==NULL)return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}

inorder(nodes[0]);
return 0;
}
