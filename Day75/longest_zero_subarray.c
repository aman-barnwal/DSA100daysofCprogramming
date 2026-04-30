#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

int prefix[2001];
for(int i=0;i<2001;i++)prefix[i]=-1;

int sum=0,maxLen=0;

for(int i=0;i<n;i++){
sum+=arr[i];

if(sum==0)maxLen=i+1;

if(prefix[sum+1000]!=-1){
int len=i-prefix[sum+1000];
if(len>maxLen)maxLen=len;
}
else{
prefix[sum+1000]=i;
}
}

printf("%d",maxLen);
return 0;
}
