#include<stdio.h>
int main() {
    /**
     * Problem Statement:
Create a program that takes a student's percentage, determines if they passed or failed, and assigns a grade based on specific criteria.

Requirements:
Ask user to enter percentage (float)

Determine Result:

If percentage >= 50 → PASS
If percentage < 50 → FAIL
Determine Grad':'
= 90 → O

= 80 → A

= 70 → B

= 60 → C

= 50 → D

< 50 → F
Display output exactly like this:

text

============================
    RESULT ANALYSIS
============================
Percentage   : [percentage]%
Grade        : [grade]
Result       : [PASS/FAIL]
============================
     */

     //Real Code starts from here

     float percentage;
     char grade;

    printf("Enter percentage: ");
    scanf("%f", &percentage);
    
    //if-else conditional statements

    if (percentage>=50)
    {
        if (percentage>=90)
        {
            grade = 'O';
        }else if (percentage>=80)
        {
            /* code */grade = 'A';
        }else if (percentage>=70)
        {
            /* code */grade = 'B';
        }else if (percentage>=60)
        {
            /* code */grade = 'C';
        }else if (percentage>=50)
        {
            /* code */grade = 'D';
        }
    }else
    {
        grade = 'F';
    }
    

//Lets print output now

printf("============================\n");
printf("    RESULT ANALYSIS\n");
printf("============================\n");
printf("Percentage\t: %.2f %%\n", percentage);
printf("Grade     \t: %c\n", grade);
//conditional statement for pass or fail
if (percentage>=50)
{
printf("Result    \t: PASS\n");
}else
{
printf("Result    \t: FAIL\n");
}


printf("============================\n");
    
    

    return 0;
}