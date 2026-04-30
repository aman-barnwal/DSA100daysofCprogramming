#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*create(int val){
if(val==-1)return NULL;
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

struct Node*mirror(struct Node*root){
if(root==NULL)return NULL;

struct Node*temp=root->left;
root->left=mirror(root->right);
root->right=mirror(temp);

return root;
}

void inorder(struct Node*root){
if(root==NULL)return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}

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

struct Node*root=mirror(nodes[0]);

inorder(root);
return 0;
}
