#include <stdio.h>
#include <stdlib.h>
/*
struct Student {
    char name[];
    int age;
    double gpa;
};
*/
int main()
{
    // single line comment
    /*multi-line comment*/
    // char characterName1[] = "John";
    // char characterName2[] = "Ssaava";
    // int age = 10;
    // create a constant variable
    // const name = "emmanuel\n";
    // name = "wamala"; //this is wrong since we cannot modify the constant
    // printf(name);

    /* if(age <= 18){
        printf("%s is %d years old\n", characterName1, age);
    }else {
        printf("%s is %d years old\n", characterName2, age);
    }*/

    // getting user input using scanf() function
    // declare the variable first before prompting the user input
    /*
    char age[20];
    printf("Enter your age: \n");
    fgets(age, 20, stdinf);
    printf("You are %s years old\n",age);
    */
    // use fgets() to store multiple input string characters with spaces


    // basic calculator in C programming
    /*
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Answer: %d", num1 + num2);
    */

    // creating a simple game in C MADLIBS
    /*
    char color[20];
    char noun[20];
    char celebrity[20];
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", noun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s\n", celebrity);
    */

    // Arrays in C programming
    /*
    int luckyNumbers[] = {1,2,4,5,6,7};
    printf("%d", luckyNumbers[3]);
    */

    //functions in C programming
    /*
    welcome();
    printf("The sum of the numbers is: %d",sum(4,5));
    */

    // structs in C programming. let them start with a capital letter.
    // they are used to store a collection of data holding different datatypes
    // take them as objects in JavaScript
    /*
    struct Student student1;
    student1.age = 23;
    //student1.name = "Emmanuel"; //this wont work since it is an array
    student1.gpa = 3.6;
    // instead use string copy function
    strcpy(student1.name, "Emmanuel");
    */

    // building a guessing game in C programming
    /*
    int secretNumber = 5;
    int guess;
    int trys = 0;
    printf("Enter a number: ");
    scanf("%d", &guess);
    while(secretNumber !=guess){
        printf("Try again! ");
        scanf("%d", &guess);
        trys++;
        if(trys == 2) {
            guess = 5;
        }

    }
    if(trys == 2 && guess == 5) {
        printf("You have failed the game the number is %d \n", guess);
    }else {
        printf("*********You have guessed the secreteNumber**********");
    }
    */


    return 0;
}
// this is a function that returns the sum of 2 numbers
int sum(x,y) {
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("\n");

    return x+y;
}
// this is a function that has no return type
void welcome() {
    printf("*******************************************************\n");
    printf("*****Hey welcome to my Maths Functions of Addition*****\n");
    printf("*******************************************************\n");
}

