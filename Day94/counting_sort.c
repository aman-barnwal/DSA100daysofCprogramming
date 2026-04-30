#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int arr[1000];
int max=0;

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
if(arr[i]>max) max=arr[i];
}

/* frequency array */
int freq[1001]={0};

for(int i=0;i<n;i++){
freq[arr[i]]++;
}

/* prefix sum */
for(int i=1;i<=max;i++){
freq[i]+=freq[i-1];
}

/* output array */
int output[1000];

for(int i=n-1;i>=0;i--){
output[freq[arr[i]]-1]=arr[i];
freq[arr[i]]--;
}

/* print result */
for(int i=0;i<n;i++){
printf("%d ",output[i]);
}

return 0;
}
