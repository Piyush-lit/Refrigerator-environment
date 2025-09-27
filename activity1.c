#include <stdio.h>
int main() {
    float temp;
    printf("Enter the temperature (in °C): ");
    scanf("%f", &temp);
    printf("You have entered %f as the temperature (in °C )\n",temp);
    if (temp<=5){
        printf("Environment in the refrigerator is healthy.");
    }
    else{
        printf("Environment in the refrigerator is unhealthy.");
    }

    return 0;
}
