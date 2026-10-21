# include <stdio.h>

int main(){

    int x, y, z, hottestLayer = 0;
    float cube[3][3][3], layerSum = 0, layerAvg[3], maxTemp;
    int maxX = 0, maxY = 0, maxZ = 0;

    for (z = 0; z < 3; z++){
        for (x = 0; x < 3; x++){
            for (y = 0; y < 3; y++){
                printf("\nEnter temperature for layer %d, row %d, col %d (in Celsius): ", z + 1, x + 1, y + 1);
                scanf("%f", &cube[z][x][y]);
            }
        }
    }

    printf("\n");

    for (z = 0; z < 3; z++){
        layerSum = 0;
        for (x = 0; x < 3; x++){
            for (y = 0; y < 3; y++){
                layerSum += cube[z][x][y];
            }
        }
        layerAvg[z] = layerSum / 9.0;
        printf("Average temperature of Layer %d: %.2f\n", z + 1, layerAvg[z]);
    }

    printf("\n");

    hottestLayer = 0;
    for (z = 1; z < 3; z++){
        if (layerAvg[z] > layerAvg[hottestLayer]){
            hottestLayer = z;
        }
    }

    maxTemp = cube[0][0][0];
    for (z = 0; z < 3; z++){
        for (x = 0; x < 3; x++){
            for (y = 0; y < 3; y++){
                if (cube[z][x][y] > maxTemp){
                    maxTemp = cube[z][x][y];
                    maxZ = z;
                    maxX = x;
                    maxY = y;
                }
            }
        }
    }

    printf("~~~~~~~~~~ Final Greenhouse Monitoring Results ~~~~~~~~~~\n");
    printf("\n");
    for (z = 0; z < 3; z++){
        printf("Layer %d average is: %.2f\n", z + 1, layerAvg[z]);
    }
    printf("\nThe hottest layer is Layer %d with an average temperature of %.2f.\n", hottestLayer + 1, layerAvg[hottestLayer]);
    printf("The maximum temperature recorded is %.2f at Layer %d, Row %d, Col %d.\n", maxTemp, maxZ + 1, maxX + 1, maxY + 1);

}