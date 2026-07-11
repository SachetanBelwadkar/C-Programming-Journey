#include <stdio.h>
int main() {

char name[50];
int age, roll_no;
float height;
printf("Enter your name: ");
scanf("%s", name);
printf("Enter Roll Number: ");
scanf("%d", &roll_no);
printf("Enter age: ");
scanf("%d", &age);
printf("Enter height: ");
scanf("%f", &height);
//all the input is entered here
//Now output to be printed below

printf("================================\n");
printf("     STUDENT INFORMATION\n");
printf("================================\n");
printf("Name:     \t%s\n", name);
printf("Age:      \t%d\n", age);
printf("Roll No.: \t%d\n", roll_no);
printf("Height:   \t%.1f cm\n", height);
printf("================================");

    return 0;
}