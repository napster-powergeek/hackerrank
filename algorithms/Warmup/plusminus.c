#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        
    float x=0,y=0,z=0,q,w,e;
    int n,i;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {scanf("%f",&a[i]);
    
    if(a[i]<0)
        y++;
    else if(a[i]>0)
        x++;
    else 
        z++;
    }    
    q=x/n;
    w=y/n;
    e=z/n;
    printf("%f\n",q);
    printf("%f\n",w);
    printf("%f\n",e);
    return 0;
}
