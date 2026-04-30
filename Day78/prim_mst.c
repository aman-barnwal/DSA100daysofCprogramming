#include<stdio.h>
#include<limits.h>

int graph[100][100];
int key[100];
int visited[100];

int minKey(int n){
int min=INT_MAX,idx=-1;

for(int i=1;i<=n;i++){
if(!visited[i] && key[i]<min){
min=key[i];
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

key[i]=INT_MAX;
visited[i]=0;
}

for(int i=0;i<m;i++){
int u,v,w;
scanf("%d%d%d",&u,&v,&w);
graph[u][v]=w;
graph[v][u]=w;
}

key[1]=0;
int total=0;

for(int i=1;i<=n;i++){
int u=minKey(n);
visited[u]=1;
total+=key[u];

for(int v=1;v<=n;v++){
if(graph[u][v] && !visited[v] && graph[u][v]<key[v]){
key[v]=graph[u][v];
}
}
}

printf("%d",total);
return 0;
}
