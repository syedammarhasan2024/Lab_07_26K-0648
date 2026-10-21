# include <stdio.h>
int main(){

    int i, j, rows;

    printf("How many rows do you want: ");
    scanf("%d", &rows);
    printf("\n");

    for (i = 0; i < rows; i++){
        for (j = 0; j < rows; j++){
            if (j < (rows-1) - i){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    int count = 0;

    for (i = 0; i < rows; i++){
        for (j = 0; j < rows; j++){
            if (j < (rows-1) - i){
                printf(" ");
            }
            else {
                count += 1;
                printf("%d", count);
            }
            
        }
        count = 0;
        printf("\n");
    }

    printf("\n");
    printf("\n");

    char ascii = 64;

    for (i = 0; i < rows; i++){
        for (j = 0; j < rows; j++){
            if (j < (rows-1) - i){
                printf(" ");
            }
            else {
                ascii += 1;
                printf("%c", ascii);
            }
            
        }
        ascii = 64;
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 1; i <= rows; i++){
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        for (j = 0; j < ((i * 2) - 1); j++){
            printf("*");
        }
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 1; i <= rows; i++){
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        for (j = 0; j < (i * 2) - 1; j++){
            count++;
            printf("%d", count);
        }
        count = 0;
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 1; i <= rows; i++){
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        for (j = 0; j < (i * 2) - 1; j++){
            ascii++;
            printf("%c", ascii);
        }
        ascii = 64;
        count = 0;
        for (j = 0; j < (rows - i); j++){
            printf(" ");
        }
        printf("\n");
    }
}