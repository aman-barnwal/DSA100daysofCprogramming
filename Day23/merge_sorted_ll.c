#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
};

struct node* createList(int n){
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
return head;
}

struct node* merge(struct node* l1,struct node* l2){
struct node dummy;
struct node* tail=&dummy;
dummy.next=NULL;

while(l1&&l2){
if(l1->data<=l2->data){
tail->next=l1;
l1=l1->next;
}else{
tail->next=l2;
l2=l2->next;
}
tail=tail->next;
}

if(l1)tail->next=l1;
if(l2)tail->next=l2;

return dummy.next;
}

int main(){
int n,m;
scanf("%d",&n);
struct node* l1=createList(n);
scanf("%d",&m);
struct node* l2=createList(m);

struct node* result=merge(l1,l2);

while(result){
printf("%d ",result->data);
result=result->next;
}

return 0;
}
