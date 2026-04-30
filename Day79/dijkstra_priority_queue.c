#include<stdio.h>
#include<limits.h>

int graph[100][100];
int dist[100];
int visited[100];

int minDist(int n){
int min=INT_MAX,idx=-1;

for(int i=1;i<=n;i++){
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

for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++)
graph[i][j]=0;

dist[i]=INT_MAX;
visited[i]=0;
}

for(int i=0;i<m;i++){
int u,v,w;
scanf("%d%d%d",&u,&v,&w);
graph[u][v]=w;
graph[v][u]=w;
}

int src;
scanf("%d",&src);

dist[src]=0;

for(int i=1;i<=n;i++){
int u=minDist(n);
visited[u]=1;

for(int v=1;v<=n;v++){
if(graph[u][v] && !visited[v] && dist[u]+graph[u][v]<dist[v]){
dist[v]=dist[u]+graph[u][v];
}
}
}

for(int i=1;i<=n;i++){
printf("%d ",dist[i]);
}

return 0;
}
