/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Basic File Handling
*/

#include <stdio.h>//fprint, fgets, fgetc
#include <stdlib.h>//exit(), 

void writeToFile();
void readFromFile();
void appendToFile();

int main(int argc, char** argv)
{
	writeToFile();
	readFromFile();
	appendToFile();
	//readFromFile();
	
	return 0;
}

void writeToFile()
{
	FILE*fp;
	char sentence[300];
	fp=fopen("C:\\Users\\USER\\Documents\\C Files\\sample3.txt", "w");
	
	if(fp==NULL)
	{
		printf("Error creating the file \n");
		exit(1);
	}
	
	printf("Enter a paragraph ");
	fgets(sentence, sizeof(sentence), stdin);
	//no use of scanf() bcoz accepts one word
	
	fputs(sentence, fp);//or fprintf(fp, "%s", sentence);
	
	printf("Paragraph succefully written to file \n");
	
	fclose(fp);
}


void readFromFile()
{
	FILE *fp;
	char sentence[300];
	int ch;
	fp=fopen("C:\\Users\\USER\\Documents\\C Files\\sample3.txt", "r");
	
	if(fp==NULL)
	{
		printf("Error creating the file\n");
		exit(1);
	}
	
	//read from file
	while((ch=getc(fp)) !=EOF)  // \0
	{
		putchar(ch);
	}
		printf("File Succesfully read \n");
		fclose(fp);
}

void appendToFile()
{
	FILE *fp;
	char sentence[300];
	fp=fopen("C:\\Users\\USER\\Documents\\C Files\\sample3.txt", "a");
	
	if(fp==NULL)
	{
		printf("Error creating the file \n");
		exit(1);
	}
	printf("Enter a paragraph to append:\n");
	fgets(sentence, sizeof(sentence), stdin);
	fputs(sentence, fp);
	
	printf("paragraph succefully appended to file \n");
	fclose(fp);
	
}