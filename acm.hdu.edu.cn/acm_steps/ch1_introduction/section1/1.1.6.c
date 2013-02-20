/* Problem Description
 * Your task is to calculate the sum of some integers.
 *
 * Input
 * Input contains multiple test cases, and one case one line. Each case starts 
 * with an integer N, and then N integers follow in the same line.
 *
 * Output
 * For each test case you should output the sum of N integers in one line, and
 * with one line of output for each line in input.
 *
 * Sample Input
 * 4 1 2 3 4
 * 5 1 2 3 4 5
 *
 * Sample Output
 * 10
 * 15
 */

#include <stdio.h>

int main(void)
{
    int c, a, b;

    while (scanf("%d", &c) != EOF)
    {
        a = 0;
        while (c-- > 0 && (b = getchar()) != '\n' && scanf("%d", &b))
            a += b;
        printf("%d\n", a);
        if (b == '\n')
            continue;
        while (getchar() != '\n')
            ;
    }

    return 0;
}
