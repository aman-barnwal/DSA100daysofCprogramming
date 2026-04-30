#include<stdio.h>
#include<string.h>

#define SIZE 100

int table[SIZE];
int used[SIZE];

int hash(int key,int m){
return key % m;
}

void insert(int key,int m){
int h=hash(key,m);

for(int i=0;i<m;i++){
int idx=(h + i*i) % m;

if(!used[idx]){
table[idx]=key;
used[idx]=1;
return;
}
}
}

int search(int key,int m){
int h=hash(key,m);

for(int i=0;i<m;i++){
int idx=(h + i*i) % m;

if(!used[idx])return 0;
if(table[idx]==key)return 1;
}
return 0;
}

int main(){
int m,n;
scanf("%d",&m);
scanf("%d",&n);

for(int i=0;i<m;i++)used[i]=0;

for(int i=0;i<n;i++){
char op[10];
int x;
scanf("%s %d",op,&x);

if(strcmp(op,"INSERT")==0)
insert(x,m);
else if(strcmp(op,"SEARCH")==0){
if(search(x,m))printf("FOUND\n");
else printf("NOT FOUND\n");
}
}

return 0;
}
