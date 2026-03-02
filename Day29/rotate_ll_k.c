#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};

int main(){
int n,i,x,k;
scanf("%d",&n);
if(n<=0) return 0;
struct Node *head=NULL,*temp=NULL,*newNode=NULL;
for(i=0;i<n;i++){
scanf("%d",&x);
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=x;
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
scanf("%d",&k);
k=k%n;
if(k==0){
temp=head;
while(temp){
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
temp->next=head;
int steps=n-k;
struct Node* curr=head;
for(i=1;i<steps;i++) curr=curr->next;
head=curr->next;
curr->next=NULL;
temp=head;
while(temp){
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
