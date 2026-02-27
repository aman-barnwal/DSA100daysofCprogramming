#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
struct node* prev;
};

int main(){
int n;
scanf("%d",&n);

struct node *head=NULL,*temp=NULL,*newnode=NULL;

for(int i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;

if(head==NULL){
head=newnode;
temp=newnode;
}else{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
}

temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}

return 0;
}
