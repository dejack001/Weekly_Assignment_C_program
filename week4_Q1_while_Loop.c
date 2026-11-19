#include <stdio.h>

int main(){
  float account = 1000, bal, amount;
  
  while(bal > 0){
  printf("\nEnter amount to withdraw: \t");
  scanf("%f", &amount);
  
  bal = account - amount;
  
  printf("\n_____________________________________\n");
  printf("\n Account Balance: %.2f \n", bal);
  printf("\n______________________________________\n");
  }
  
return 0;
}