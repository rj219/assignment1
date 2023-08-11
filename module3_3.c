#include <stdio.h>
#include <conio.h>

int main()
{
    int ht, chem, th, maths;
    float Percentage;

    printf("Enter Acc marks : ");
    scanf("%d", &ht);

    printf("Enter Stat marks : ");
    scanf("%d", &chem);

    printf("Enter Ba marks : ");
    scanf("%d", &th);

    printf("Enter Eco marks : ");
    scanf("%d", &maths);

    int Total = ht + chem + th + maths;
    printf("Total marks is %d \n", Total);

    Percentage = Total / 4;

    printf("percentage is %f \n", Percentage);

    if (Percentage > 70)
    {
        printf("Distinctio");
    }

    else if (Percentage >= 60 && Percentage < 70)
    {
        printf("First Class");
    }

    else if (Percentage >= 50 && Percentage < 60)
    {
        printf("Second Class");
    }

    else if (Percentage >= 40 && Percentage < 50)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");
    }

    return 0;
}