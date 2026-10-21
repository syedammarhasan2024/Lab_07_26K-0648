# include <stdio.h>
int main(){
    
    int grid[3][3];
    int i, j, flag = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            
            printf("\nEnter the value for index %d,%d: ", i+1, j+1);
            scanf("%d", &grid[i][j]);

        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            
            if (grid[i][j] < 0 || grid[i][j] > 9){
                flag = -1;
                break;
            }

            for (int p = 0; p < 3; p++){
                for (int q = 0; q < 3; q++){
                    if (grid[i][j] == grid[p][q] && (i != p || j != q) && grid[i][j] != 0){
                        flag = -1;
                        break;
                    }
                }
            }
        }
    }

    if (flag == 0){
        printf("\nValid Grid");
    }
    else {
        printf("\nInvalid Grid");
    }
    
}