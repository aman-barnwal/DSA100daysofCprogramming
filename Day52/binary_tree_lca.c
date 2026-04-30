#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*create(int val){
if(val==-1)return NULL;
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

struct Node*LCA(struct Node*root,int n1,int n2){
if(root==NULL)return NULL;
if(root->data==n1||root->data==n2)return root;

struct Node*left=LCA(root->left,n1,n2);
struct Node*right=LCA(root->right,n1,n2);

if(left&&right)return root;
return left?left:right;
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

int a,b;
scanf("%d%d",&a,&b);

struct Node*ans=LCA(nodes[0],a,b);

printf("%d",ans->data);
return 0;
}
