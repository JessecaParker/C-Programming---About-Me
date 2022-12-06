/* Jesseca Wirtz - IT-FP2240 - u1a1 - Part 3
 * 05/01/20
 */

 #include <stdio.h>

 main()
 {

    //declares the integers that equate to each variable
    int x = 10;
    int y = 5;
    int intAnswer;

    //declares the floating point numbers that equate to each variable
    float a = 20.0;
    float b = 5.0;
    float floatAnswer;

    //adds x and y together and outputs the equation and answer
    intAnswer = x + y;
    printf("%d + %d = %d\n", x, y, intAnswer);

    //multiplies x and y together and outputs the equation and answer
    intAnswer = x * y;
    printf("%d * %d = %d\n", x, y, intAnswer);

    //divided b from a and outputs the equation and answer
    floatAnswer = 20.0 / 5.0;
    printf("%.1f / %.1f = %.1f.\n", a, b, floatAnswer);

    //subtracts b from a and outputs the equation and answer
    floatAnswer = 20.0 - 5.0;
    printf("%.1f - %.1f = %.1f.\n", a, b, floatAnswer);

    return 0;

 }
