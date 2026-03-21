#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[1000];
int front=-1,rear=-1;

void push_front(int x){
if(front==-1){front=rear=0;arr[front]=x;}
else{for(int i=rear;i>=front;i--)arr[i+1]=arr[i];arr[front]=x;rear++;}
}

void push_back(int x){
if(front==-1){front=rear=0;arr[rear]=x;}
else{rear++;arr[rear]=x;}
}

void pop_front(){
if(front!=-1){
if(front==rear)front=rear=-1;
else front++;
}
}

void pop_back(){
if(front!=-1){
if(front==rear)front=rear=-1;
else rear--;
}
}

void print(){
for(int i=front;i<=rear;i++)printf("%d ",arr[i]);
}

int main(){
char op[20];
while(scanf("%s",op)!=EOF){
if(strcmp(op,"push_front")==0){int x;scanf("%d",&x);push_front(x);}
else if(strcmp(op,"push_back")==0){int x;scanf("%d",&x);push_back(x);}
else if(strcmp(op,"pop_front")==0){pop_front();}
else if(strcmp(op,"pop_back")==0){pop_back();}
}
print();
return 0;
}
