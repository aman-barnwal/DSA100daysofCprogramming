#include<stdio.h>
#include<stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node*create(int val){
if(val==-1)return NULL;
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=val;n->left=n->right=NULL;
return n;
}

int max(int a,int b){return a>b?a:b;}

int height(struct Node*root){
if(root==NULL)return 0;
return 1+max(height(root->left),height(root->right));
}

int main(){
int n;
scanf("%d",&n);
int arr[n];
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

printf("%d",height(nodes[0]));
return 0;
}
