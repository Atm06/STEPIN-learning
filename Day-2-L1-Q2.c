#include <stdio.h>
void swap(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swapping: x = %d, y = %d\n", x, y);

    double a = 2.5, b = 7.8;
    printf("Before swapping: a = %lf, b = %lf\n", a, b);
    swap(&a, &b, sizeof(double));
    printf("After swapping: a = %lf, b = %lf\n", a, b);

    char c1 = 'A', c2 = 'Z';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
