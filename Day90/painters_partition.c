#include<stdio.h>

int canPaint(int arr[],int n,int k,int maxTime){
int painters=1,sum=0;

for(int i=0;i<n;i++){
if(arr[i]>maxTime) return 0;

if(sum+arr[i] > maxTime){
painters++;
sum=arr[i];

if(painters>k) return 0;
}else{
sum+=arr[i];
}
}

return 1;
}

int main(){
int n,k;
scanf("%d%d",&n,&k);

int arr[100000];
for(int i=0;i<n;i++) scanf("%d",&arr[i]);

int left=0,right=0;

for(int i=0;i<n;i++){
if(arr[i]>left) left=arr[i];
right+=arr[i];
}

int ans=right;

while(left<=right){
int mid=left+(right-left)/2;

if(canPaint(arr,n,k,mid)){
ans=mid;
right=mid-1;
}else{
left=mid+1;
}
}

printf("%d",ans);
return 0;
}
