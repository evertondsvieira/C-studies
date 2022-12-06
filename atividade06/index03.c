#include <stdio.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
 
int str_len(char x[])
{
  int i = 0;
  while (x[i]!=0)
    i++;
  return i;
}
 
int str_ncmp(char string1[], char string2[], int n)
{
  int i;
  int j;

  if(n > str_len(string1) || n>str_len(string2) || n < 0){
	printf("Valor de tamanho excede string 1 ou string 2 ou é invalido \n");
	return -1;
  }
  
  for (j=0;j<n;j++) {
	if(string1[j]!=string2[j]){
	    return 0;
	}
  }
 
  return 0;
}
 
int main()
{
  int i;
  char x[100]="Everton";
  char y[100]="E";
 
  i = str_ncmp(x, y, 3);
  printf("%d\n", i); 
  
  return 0;
}