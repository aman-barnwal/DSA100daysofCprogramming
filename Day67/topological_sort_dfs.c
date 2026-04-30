#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*next;
};

struct Node*adj[100];
int visited[100];
int stack[100],top=-1;

struct Node*createNode(int v){
struct Node*n=(struct Node*)malloc(sizeof(struct Node));
n->data=v;
n->next=NULL;
return n;
}

void addEdge(int u,int v){
struct Node*n=createNode(v);
n->next=adj[u];
adj[u]=n;
}

void dfs(int v){
visited[v]=1;

struct Node*temp=adj[v];
while(temp){
if(!visited[temp->data])
dfs(temp->data);
temp=temp->next;
}

stack[++top]=v;
}

int main(){
int n,m;
scanf("%d%d",&n,&m);

for(int i=0;i<n;i++){
adj[i]=NULL;
visited[i]=0;
}

for(int i=0;i<m;i++){
int u,v;
scanf("%d%d",&u,&v);
addEdge(u,v);
}

for(int i=0;i<n;i++){
if(!visited[i])dfs(i);
}

while(top!=-1){
printf("%d ",stack[top--]);
}

return 0;
}
