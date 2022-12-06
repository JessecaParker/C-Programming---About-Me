/* Jesseca Wirtz - IT-FP2240 - u01a1 - Part 1
 * 05/01/2020
 */


#include <stdio.h>

int main(void) {

    //declares the variables that will be used in the code
    int firstNumber = 10;
    double secondNumber = 15.25;
    //outputs the two saved variables to the screen
    printf("\nWelcome to IT2240 - \"Introduction to Programming\"\n");
    printf("This is a sample C program. ");
    printf("The two variables are integers:\n");
    printf("\tfirstNumber = %d\n", firstNumber);
    printf("\tsecondNumber = %f\n", secondNumber);
    //Add the two saved variables together to get the sum and saves
    //it to the variable sum
    double sum = firstNumber + secondNumber;
    printf("The sum of firstNumber + secondNumber is %.2f.\n", sum);
    //divides sum by 2 to get the average of the two numbers
    printf("The average of the numbers is %.3f.\n\n", sum / 2);

    int myNumber;
    //prompts the user to enter in a number and saves it to myNumber
    //then outputs the number using %d
    printf("Enter an integer: ");
    scanf("%d", &myNumber);
    printf("You entered %d.\n", myNumber);

    return 0;
}
