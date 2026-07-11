#include<stdio.h>
int main(){
    /**
     * Take input for 3 subjects (float values):

Subject 1
Subject 2
Subject 3
Calculate:

Total = Sum of all 3 subjects
Average = Total / 3
Display output exactly like this:

text

============================
   MARKS CALCULATION
============================
Subject 1    : [marks1]
Subject 2    : [marks2]
Subject 3    : [marks3]
----------------------------
Total        : [total] / 300
Average      : [average]
============================
     */

     float M1,M2,M3,sum,average;
     printf("Enter marks obtained in Mathematics: ");
     scanf("%f", &M1);
     printf("Enter marks obtained in Physics: ");
     scanf("%f", &M2);
     printf("Enter marks obtained in Chemistry: ");
     scanf("%f", &M3);

     sum = M1+M2+M3;
     average = sum/3;

     //now lets print the output

     printf("============================\n");
     printf("   MARKS CALCULATION\n");
     printf("============================\n");
     printf("Mathematics\t: %.1f/100\n", M1);
     printf("Physics    \t: %.1f/100\n", M2);
     printf("Chemistry  \t: %.1f/100\n", M3);   
     printf("----------------------------\n");
     printf("Total      \t: %.2f/300\n", sum);
     printf("Average    \t: %.2f\n", average);

     printf("============================\n");

    return 0;
}