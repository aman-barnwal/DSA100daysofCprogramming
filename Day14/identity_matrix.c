#include <stdio.h>

int main(){
int n,flag=1;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i==j&&a[i][j]!=1)flag=0;
if(i!=j&&a[i][j]!=0)flag=0;
}
}

if(flag)printf("Identity Matrix");
else printf("Not an Identity Matrix");
return 0;
}

