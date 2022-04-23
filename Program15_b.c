// ftell()
 /* #include<stdio.h>
  
int main()
{
    // Opening file in read mode 
    FILE *fp = fopen("test.txt","r");
  
    // Reading first string 
    char string[20];   
    fscanf(fp,"%s",string);
  
    // Printing position of file pointer 
    printf("%ld", ftell(fp));
    return 0;
} */
#include <stdio.h>
  
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
      
    // Moving pointer to end
    fseek(fp, 0, SEEK_END);
      
    // Printing position of pointer
    printf("%ld", ftell(fp));
  
    return 0;
}