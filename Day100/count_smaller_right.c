#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    int idx;
};

void merge(struct Node arr[], int left, int mid, int right, int count[]){
    int i = left, j = mid + 1, k = 0;
    struct Node temp[100000];

    while(i <= mid && j <= right){
        if(arr[i].val <= arr[j].val){
            temp[k++] = arr[j++];
        }else{
            count[arr[i].idx] += (right - j + 1);
            temp[k++] = arr[i++];
        }
    }

    while(i <= mid) temp[k++] = arr[i++];
    while(j <= right) temp[k++] = arr[j++];

    for(i = 0; i < k; i++){
        arr[left + i] = temp[i];
    }
}

void mergeSort(struct Node arr[], int left, int right, int count[]){
    if(left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid, count);
    mergeSort(arr, mid + 1, right, count);
    merge(arr, left, mid, right, count);
}

int main(){
    int n;
    scanf("%d",&n);

    struct Node arr[100000];
    int count[100000] = {0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].val);
        arr[i].idx = i;
    }

    mergeSort(arr, 0, n-1, count);

    for(int i=0;i<n;i++){
        printf("%d ",count[i]);
    }

    return 0;
}
