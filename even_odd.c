#include<stdio.h>

/* problem link:   https://dimikoj.com/problems/1/52-problem-book-odd-even-1-by-dimik-computing */

int main () {
    int T,n;

    scanf("%d",&T);

    for(int i = 1; i<=T; i++) {
        scanf("%d",&n);

        if (n % 2 == 0) {
            printf("Even : %d\n",n);
        } else {
            printf("Odd : %d\n",n);
        }
    }
    return 0;
}