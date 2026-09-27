# include<stdio.h>

int main(){

float attendance;
float  averagemarks;

printf("Enter attendance: ");
scanf("%f", &attendance);
printf("Enter average marks: ");
scanf("%f", &averagemarks);

if( attendance >= 75 &&averagemarks >=40 )
{
printf("Eligible");
} else {
printf("Not Eligible");
}
return 0;
}
