#include <stdio.h>

int main()
{
    // =========================================
    // Case 1: Integer Arithmetic
    // =========================================
    int a1 = 10; // প্রথম integer
    int b1 = 5;  // দ্বিতীয় integer

    int sum1 = a1 + b1; // যোগ
    printf("Summation = %d\n", sum1);

    int sub = a1 - b1; // বিয়োগ
    printf("Subtraction = %d\n", sub);

    int mul = a1 * b1; // গুণ
    printf("Multiplication = %d\n", mul);

    int div1 = a1 / b1; // integer division (decimal বাদ যাবে)
    printf("Division (int) = %d\n", div1);

    // =========================================
    // Case 2: Float & Integer Arithmetic
    // =========================================
    float a2 = 6; // float variable
    int b2 = 5;   // int variable

    /*
        ⚠️ float + int → result float হয়
        তাই float টাইপে store করা উচিত
    */
    float sum2 = a2 + b2;

    /*
        Division:
        float involved থাকলে result decimal আসবে
    */
    float div2 = a2 / b2;

    printf("Division (float) = %f\n", div2);

    return 0;
}