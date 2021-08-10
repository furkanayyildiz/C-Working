#include<stdio.h>
#include<stdlib.h>

void main(){
  char isim[20];
  char *soyisim;
  soyisim=(char *)malloc(20*sizeof(char));
  scanf("%s",isim);
  scanf("%s",soyisim);
  printf("%s\t%s",isim,soyisim);
  system("pause");	
}
