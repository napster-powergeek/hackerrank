#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sum1=0,sum2=0,sum3=0,a[100][100];
    
    scanf("%d",&n);   
    int i,j,k;
    for(i=0;i<n;i++)        //scan
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
        }  
    }
                       
    for(i=0;i<n;i++)        //first sum
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum1+=a[i][j];
        }
    }
    
    for(i=0;i<n;i++)        //second sum
    {
        for(j=0;j<n;j++)
        {
            if(j==n-i-1)
            sum2+=a[i][j];
        }
    }
    int sum4;
    sum3=sum2-sum1;
    if(sum3<0)
    {   
        sum4=0-(sum3);
        printf("%d",sum4);    
    }
    else
    printf("%d",sum3);
}