#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int k;
scanf("%d",&k);
k=k%n;
int temp[n];
for(int i=0;i<n;i++)
temp[(i+k)%n]=a[i];
for(int i=0;i<n;i++)
printf("%d ",temp[i]);
return 0;
}

