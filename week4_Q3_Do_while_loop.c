#include <stdio.h>

int main(){
    int password = 1234, trial;
    
    do{
    printf("\nEnter Password (example 4467): \t");
    scanf("%d", &trial);
    }
    
    while(trial != password);
    
    printf("\nAccess Granted");
    
return 0;
}