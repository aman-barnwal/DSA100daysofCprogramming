#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
return (*(int*)a - *(int*)b);
}

int canPlace(int stalls[],int n,int k,int dist){
int count=1;
int last=stalls[0];

for(int i=1;i<n;i++){
if(stalls[i]-last>=dist){
count++;
last=stalls[i];
if(count>=k) return 1;
}
}
return 0;
}

int main(){
int n,k;
scanf("%d%d",&n,&k);

int stalls[100000];
for(int i=0;i<n;i++) scanf("%d",&stalls[i]);

qsort(stalls,n,sizeof(int),cmp);

int left=1,right=stalls[n-1]-stalls[0],ans=0;

while(left<=right){
int mid=left+(right-left)/2;

if(canPlace(stalls,n,k,mid)){
ans=mid;
left=mid+1;
}else{
right=mid-1;
}
}

printf("%d",ans);
return 0;
}
