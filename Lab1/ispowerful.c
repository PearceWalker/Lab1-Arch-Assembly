#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPowerful(int n) {
    if (n == 1) {
        return 1;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            if (count < 2) {
                return 0;
            }
        }
    }

    if (n > 1 && isPrime(n)) {
        return 0;
    }

    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("false\n");
        return 0;
    }

    if (isPowerful(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}



