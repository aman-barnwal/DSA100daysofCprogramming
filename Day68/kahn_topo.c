#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*next;
};

struct Node*adj[100];
int indegree[100];

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
indegree[v]++;
}

int main(){
int n,m;
scanf("%d%d",&n,&m);

for(int i=0;i<n;i++){
adj[i]=NULL;
indegree[i]=0;
}

for(int i=0;i<m;i++){
int u,v;
scanf("%d%d",&u,&v);
addEdge(u,v);
}

int queue[100],front=0,rear=0;

for(int i=0;i<n;i++){
if(indegree[i]==0)
queue[rear++]=i;
}

while(front<rear){
int v=queue[front++];
printf("%d ",v);

struct Node*temp=adj[v];
while(temp){
int u=temp->data;
indegree[u]--;
if(indegree[u]==0)
queue[rear++]=u;
temp=temp->next;
}
}

return 0;
}
