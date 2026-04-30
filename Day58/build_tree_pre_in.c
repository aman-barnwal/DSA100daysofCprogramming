#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*newNode(int val){
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

int search(int inorder[],int start,int end,int val){
for(int i=start;i<=end;i++)
if(inorder[i]==val)return i;
return -1;
}

struct Node*build(int preorder[],int inorder[],int start,int end,int*preIndex){
if(start>end)return NULL;

struct Node*root=newNode(preorder[(*preIndex)++]);

if(start==end)return root;

int inIndex=search(inorder,start,end,root->data);

root->left=build(preorder,inorder,start,inIndex-1,preIndex);
root->right=build(preorder,inorder,inIndex+1,end,preIndex);

return root;
}

void postorder(struct Node*root){
if(root==NULL)return;
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}

int main(){
int n;
scanf("%d",&n);

int preorder[1000],inorder[1000];

for(int i=0;i<n;i++)scanf("%d",&preorder[i]);
for(int i=0;i<n;i++)scanf("%d",&inorder[i]);

int preIndex=0;

struct Node*root=build(preorder,inorder,0,n-1,&preIndex);

postorder(root);
return 0;
}
