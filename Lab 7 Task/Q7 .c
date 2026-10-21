# include <stdio.h>

int main(){

    int i, j, Rows, Product = 0;

    printf("\nEnter how many rows do you want: ");
    scanf("%d", &Rows);
    printf("\n");

    for (i = 1; i <= Rows; i++){
        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = Rows; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("~~~~~~~~~~ Final Pattern Generation Results ~~~~~~~~~~\n");
    printf("\n");

    for (i = 1; i <= Rows; i++){
        for (j = 1; j <= i; j++){
            Product = i * j;
            printf("\t%d ", Product);
        }
        printf("\n");
    }

}