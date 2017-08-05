#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main() {
  int num, i, isPrime=0;
  printf("Enter a positive number\n");
  scanf("%d",&num);
  
  
  for(i = 2; i <= (int)sqrt(num); ++i) {
      if(num%i==0) {
          isPrime=1;
          break;
      }
  }
   
  if(isPrime==0)
      printf("%d is a Prime Number",num);
  else
      printf("%d is NOT a Prime Number",num);
       
  getch();
  return 0;
}
