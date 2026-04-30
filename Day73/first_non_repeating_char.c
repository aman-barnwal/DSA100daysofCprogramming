#include<stdio.h>
#include<string.h>

int main(){
char s[1000];
scanf("%s",s);

int freq[26]={0};

for(int i=0;s[i];i++){
freq[s[i]-'a']++;
}

for(int i=0;s[i];i++){
if(freq[s[i]-'a']==1){
printf("%c",s[i]);
return 0;
}
}

printf("$");
return 0;
}
