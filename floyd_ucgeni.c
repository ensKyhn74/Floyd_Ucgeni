#include <stdio.h>
// klavyeden satır sayısı girilir, ekrana Floyd Üçgeni çizdirilir
// input: 3 için
/* output: 1
           2 3
	   4 5 6	
*/

int main()

{ 
 
 int n;
 int x = 1 , i = 1;

 printf("Floyd Ucgeni icin satir sayisi girin: ");
 scanf("%d",&n); 
 
 while(i <= n)
 {
  int j = 1; // içteki while her bittiğinde j 1'e çekilir 

  while(j <= i)
  {
   printf("%d ",x); 
   x++;
   j++;
  }

  printf("\n");
  i++;
 }

 return 0;

}