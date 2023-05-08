#include<stdio.h>

int main()


{

    //Variable Declaration
    //Employees are George, Asher, Esther
    //Employee Numbers are 100, 200, 300

    char EmpName[30];
    int EmpNumber;
    int HoursWorked;

    printf("Please Enter The Employee Number :");
    scanf("%d", &EmpNumber);

    switch(EmpNumber)
{


    case 100:
    printf("Employee Name: George\n");
    printf("Employee Number : %d\n", EmpNumber);
    printf("Please Enter The Hours Worked in The Week\n");
    scanf("%i", &HoursWorked);

    //Standard Hours Mon - Friday = 8am to 5pm = 9 hours
    //Mon to Friday OT Hours = 5pm to 10pm = 5 hours
    //Saturday Normal = 8am to 1pm =5 hours
    //Saturday OT = 1pm to 5pm 5 hours
    //Max Work Hours = 80 hours/Week??



    break;

    case 200:
    printf("Employee Name: Asher");
    printf("Employee Number : %d", EmpNumber);
    break;

    case 300:
    printf("Employee Name: Esther");
    printf("Employee Number : %d", EmpNumber);
    break;

    default:
    printf("The Employee Number is Incorrect");
    break;
}
}
