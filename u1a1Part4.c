/* Jesseca Wirtz - IT-FP2240 - u1a1 - Part 4
 * 05/01/20
 */

 #include <stdio.h>

 main()
 {
    //declares the variables to be used
    char letter;
    int number;
    float decimal;

    //prompts the user to enter a letter and saves it to letter
    printf("Enter one letter (A-Z): \n");
    scanf(" %c", &letter);

    //prompts the user to enter a number and saves it to number
    printf("Enter a number (1-100): \n");
    scanf(" %d", &number);

    //prompts the user to enter a decimal number and saves it to decimal
    printf("Enter a decimal number (ex. 8.2): \n");
    scanf(" %f", &decimal);

    //outputs the letter and numbers inputted by the user
    printf("\nThe character entered is %c.\n", letter);
    printf("The number entered is %d.\n", number);
    printf("The floating-point number entered is %.1f.\n\n\n", decimal);

    return 0;

 }
