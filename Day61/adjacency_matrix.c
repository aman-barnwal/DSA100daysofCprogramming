#include<stdio.h>

int main(){
int n,m;
scanf("%d%d",&n,&m);

int adj[100][100]={0};

for(int i=0;i<m;i++){
int u,v;
scanf("%d%d",&u,&v);

adj[u][v]=1;
adj[v][u]=1;
}

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d ",adj[i][j]);
}
printf("\n");
}

return 0;
}
