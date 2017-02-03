#include<stdio.h>

int main(){
    int n,k,q,temp,x,i;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    k = k % n;
    
    for(i=0;i<n;i++){
        b[(i+k)%n]=a[i];
         
    }
    for(i=0;i<q;i++){
        scanf("%d",&x);
        printf("%d\n",b[x]);
    }
    return 0;
}