# include <stdio.h>

int main(){

    int c, s, sub, NumClasses, NumStudents, NumSubjects, Marks, Failed = 0;
    float StudentTotal = 0, StudentAvg = 0, ClassTotal = 0, SchoolTotal = 0, ClassAvg = 0;
    float SchoolAvg = 0, TotalStudents = 0;

    printf("\n");
    printf("Enter the number of classes in the school: ");
    scanf("%d", &NumClasses);

    for (c = 1; c <= NumClasses; c++){
        ClassTotal = 0;
        printf("Enter the number of students in class %d: ", c);
        scanf("%d", &NumStudents);

        for (s = 1; s <= NumStudents; s++){
            StudentTotal = 0;
            Failed = 0;
            printf("Enter the number of subjects for class %d, student %d: ", c, s);
            scanf("%d", &NumSubjects);
            printf("\n");

            for (sub = 1; sub <= NumSubjects; sub++){
                printf("Enter marks for subject %d: ", sub);
                scanf("%d", &Marks);

                StudentTotal += Marks;
                if (Marks < 40){
                    Failed = 1;
                }
            }
            printf("\n");

            StudentAvg = StudentTotal / NumSubjects;
            ClassTotal += StudentTotal;
            SchoolTotal += StudentTotal;
            TotalStudents++;

            if (Failed == 1){
                printf("Class %d, student %d: total marks = %.0f, average = %.2f, result = Fail\n", c, s, StudentTotal, StudentAvg);
            }
            else {
                printf("Class %d, student %d: total marks = %.0f, average = %.2f, result = Pass\n", c, s, StudentTotal, StudentAvg);
            }
            printf("\n");
        }

        ClassAvg = ClassTotal / NumStudents;
        printf("Total marks in class %d: %.0f, class average: %.2f\n", c, ClassTotal, ClassAvg);
        printf("\n");
    }

    SchoolAvg = SchoolTotal / TotalStudents;
    printf("~~~~~~~~~~ Final School Exam Results ~~~~~~~~~~\n");
    printf("\n");
    printf("Total marks across all classes combined: %.0f\n", SchoolTotal);
    printf("Overall school average: %.2f\n", SchoolAvg);
    printf("\n");

}