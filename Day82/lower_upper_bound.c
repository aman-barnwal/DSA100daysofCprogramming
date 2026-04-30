#include<stdio.h>

int lowerBound(int arr[],int n,int x){
int left=0,right=n-1,ans=n;

while(left<=right){
int mid=left+(right-left)/2;

if(arr[mid]>=x){
ans=mid;
right=mid-1;
}
else left=mid+1;
}

return ans;
}

int upperBound(int arr[],int n,int x){
int left=0,right=n-1,ans=n;

while(left<=right){
int mid=left+(right-left)/2;

if(arr[mid]>x){
ans=mid;
right=mid-1;
}
else left=mid+1;
}

return ans;
}

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

int x;
scanf("%d",&x);

printf("%d %d",lowerBound(arr,n,x),upperBound(arr,n,x));

return 0;
}
