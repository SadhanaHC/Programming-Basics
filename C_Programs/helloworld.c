#include <stdio.h>

int main()
{
    //hello World using normal printf statement
    printf("Hello, World!\n");
    printHello();
    userinput();
    return 0;
}

//hello world using a method
void printHello()
{
    printf("Hello, World!\n");
}

//hello world using user inputs
void userinput()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}