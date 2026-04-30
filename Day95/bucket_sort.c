#include<stdio.h>
#include<stdlib.h>

struct Node{
    float val;
    struct Node* next;
};

void insertSorted(struct Node** head,float value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->val=value;
    newNode->next=NULL;

    if(*head==NULL || (*head)->val>=value){
        newNode->next=*head;
        *head=newNode;
        return;
    }

    struct Node* temp=*head;
    while(temp->next && temp->next->val<value){
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}

int main(){
    int n;
    scanf("%d",&n);

    float arr[1000];
    for(int i=0;i<n;i++) scanf("%f",&arr[i]);

    struct Node* buckets[1000]={NULL};

    /* distribute */
    for(int i=0;i<n;i++){
        int idx = n * arr[i];
        insertSorted(&buckets[idx], arr[i]);
    }

    /* concatenate */
    for(int i=0;i<n;i++){
        struct Node* temp=buckets[i];
        while(temp){
            printf("%.2f ",temp->val);
            temp=temp->next;
        }
    }

    return 0;
}
