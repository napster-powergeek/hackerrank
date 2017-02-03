#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[100];
    long sum=0;
    long n,i;
    scanf("%ld",&n);
    
    for(i=0;i<n;i++)
    {
           scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
   {
	 sum = sum + a[i];
   }
    printf("%ld", sum);
}
