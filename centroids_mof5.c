#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){


    char *output_filename = "mof5-centroids.dat";
    FILE * fileptr;

    fileptr=fopen(output_filename, "r");

     if(fileptr != NULL)
     {
       printf("File \"%s\" already exists!\n***********************\n******  EXITING  ******\n***********************\n" , output_filename);
       return 1;
     }

    FILE *output_file = fopen(output_filename, "w");      
    int index[6] = {41, 43, 45, 48, 50, 56};


    for (int i = 0; i<=23; i++) {
        for (int j = 0; j<=5; j++) {

        fprintf(output_file , "ar[%02d][%d]=%03d; " , i , j , index[j] + 16 * i);

        }
	
	fprintf(output_file , "\n");
    }

    fclose(output_file);
    printf("Centroids generated successfully!\n");
    return 0;
}

