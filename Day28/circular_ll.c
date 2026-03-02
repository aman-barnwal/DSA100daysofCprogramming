#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};

int main(){
int n,i,x;
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
temp->next=head;
struct Node* curr=head;
do{
printf("%d ",curr->data);
curr=curr->next;
}while(curr!=head);
return 0;
}
