#include <stdio.h>
#include <sys/time.h>

double wtime()
{
  struct timeval tv;
  
  gettimeofday(&tv,NULL);
  
  return tv.tv_sec+tv.tv_msec/IE6;
}


main()
{
double t;

int n,i,j,u,max;
scanf ("%d",&n);

int a[n];

   for (i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   
   max= a[0];
   
   for (i=1;i<n;i++)
   {
     if (a[i]>=max){
     max=a[i];
     
   }

   int f[max+1];

   memset(&f,0,sizeof(f));

   for(i=0;i<n;i++)
   {
    u=a[i];
    f[u]=f[u]+ 1;
   }

      for(j=0;j<(max+1);j++)
      {
        if(f[j]!=0)
        
        for (i=0;i)
        a[k]=
        
   }

}