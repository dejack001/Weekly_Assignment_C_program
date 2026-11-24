#include <stdio.h>
#include <stdlib.h>
//function prototype
void writeBookTitle();
void appendToFile();

int main(){
	//function call
	//writeBookTitle();
    appendToFile();

return 0;
}
//function definition
void writeBookTitle(){
	FILE *fd;
	char title[100];
	
	fd = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\borrowed_books.txt","w");
	if (fd == NULL){
		printf("\n Error opening the file");
		exit(1);}
	
	printf("Enter Title of The Book Borrowed: \n");
	fgets(title, sizeof(title), stdin);
	
	fputs(title, fd);
	
	printf("\n Successfully written to file");

fclose(fd);
}
void appendToFile(){
	FILE *fd;
	char title[100];
	
	fd = fopen("C:\\Users\\Victor\\Desktop\\file\\jackFile\\borrowed_books.txt","a");
	if (fd == NULL){
		printf("\n Error opening the file");
		exit(1);}
	
	printf("Enter Title of The Book Borrowed: \n");
	fgets(title, sizeof(title), stdin);
	
	fputs(title, fd);
	
	printf("\n Successfully Appended to file");

fclose(fd);
}
