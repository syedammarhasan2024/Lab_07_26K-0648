# include <stdio.h>

int main(){

    int d, e, NumDepartments, NumEmployees, DaysWorked, Salary = 0;
    int DeptTotal = 0, GrandTotal = 0;

    printf("\nEnter the number of departments in the company: ");
    scanf("%d", &NumDepartments);

    for (d = 1; d <= NumDepartments; d++){
        DeptTotal = 0;
        printf("Enter the number of employees in department %d: ", d);
        scanf("%d", &NumEmployees);

        for (e = 1; e <= NumEmployees; e++){

            printf("\nEnter the number of days worked by employee %d: ", e);
            scanf("%d", &DaysWorked);

            Salary = DaysWorked * 500;
            if (DaysWorked > 25){
                Salary += 2000;
            }

            DeptTotal += Salary;
            GrandTotal += Salary;

            printf("Department %d, employee %d: days worked = %d, salary = $%d", d, e, DaysWorked, Salary);
            printf("\n");
        }

        printf("\n");
        printf("Total salary paid in department %d: $%d\n", d, DeptTotal);
        printf("\n");
    }

    printf("~~~~~~~~~~ Final Employee Salary Results ~~~~~~~~~~\n");
    printf("\n");
    printf("Total salary paid across all departments combined: $%d\n", GrandTotal);
    printf("\n");
}