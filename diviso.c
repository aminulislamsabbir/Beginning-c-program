#include<stdio.h>

/*problem: https://dimikoj.com/problems/4/52-problem-book-divisor-by-dimik-computing*/

int main() {
    int T,N;
    scanf("%d",&T);
    for (int i = 1; i<=T; i++) {
        scanf("%d",&N);
        printf("Case %d :",i);
        for (int j = 1; j<=N;j++) {
            if (N % j == 0) {
                    printf(" %d",j);
            }
        }
        printf("\n");
    }
}