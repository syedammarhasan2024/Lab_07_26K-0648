# include <stdio.h>

int main(){

    int c, s, Sub, OverallClass = 0, OverallStudent = 0, OverallMax = 0;
    int Marks[2][3][3], Totals[2][3], ClassTopper[2], ClassMax[2];

    for (c = 0; c < 2; c++){
        for (s = 0; s < 3; s++){
            for (Sub = 0; Sub < 3; Sub++){
                printf("\nEnter marks for class %d, student %d, subject %d: ", c + 1, s + 1, Sub + 1);
                scanf("%d", &Marks[c][s][Sub]);
            }
        }
    }

    printf("\n");

    for (c = 0; c < 2; c++){
        for (s = 0; s < 3; s++){
            Totals[c][s] = 0;
            for (Sub = 0; Sub < 3; Sub++){
                Totals[c][s] += Marks[c][s][Sub];
            }
            printf("Total marks for class %d, student %d: %d\n", c + 1, s + 1, Totals[c][s]);
        }
    }

    printf("\n");

    for (c = 0; c < 2; c++){
        ClassTopper[c] = 0;
        ClassMax[c] = Totals[c][0];
        for (s = 0; s < 3; s++){
            if (Totals[c][s] > ClassMax[c]){
                ClassMax[c] = Totals[c][s];
                ClassTopper[c] = s;
            }
        }
    }

    OverallMax = Totals[0][0];
    for (c = 0; c < 2; c++){
        for (s = 0; s < 3; s++){
            if (Totals[c][s] > OverallMax){
                OverallMax = Totals[c][s];
                OverallClass = c;
                OverallStudent = s;
            }
        }
    }

    printf("~~~~~~~~~~ Final Class Performance Results ~~~~~~~~~~\n");
    printf("\n");
    for (c = 0; c < 2; c++){
        printf("Top performer of class %d: student %d with %d marks\n", c + 1, ClassTopper[c] + 1, ClassMax[c]);
    }
    printf("\nOverall topper: class %d, student %d with %d marks\n", OverallClass + 1, OverallStudent + 1, OverallMax);

}