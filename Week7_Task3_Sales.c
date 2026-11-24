#include <stdio.h>
#include <stdlib.h>

//function prototype
void writeToFile();
void readFromFile();

int main(){
    //function call
    writeToFile();
    readFromFile();

    return 0;
}

//function definition
void writeToFile(){
    FILE *fp;
    char transaction[100];

    fp = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\sales.txt", "w");

    if(fp == NULL){
        printf("Error opening the file");
        exit(1);
    }
    //writing to file
    printf("Enter transaction in each line: \n");
	

    // Loop so you can enter many transactions, not just 1
    while(1){
        fgets(transaction, sizeof(transaction), stdin);
        if(transaction[0] == '\n'){
            break;
        }
        fputs(transaction, fp);
    }

    printf("\nSuccessfully written to file\n");

    fclose(fp);
}

void readFromFile(){
    FILE *fp;
    float amount, total = 0;

    fp = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\sales.txt", "r");

    if(fp == NULL){
        printf("Error opening the file");
        exit(1);
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total = total + amount;
        printf("%.2f\n", amount);
    }

    printf("\n__________________________________________\n");
	printf("\nTotal sales = Ksh %.2f\n", total);
    printf("\n__________________________________________\n");
    printf("\nSuccessfully read from file");

    fclose(fp);
}