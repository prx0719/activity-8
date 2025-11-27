#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char search[50];
    char car[50], status[20];
    float rent;
    int found = 0;

    f = fopen("cars.txt", "r");
    if (f== NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
      printf("******** Welcome to Renters **********\n");
    printf("Enter car name to search: ");
    scanf("%s", search);   

  
    while (fscanf(f, "%s %f %s", car, &rent, status) != EOF )
    {
       
        if (strcmp(car, search) == 0)
        {
            found = 1;

            printf("\nCar Found!\n");
            printf("Car: %s\n", car);
            printf("Rent per day: %.2f\n", rent);
            printf("Status: %s\n", status);

            if (strcmp(status, "Available") == 0)
                printf("=> The car is AVAILABLE.\n");
            else
                printf("=> The car is BOOKED.\n");

            break;  
        }
    }

    if (!found)
        printf("Car not found in file.\n");

    fclose(f);
    return 0;
}
