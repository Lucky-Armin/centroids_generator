#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){


    char *output_filename = "mof5-centroids.dat";

    int check_name = access(output_filename, F_OK); 
    if (check_name != 0) {

    printf("Programm executed successfully!\n");

















    }
    else {
        printf("File \"%s\" already exists!\n***********************\n******  EXITING  ******\n***********************\n" , output_filename);
        return 1;
    }


return 0;
}



