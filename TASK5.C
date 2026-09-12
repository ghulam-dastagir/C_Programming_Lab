#include <stdio.h>

int main()
{
    int choice;
    printf("Choose the number between (1-4) to get the corresponding dish of the menu: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Burger\n");
            break;
        case 2:
            printf("Pizza\n");
            break;
        case 3:
            printf("Biryani\n");
            break;
        case 4:
            printf("Sandwich\n");
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}