# include <stdio.h>
int main(){

    int rows, columns, reservations, inRow, inColumn, count = -1;
    int rowcheck = 0, bookedRow = 0;
    int arr[10][4] = {0};

    printf("\nEnter the number of reservations you want to make: ");
    scanf("%d", &reservations);

    do {
        
        count++;
        printf("\nEnter the row number of seat %d: ", count + 1);
        scanf("%d", &inRow);
        printf("Enter the column number of seat %d: ", count + 1);
        scanf("%d", &inColumn);

        if ((inRow > 10) || (inRow <= 0) || (inColumn <= 0) || (inColumn > 4)){
            count--;
            printf("\nInvalid entry!\n");
            continue;
        }

        if (arr[inRow-1][inColumn-1] == 1){
            printf("\nThe seat is already booked!\n");
            count--;
            continue;
        }

        else if(arr[inRow-1][inColumn-1] == 0){
            printf("\nSeat %d has been booked!\n", count + 1);
            arr[inRow - 1][inColumn - 1] = 1;
        }

    } while (count < reservations - 1);

    if (count >= reservations - 1){

        for (rows = 0; rows < 10; rows++){
            printf("Row %d:", rows + 1);
            for (columns = 0; columns < 4; columns++){
                printf("\t%d", arr[rows][columns]);
            }
          printf("\n");
        }

        printf("\n");

        for (rows = 0; rows < 10; rows++){
            for (columns = 0; columns < 4; columns++){
                if (arr[rows][columns] == 1){
                    rowcheck++;
                }
            }
            if (rowcheck == 4){
                printf("Row %d is fully booked!\n", rows + 1);
                bookedRow++;
            }
            rowcheck = 0;
        }

        printf("\nThe total number of booked rows are: %d", bookedRow);
    }
}