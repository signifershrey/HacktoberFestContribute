#include<stdio.h> 
int fact(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fact(n-1) * n; 
} 
  
int main () 
{ 
  int n = 5; 
  printf("%d", fact(n)); 
  
  return 0; 
} 
