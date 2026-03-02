#include <stdio.h>
#include <stdlib.h>

struct Node{
int coeff;
int exp;
struct Node* next;
};

int main(){
int n,i,c,e;
scanf("%d",&n);
if(n<=0) return 0;
struct Node *head=NULL,*temp=NULL,*newNode=NULL;
for(i=0;i<n;i++){
scanf("%d %d",&c,&e);
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->coeff=c;
newNode->exp=e;
newNode->next=NULL;
if(head==NULL){
head=newNode;
temp=head;
}
else{
temp->next=newNode;
temp=newNode;
}
}
temp=head;
while(temp){
if(temp->exp>1) printf("%dx^%d",temp->coeff,temp->exp);
else if(temp->exp==1) printf("%dx",temp->coeff);
else printf("%d",temp->coeff);
if(temp->next) printf(" + ");
temp=temp->next;
}
return 0;
}
