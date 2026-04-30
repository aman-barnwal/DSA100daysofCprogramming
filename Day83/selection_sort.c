#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

for(int i=0;i<n-1;i++){
int minIdx=i;

for(int j=i+1;j<n;j++){
if(arr[j]<arr[minIdx]){
minIdx=j;
}
}

int temp=arr[i];
arr[i]=arr[minIdx];
arr[minIdx]=temp;
}

for(int i=0;i<n;i++)printf("%d ",arr[i]);

return 0;
}
