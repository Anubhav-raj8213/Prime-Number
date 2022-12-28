#include <stdio.h>
int main()
    {
      int i,n; 
      printf("Enter your number\n");
      scanf ("%d", &n);
      int a=0;
      for(i=2; i<n; i++){
        if(n==1 || n==2){
          printf("It is a prime number\n");
        }
        else if(n%i==0){
          printf("It is a composite number\n");
          a=1;
          break;
        }
        }
         if(a==0){
           printf("It is a prime number.");
          }
      return 0;
    }