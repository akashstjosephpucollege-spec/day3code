#include <stdio.h>

void greetUser() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}

int main() {
    printf("Welcome to DevOps C App\n");
    greetUser();
    return 0;
}
