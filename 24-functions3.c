#include <stdio.h>

int takenumber(){
    int i;
    printf("Enter a number:");
    scanf("%d", &i);
    return i;
}

int main()
{
    int c = takenumber();
    printf("The number entered is: %d", c);
    return 0;
}
