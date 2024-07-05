#include <stdio.h>
#include <string.h>

// Define the structure for a car
struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
};

// Function to fill the car structure
void fillCar(struct Car *car, const char *make, const char *model, int year, float price) {
    strcpy(car->make, make);
    strcpy(car->model, model);
    car->year = year;
    car->price = price;
}

// Function to display car details
void displayCarDetails(struct Car car, int carNumber) {
    printf("Car %d: %s %s, Year: %d, Price: $%.2f\n", carNumber, car.make, car.model, car.year, car.price);
}

int main() {
    struct Car cars[10];

    // Fill the car structures
    fillCar(&cars[0], "Toyota", "Camry", 2020, 24000.50);
    fillCar(&cars[1], "Honda", "Civic", 2019, 22000.00);
    fillCar(&cars[2], "Ford", "Mustang", 2021, 30000.00);
    fillCar(&cars[3], "Chevrolet", "Malibu", 2018, 18000.75);
    fillCar(&cars[4], "Nissan", "Altima", 2022, 25000.00);
    fillCar(&cars[5], "BMW", "3 Series", 2020, 40000.00);
    fillCar(&cars[6], "Audi", "A4", 2021, 42000.50);
    fillCar(&cars[7], "Mercedes-Benz", "C-Class", 2019, 45000.00);
    fillCar(&cars[8], "Hyundai", "Elantra", 2020, 20000.00);
    fillCar(&cars[9], "Kia", "Optima", 2021, 23000.00);

    int choice;
    char continueChoice;

    do {
        // Display the list of cars
        printf("Select a car by entering the corresponding number:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d. %s %s\n", i + 1, cars[i].make, cars[i].model);
        }

        // Get the user's choice
        printf("Enter the number of the car you want to see details of: ");
        scanf("%d", &choice);

        // Display the details of the selected car using a switch statement
        switch (choice) {
            case 1:
                displayCarDetails(cars[0], 1);
                break;
            case 2:
                displayCarDetails(cars[1], 2);
                break;
            case 3:
                displayCarDetails(cars[2], 3);
                break;
            case 4:
                displayCarDetails(cars[3], 4);
                break;
            case 5:
                displayCarDetails(cars[4], 5);
                break;
            case 6:
                displayCarDetails(cars[5], 6);
                break;
            case 7:
                displayCarDetails(cars[6], 7);
                break;
            case 8:
                displayCarDetails(cars[7], 8);
                break;
            case 9:
                displayCarDetails(cars[8], 9);
                break;
            case 10:
                displayCarDetails(cars[9], 10);
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 10.\n");
                break;
        }

        // Ask the user if they want to see another car
        printf("Do you want to see details of another car? (y/n): ");
        scanf(" %c", &continueChoice);  // Notice the space before %c to consume any leftover newline character

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}
