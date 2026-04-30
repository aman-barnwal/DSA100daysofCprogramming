#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*next;
};

struct Node*adj[100];
int visited[100];

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

n=createNode(u);
n->next=adj[v];
adj[v]=n;
}

int dfs(int v,int parent){
visited[v]=1;

struct Node*temp=adj[v];
while(temp){
int u=temp->data;

if(!visited[u]){
if(dfs(u,v))return 1;
}
else if(u!=parent){
return 1;
}

temp=temp->next;
}

return 0;
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
if(!visited[i]){
if(dfs(i,-1)){
printf("YES");
return 0;
}
}
}

printf("NO");
return 0;
}
