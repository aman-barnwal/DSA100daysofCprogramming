#include<stdio.h>
#include<string.h>

char names[1000][50];
int count[1000];

int main(){
int n;
scanf("%d",&n);

int unique=0;

for(int i=0;i<n;i++){
char temp[50];
scanf("%s",temp);

int found=-1;

for(int j=0;j<unique;j++){
if(strcmp(names[j],temp)==0){
found=j;
break;
}
}

if(found==-1){
strcpy(names[unique],temp);
count[unique]=1;
unique++;
}
else{
count[found]++;
}
}

int maxVotes=0;
char winner[50];

for(int i=0;i<unique;i++){
if(count[i]>maxVotes || (count[i]==maxVotes && strcmp(names[i],winner)<0)){
maxVotes=count[i];
strcpy(winner,names[i]);
}
}

printf("%s %d",winner,maxVotes);

return 0;
}
