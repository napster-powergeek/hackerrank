#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3];
    int x=0,y=0;
    int i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    int b[3];
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]<b[i])
            x++;
        if(b[i]<a[i])
            y++;
    }   
    printf("%d %d",y,x);
    return 0;
}
