/* Problem Description
 * Your task is to Calculate the sum of some integers.
 *
 * Input
 * Input contains multiple test cases. Each test case contains a integer N, and
 * then N integers follow in the same line. A test case starting with 0 
 * terminates the input and this test case is not to be processed.
 *
 * Output
 * For each group of input integers you should output their sum in one line, 
 * and with one line of output for each line in input.
 *
 * Sample Input
 * 4 1 2 3 4
 * 5 1 2 3 4 5
 * 0
 * 
 * Sample Output
 * 10
 * 15
 */

#include <stdio.h>

int main(void)
{
    int c, a, b;

    while (scanf("%d", &c) && c > 0)
    {
        a = 0;
        /* when the line containing numbers less than number c */
        while (c-- > 0 && (b = getchar()) != '\n' && scanf("%d", &b))
            a += b;
        printf("%d\n", a);

        if (b == '\n')	/* reach the end of line */
            continue;

        /* when the line containing numbers more than number c */
        while (getchar() != '\n')
            ;
    }

    return 0;
}
