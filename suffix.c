#include <stdio.h>
#include <string.h>
#define MAX 10000

//char* string_suffix(char[], int);

char* string_suffix(char string[],int len)
{

 return string + (strlen(string)-len-1);
}
int  main()
{

int len;

    char string[MAX];
       printf("Введите строку: ");
       fgets(string,MAX,stdin);
          printf ("Введите длину суффикса: ");
          scanf ("%d",&len);
              if ((strlen(string)-1) >= len){
                  printf("Суффикс:%p\n",string_suffix(string,len));
                  }
    		else {printf("Error\n");}
    return 0;
}