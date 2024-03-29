/* Problem Description
 * Your task is to calculate the sum of some integers.
 *
 * Input
 * Input contains an integer N in the first line, and then N lines follow. Each
 * line starts with a integer M, and then M integers follow in the same line.
 *
 * Output
 * For each group of input integers you should output their sum in one line, 
 * and you must note that there is a blank line between outputs.
 *
 * Sample Input
 * 3
 * 4 1 2 3 4
 * 5 1 2 3 4 5
 * 3 1 2 3
 *
 * Sample Output
 * 10
 *
 * 15
 * 
 * 6
 */

#include <stdio.h>

int main(void)
{
    int c, n, a, b;

    scanf("%d", &c);
    while (c-- > 0)
    {
        a = 0;
        scanf("%d", &n);
        while (n-- > 0 && scanf("%d", &b))
            a += b;
        printf("%d\n", a);
        if (c > 0) printf ("\n");
    }

    return 0;
}
