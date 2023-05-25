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














    printf("Programm executed successfully!\n");

    }
    else {
        printf("File \"%s\" already exists!\n***********************\n******  EXITING  ******\n***********************\n" , output_filename);
        return 1;
    }


return 0;
}



