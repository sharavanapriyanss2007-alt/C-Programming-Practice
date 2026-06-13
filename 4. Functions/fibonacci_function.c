#include <stdio.h>

void fibonacci(int n) {

    int first = 0;
    int second = 1;
    int next;

    for(int i = 0; i < n; i++) {

        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}

int main() {

    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
