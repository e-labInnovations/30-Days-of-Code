#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    char s1[100];

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i1);
    scanf("%lf", &d1);
    scanf(" %[^\n]", s1);

    // printf("%d", )

    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i1);

    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + d1);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    char result[120];
    snprintf(result, sizeof(result), "%s%s", s, s1);
    printf("%s", result);

    return 0;
}