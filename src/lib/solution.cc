#include "solution.h"

int Solution::Factorial(int n) { 
  
  if((n < 2) && (n >= 0)) 
    return 1;
  else if(n < 0)
    return -1;
  else if(n >= 2)    
    return Factorial( n - 1 ) * n;


//  return "**** Hello World ****"; 
}

