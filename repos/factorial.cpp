#include <iostream>
using namespace std;

int FirstFactorial1(int num) { 

  // code goes here  
  int factorial = num;
  while(num>1){
      factorial = factorial * (num-1);
      num--;
  }
  return factorial; 
}

int FirstFactorial(int num) { 

  // code goes here 
 int factorial = 1;
  if ( num > 0)
    factorial = FirstFactorial(--num);
    
  return factorial * (num+1); 
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
} 