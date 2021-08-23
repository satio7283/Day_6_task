#include <stdio.h>
#include <stdlib.h>

int main(){
	char input;
	int i = 0;
    int j = 0;
    
	FILE *fp;
	fp= fopen("D:\\finaltask6.txt", "r");
	printf("File opened successfully\n");
    printf("String input from file: ");
    
    while(1){
    input = fgetc(fp);
    if(input==EOF)
        break;
   	else
        printf("%c", input);
     }
     
    printf("\nReserved string: ");
    fseek(fp,0,SEEK_END);
    i = ftell(fp);
    
    while(j < i){
    j++;
    fseek(fp,-j,SEEK_END);
    printf("%c",fgetc(fp));
    }
    printf("\nThe Reserved string is added to the file successfully \n");
	system("pause");
	return 0;
}

