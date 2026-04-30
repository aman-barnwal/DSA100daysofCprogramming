#include<stdio.h>
#include<stdlib.h>

/* compare for sorting by start time */
int cmp(const void* a,const void* b){
    int* x=(int*)a;
    int* y=(int*)b;
    return x[0]-y[0];
}

/* simple min heap for end times */
void heapifyUp(int heap[],int i){
    while(i>0){
        int p=(i-1)/2;
        if(heap[p]<=heap[i]) break;

        int t=heap[p];
        heap[p]=heap[i];
        heap[i]=t;

        i=p;
    }
}

void heapifyDown(int heap[],int size,int i){
    while(1){
        int l=2*i+1,r=2*i+2,small=i;

        if(l<size && heap[l]<heap[small]) small=l;
        if(r<size && heap[r]<heap[small]) small=r;

        if(small==i) break;

        int t=heap[i];
        heap[i]=heap[small];
        heap[small]=t;

        i=small;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int intervals[1000][2];

    for(int i=0;i<n;i++){
        scanf("%d%d",&intervals[i][0],&intervals[i][1]);
    }

    /* sort by start time */
    qsort(intervals,n,sizeof(intervals[0]),cmp);

    int heap[1000];
    int size=0;

    /* first meeting */
    heap[size++]=intervals[0][1];

    for(int i=1;i<n;i++){
        int start=intervals[i][0];

        /* if room free */
        if(heap[0] <= start){
            heap[0]=intervals[i][1];
            heapifyDown(heap,size,0);
        } else {
            heap[size]=intervals[i][1];
            heapifyUp(heap,size);
            size++;
        }
    }

    printf("%d",size);
    return 0;
}
