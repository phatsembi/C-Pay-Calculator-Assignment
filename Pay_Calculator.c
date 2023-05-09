#include<stdio.h>

int main()


{

    //Variable Declaration
    //Employees are George, Asher, Esther
    //Employee Numbers are 100, 200, 300

    char EmpName[30];
    int EmpNumber;
    int HoursWorked;
    float BasicPay;
    float OverTimePay;
    float TotalPay;
    float TaxRate1=0.15, TaxRate2=0.20, TaxRate3=0.25;
    float Tax1, Tax2, Tax3, TotalTax, NetPay;

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

    if (HoursWorked>80)
        {

        printf("Maximum Work Hours Per Week Exceeded\n");
        BasicPay = 0;
        OverTimePay = 0;

        }
    else if (HoursWorked <40)
        {

        BasicPay=HoursWorked*12;
        OverTimePay = 0;

        }
    else
        {
        BasicPay=40*12;
        OverTimePay = ((HoursWorked-40)*12*1.5);

        }
        TotalPay=(BasicPay+OverTimePay);


    if (TotalPay<=300)
        {
            Tax1=(TaxRate1*TotalPay);

        }

    else if (TotalPay<=450)
        {
            Tax1=(TaxRate1*300);
            Tax2=(TaxRate2*(TotalPay-300));
        }

    else
        {
            Tax1=(TaxRate1*300);
            Tax2=(TaxRate2*150);
            Tax3=(TaxRate3*(TotalPay-450));

        }

    TotalTax=(Tax1+Tax2+Tax3);
    NetPay=(TotalPay-TotalTax);

    printf("Total Hours Worked : %d\n", HoursWorked);
    printf("Basic Pay : %f\n", BasicPay);
    printf("Over Time Pay : %f\n", OverTimePay);
    printf("Total Pay : %f\n", TotalPay);
    printf("Tax Band 1 : %f\n", Tax1);
    printf("Tax Band 2 : %f\n", Tax2);
    printf("Tax Band 3 : %f\n", Tax3);
    printf("Total Tax Charged: %f\n", TotalTax);
    printf("Net Pay: %f\n", NetPay);




        //Calculate The Tax Rate



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
