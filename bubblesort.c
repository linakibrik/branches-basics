#include <stdio.h>

int main()
{
    int i,n,p,u;

    scanf("%d",&n)
    int a[n];
    
    for (i=0; i<n;++i)
    {
//        printf ("a[%d]= ",i+1);
        scanf("%d",&a[i]);
    }   
       for (p=0;p<n-1;p++) {
             for (i=0; i<n;++i) {   
                if( a[i]>a[i+1]) {
                
                u = a[i];
                a[i] = a[i+1];
                a[i+1] = u;
                }
             }
        }
        
    for (i=0; i<n;++i)
    {
    printf("%d\t",a[i]);
    }

    return 0;

}