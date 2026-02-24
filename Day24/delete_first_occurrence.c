#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
};

int main(){
int n,key;
scanf("%d",&n);

struct node *head=NULL,*temp=NULL,*newnode=NULL;

for(int i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
head=newnode;
temp=newnode;
}else{
temp->next=newnode;
temp=newnode;
}
}

scanf("%d",&key);

struct node *curr=head,*prev=NULL;

while(curr!=NULL){
if(curr->data==key){
if(prev==NULL)
head=curr->next;
else
prev->next=curr->next;
free(curr);
break;
}
prev=curr;
curr=curr->next;
}

temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}

return 0;
}
