#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int graph[100][100];
int dist[100];
int visited[100];

int minDist(int n){
int min=INT_MAX,idx=-1;
for(int i=0;i<n;i++){
if(!visited[i] && dist[i]<min){
min=dist[i];
idx=i;
}
}
return idx;
}

int main(){
int n,m;
scanf("%d%d",&n,&m);

for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
graph[i][j]=0;
dist[i]=INT_MAX;
visited[i]=0;
}

for(int i=0;i<m;i++){
int u,v,w;
scanf("%d%d%d",&u,&v,&w);
graph[u][v]=w;
}

int src;
scanf("%d",&src);

dist[src]=0;

for(int i=0;i<n;i++){
int u=minDist(n);
if(u==-1)break;

visited[u]=1;

for(int v=0;v<n;v++){
if(graph[u][v] && !visited[v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v]){
dist[v]=dist[u]+graph[u][v];
}
}
}

for(int i=0;i<n;i++){
if(dist[i]==INT_MAX)printf("INF ");
else printf("%d ",dist[i]);
}

return 0;
}
