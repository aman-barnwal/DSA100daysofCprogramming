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

int length(struct node* head){
int len=0;
while(head){
len++;
head=head->next;
}
return len;
}

int main(){
int n,m;
scanf("%d",&n);
struct node* l1=createList(n);
scanf("%d",&m);
struct node* l2=createList(m);

int len1=length(l1);
int len2=length(l2);

struct node *p1=l1,*p2=l2;

if(len1>len2){
for(int i=0;i<len1-len2;i++)
p1=p1->next;
}else{
for(int i=0;i<len2-len1;i++)
p2=p2->next;
}

while(p1&&p2){
if(p1->data==p2->data){
printf("%d",p1->data);
return 0;
}
p1=p1->next;
p2=p2->next;
}

printf("No Intersection");
return 0;
}
