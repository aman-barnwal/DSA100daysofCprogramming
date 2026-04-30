#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*next;
};

struct Node*adj[100];

void addEdge(int u,int v){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=v;
newNode->next=adj[u];
adj[u]=newNode;

newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=u;
newNode->next=adj[v];
adj[v]=newNode;
}

int main(){
int n,m;
scanf("%d%d",&n,&m);

for(int i=0;i<n;i++)adj[i]=NULL;

for(int i=0;i<m;i++){
int u,v;
scanf("%d%d",&u,&v);
addEdge(u,v);
}

for(int i=0;i<n;i++){
printf("%d: ",i);
struct Node*temp=adj[i];
while(temp){
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}

return 0;
}
