#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int arr[1000];
for(int i=0;i<n;i++)scanf("%d",&arr[i]);

for(int i=0;i<=n/2-1;i++){
int left=2*i+1;
int right=2*i+2;

if(left<n && arr[i]>arr[left]){
printf("NO");
return 0;
}

if(right<n && arr[i]>arr[right]){
printf("NO");
return 0;
}
}

printf("YES");
return 0;
}
