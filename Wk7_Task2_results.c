#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold the student information
struct Student {
    char name[50];
    int regNo;
    int totalMarks;
};

// Function Prototype
void writeToFile();
void readFromFile();

// Function Call
int main() {
    writeToFile();
    readFromFile();
    return 0;
}

//Functions Definition
void writeToFile() {
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\results.dat", "wb");

    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("How many students? ");
    scanf("%d", &n);

    getchar(); // clear the Enter left by scanf

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: \t");
        fgets(s.name, sizeof(s.name), stdin);
        // remove the \n that fgets keeps
        s.name[strcspn(s.name, "\n")] = '\0';

        printf("Enter registration number: ");
        scanf("%d", &s.regNo);

        printf("Enter total marks: ");
        scanf("%d", &s.totalMarks);
        getchar(); // clear Enter before next fgets

        fwrite(&s, sizeof(struct Student), 1, fp);
    }


    fclose(fp);
    printf("\nRecords written to file successfully!\n");
}

// Function definition: readFromFile
void readFromFile() {
    struct Student s;
    FILE *fp;

    fp = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\results.dat", "rb");

    if (fp == NULL) {
        printf("Error opening the file\n");
        exit(1);
    }

    printf("\n--- Student Results ---\n");
    printf("Name\t\tTotal Marks\n");
    printf("______________________________\n");

    // ii. Read all records one by one until end of file
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        
        printf("%s\t\t%d\n", s.name, s.totalMarks);
    }

    fclose(fp);
}