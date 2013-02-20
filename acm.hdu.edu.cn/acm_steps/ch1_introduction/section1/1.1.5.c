/* Problem Description
 * Your task is to calculate the sum of some integers.
 *
 * Input
 * Input contains an integer N in the first line, and then N lines follow. Each
 * line starts with a integer M, and then M integers follow in the same line.
 *
 * Output
 * For each group of input integers you should output their sum in one line, 
 * and with one line of output for each line in input.
 *
 * Sample Input
 * 2
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
    int c, n, a, b;
    
    scanf("%d", &c);
    while (c-- > 0)
    {
        a = 0;
        if (scanf("%d", &n) != 1)
            break;
        while (n-- > 0 && (b = getchar()) != '\n' && scanf("%d", &b))
            a += b;
        printf("%d\n", a);
        if (b == '\n')
            continue;
        while (getchar() != '\n')
            ;
    }

    return 0;
}
