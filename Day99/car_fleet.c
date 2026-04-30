#include<stdio.h>
#include<stdlib.h>

struct Car{
    int pos;
    float time;
};

/* sort by position descending */
int cmp(const void* a,const void* b){
    struct Car* x=(struct Car*)a;
    struct Car* y=(struct Car*)b;
    return y->pos - x->pos;
}

int main(){
    int n,target;
    scanf("%d%d",&n,&target);

    int position[100000],speed[100000];

    for(int i=0;i<n;i++) scanf("%d",&position[i]);
    for(int i=0;i<n;i++) scanf("%d",&speed[i]);

    struct Car cars[100000];

    for(int i=0;i<n;i++){
        cars[i].pos = position[i];
        cars[i].time = (float)(target - position[i]) / speed[i];
    }

    qsort(cars,n,sizeof(struct Car),cmp);

    int fleets = 0;
    float prevTime = 0;

    for(int i=0;i<n;i++){
        if(cars[i].time > prevTime){
            fleets++;
            prevTime = cars[i].time;
        }
    }

    printf("%d",fleets);
    return 0;
}
