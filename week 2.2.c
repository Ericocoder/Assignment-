// Eric muchui 
//cT100/G/30741/36
# include <stdio.h>
 int main ()
 {
  int Age=21;
  int Annualincome= 21000;
  printf( "Enter Age\t");
  scanf("%i",&Age);
  printf("Enter Annualincome\t");
  scanf("%i",&Annualincome);
  if(Age<=21)
  printf(" unfortunately we are unable to offer you a loan at this time");
  if( Annualincome<=21000)
  printf("unfortunately we are unable to offer you loan at this time");
  else printf("congratulation you qualify for a loan");
  return 0;
  }
  