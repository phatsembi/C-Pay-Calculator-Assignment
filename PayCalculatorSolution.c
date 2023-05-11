//Pay Calculator Solution
#include<stdio.h>

//#define is Pre-processor directive to create constants

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST .25
#define OVERTIME 40
//The constants are defined at the start and modification is easy as the default values are changed at one point


int main()

{

//Variable Declaration
int hours;
double grossPay = 0.0;
double taxes = 0.0;
double netPay = 0.0;

 printf("Please Enter The Hours Worked in The Week\n");
    scanf("%i", &hours);

    //Calculate Gross Pay

    if (hours<=40)

        grossPay=hours * PAYRATE;

    else
        {
            grossPay=40*PAYRATE;
            double overTimePay =(hours - 40) * (PAYRATE * 1.5);
            //grossPay = Gross Pay + OverTime Pay += operator
            grossPay += overTimePay;

        }

    //Calculate The Taxes

    if (grossPay <= 300)

        taxes = grossPay * TAXRATE_300;

    //ampersand && can enable 2 conditions in one else statememt

    else if (grossPay > 300 && grossPay <= 450)
        {


        taxes = 300 *TAXRATE_300;
        taxes +=(grossPay-300) * TAXRATE_150;

        }

    else if (grossPay >450)

    {
        taxes = 300 * TAXRATE_300;
        taxes +- 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;

    }

    //Calculate NetPay

    netPay = grossPay - taxes;

    //Display Outout

    printf ("Gross Pay : %2f\n", grossPay);
    //%.2f is to format it to 2 decimal places

    printf ("Taxes : %.2f\n", taxes);
    printf ("Net Pay : %.2f\n", netPay);



}
