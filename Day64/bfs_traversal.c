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

void bfs(int s){
int queue[100],front=0,rear=0;

visited[s]=1;
queue[rear++]=s;

while(front<rear){
int v=queue[front++];
printf("%d ",v);

struct Node*temp=adj[v];
while(temp){
if(!visited[temp->data]){
visited[temp->data]=1;
queue[rear++]=temp->data;
}
temp=temp->next;
}
}
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

int s;
scanf("%d",&s);

bfs(s);
return 0;
}
