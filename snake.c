#include <stdio.h>

int main()
{
int rows,cols;


int i,j,x;

x=0;

printf("Enter rows and cols number:");
scanf ("%d %d", &rows, &cols);


int matrix[rows][cols];

for (i = 0; i < rows; ++i)  {
if (i%2 == 0){
   for  (j = 0; j < cols; ++j) {
       matrix [i][j] = x;
       x++;
       }
     }

   else {x = x+1;
   for  (j = cols; j >= 0; j--) {
        
         matrix [i][j]=x;
        x++;
                  }
        }
}

    
for (i = 0; i < rows; ++i) {
   for (j = 0; j < cols; ++j) {
      printf ("%4d", matrix [i][j]);
      }
      printf ("\n");
      
 }
}