#include<stdio.h>
int main(){

    /**
     * Create a program that:

INPUT:
Student Name
Roll Number
Marks in 5 subjects (C Programming, Python, DSA, Math, Digital Electronics)
PROCESS:
Calculate Total (sum of 5 subjects)
Calculate Percentage (total/500 * 100)
Determine Grade (same logic as Challenge 3)
Determine Pass/Fail
OUTPUT:
text

==========================================
        STUDENT GRADE REPORT CARD
==========================================
Name            : [name]
Roll Number     : [roll]
------------------------------------------
Subject                        Marks
------------------------------------------
C Programming                  [marks1]
Python                         [marks2]
Data Structures                [marks3]
Mathematics                    [marks4]
Digital Electronics            [marks5]
------------------------------------------
Total Marks                    [total] / 500
Percentage                     [percentage]%
Grade                          [grade]
==========================================
Result: [PASS/FAIL]
==========================================
     */
    char s1[25],s2[25],s3[25],s4[25],s5[25];
    printf("Enter Subjects: \n");
    printf("Enter Subject name 1: ");
    scanf(" %[^\n]", s1);
    /**
     * Use scanf(" %[^\n]", s1) instead of scanf("%s", s1)

    What does %[^\n] mean?
        %[^\n] = "Read everything UNTIL you hit a newline (Enter key)"
        The space before % clears any leftover whitespace
        This allows you to read full strings with spaces
     */
    printf("Enter Subject name 2: ");
    scanf(" %[^\n]", s2);
    printf("Enter Subject name 3: ");
    scanf(" %[^\n]", s3);
    printf("Enter Subject name 4: ");
    scanf(" %[^\n]", s4);
    printf("Enter Subject name 5: ");
    scanf(" %[^\n]", s5);

    //now lets start with report

    //Student Info
char name[50];
int  roll_no;
printf("Enter your name: ");
scanf(" %[^\n]", name);
printf("Enter Roll Number: ");
scanf("%d", &roll_no);

    //Marks calculator
float M1,M2,M3,M4,M5,sum,percentage;
     printf("Enter marks obtained in %s: ",s1);
     scanf("%f", &M1);
     printf("Enter marks obtained in %s: ",s2);
     scanf("%f", &M2);
     printf("Enter marks obtained in %s: ",s3);
     scanf("%f", &M3);
     printf("Enter marks obtained in %s: ",s4);
     scanf("%f", &M4);
     printf("Enter marks obtained in %s: ",s5);
     scanf("%f", &M5);
     
     sum = M1+M2+M3+M4+M5;
     percentage = (sum/500)*100;



printf("==========================================\n");

printf("        STUDENT GRADE REPORT CARD\n");

printf("==========================================\n");
printf("Name:     \t%s\n", name);
printf("Roll No.: \t%d\n", roll_no);
printf("------------------------------------------\n");
printf("Subject                        Marks\n");
printf("------------------------------------------\n");
printf("%-30s %.2f\n", s1, M1);   // Left-align subject in 30 chars
printf("%-30s %.2f\n", s2, M2);
printf("%-30s %.2f\n", s3, M3);
printf("%-30s %.2f\n", s4, M4);
printf("%-30s %.2f\n", s5, M5);
printf("------------------------------------------\n");
printf("Total Marks     \t: %.2f/500\n", sum);
printf("Percentage      \t: %.2f %%\n", percentage);
//lets use conditional statements for grade
char grade;
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
    printf("Grade\t: %c\n", grade);
printf("==========================================\n");
//RESULT
if (percentage>=50)
{
printf("Result    \t: PASS\n");
}else
{
printf("Result    \t: FAIL\n");
}

printf("==========================================\n");

    return 0;
}