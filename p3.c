#include <stdio.h>

void greetUser() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}

void addNumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

int main() {
    printf("Welcome to DevOps C App\n");
    greetUser();
    addNumbers();
    return 0;
}
