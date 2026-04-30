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

struct Node*LCA(struct Node*root,int n1,int n2){
if(root==NULL)return NULL;
if(n1<root->data && n2<root->data)return LCA(root->left,n1,n2);
if(n1>root->data && n2>root->data)return LCA(root->right,n1,n2);
return root;
}

int main(){
int n,x,a,b;
scanf("%d",&n);

struct Node*root=NULL;

for(int i=0;i<n;i++){
scanf("%d",&x);
root=insert(root,x);
}

scanf("%d%d",&a,&b);

struct Node*ans=LCA(root,a,b);

printf("%d",ans->data);
return 0;
}
