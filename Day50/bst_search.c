#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*newNode(int val){
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

struct Node*insert(struct Node*root,int val){
if(root==NULL)return newNode(val);
if(val<root->data)root->left=insert(root->left,val);
else root->right=insert(root->right,val);
return root;
}

int search(struct Node*root,int key){
if(root==NULL)return 0;
if(root->data==key)return 1;
if(key<root->data)return search(root->left,key);
return search(root->right,key);
}

int main(){
int n,x,key;
scanf("%d",&n);

struct Node*root=NULL;

for(int i=0;i<n;i++){
scanf("%d",&x);
root=insert(root,x);
}

scanf("%d",&key);

printf("%d",search(root,key));
return 0;
}
