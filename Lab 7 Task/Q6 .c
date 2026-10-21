# include <stdio.h>

int main(){

    int i, j, MaxRow = 0, MaxCol = 0, MaxVal = 0;
    int Data[3][3], Key[3][3], Encrypted[3][3];

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("\nEnter Data value for row %d, col %d: ", i + 1, j + 1);
            scanf("%d", &Data[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("\nEnter Key value for row %d, col %d: ", i + 1, j + 1);
            scanf("%d", &Key[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            Encrypted[i][j] = (Data[i][j] * Key[i][j]) + (i + j);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("\t%d", Encrypted[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    MaxVal = Encrypted[0][0];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (Encrypted[i][j] > MaxVal){
                MaxVal = Encrypted[i][j];
                MaxRow = i;
                MaxCol = j;
            }
        }
    }

    printf("~~~~~~~~~~ Final Matrix Encryption Results ~~~~~~~~~~\n");
    printf("\n");
    printf("Maximum encrypted value is: %d\n", MaxVal);
    printf("Position is row %d, col %d\n", MaxRow + 1, MaxCol + 1);

}