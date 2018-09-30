
#include <stdio.h> 
  
// Returns count of ways to reach n-th stair 
// using 1 or 2 or 3 steps. 
int findStep(int n) 
{ 
    if (n == 1 || n == 0)  
        return 1; 
    else if (n == 2)  
        return 2; 
      
    else 
        return findStep(n - 3) +  
               findStep(n - 2) + 
               findStep(n - 1);     
} 
  
// Driver code 
int main() 
{ 
    int n = 4; 
    printf("%d\n", findStep(n)); 
    return 0; 
} 
