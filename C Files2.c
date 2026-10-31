//c files

#include <stdio.h>//scanf(), printf(),fopen(),fprintf(),
#include <stdlib.h>//exit()

int main()
{
	//ope file
	FILE *fptr;//address for filr storing
	char sentence[300];
	fptr=fopen("C:\\Users\\USER\\Documents\\C Files\\sample2.txt","w"); 
	
	if(fptr==NULL)
	{
		printf("Error opening the file \n");
		exit(1);
	}
	
	
	printf("Enter a sentence/paragraph :");
	//scanf("%s", &sentence);
	fgets(sentence, sizeof(sentence), stdin );
	
	//write a file
	fprintf(fptr, "This is a sentence %s \n", sentence);
	
	//close
	fclose(fptr);
	
	printf("\nFile Written Succesfully\n");
	
	
	return 0;
}