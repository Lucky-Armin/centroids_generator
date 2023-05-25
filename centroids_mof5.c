#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){


    char *output_filename = "mof5-centroids.dat";

    int check_name = access(output_filename, F_OK); 
    if (check_name != 0) {


    int indexC1 = 41;
    int indexC2 = 43;
    int indexC3 = 45;
    int indexC4 = 48;
    int indexC5 = 50;
    int indexC6 = 56;

    int j = 0;


    for (int i = 0; i<=23; i++) {
        printf("ar[%d][%d]=%d; " , i , j , indexC1);
        printf("ar[%d][%d]=%d; " , i , j+1 , indexC2);
        printf("ar[%d][%d]=%d; " , i , j+2 , indexC3);
        printf("ar[%d][%d]=%d; " , i , j+3 , indexC4);
        printf("ar[%d][%d]=%d; " , i , j+4 , indexC5);
        printf("ar[%d][%d]=%d;\n" , i , j+5 , indexC6);

        indexC1 = indexC1 +16;
        indexC2 = indexC2 +16;
        indexC3 = indexC3 +16;
        indexC4 = indexC4 +16;
        indexC5 = indexC5 +16;
        indexC6 = indexC6 +16;

    }


    printf("Centroids generated successfully!\n");

    }
    else {
        printf("File \"%s\" already exists!\n***********************\n******  EXITING  ******\n***********************\n" , output_filename);
        return 1;
    }


return 0;
}



