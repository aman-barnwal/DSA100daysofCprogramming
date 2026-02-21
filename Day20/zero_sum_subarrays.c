#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);

int count=0;
int prefix=0;

for(int i=0;i<n;i++){
prefix=0;
for(int j=i;j<n;j++){
prefix+=a[j];
if(prefix==0)
count++;
}
}

printf("%d",count);
return 0;
}
