// Make a program that first asks the user how much change is owed and 
// then prints the minimum number of coins with which that change can be made.

// Assume that the only coins available are:
//     * quarters (25¢)
//     * dimes (10¢)
//     * nickels (5¢)
//     * pennies (1¢). 

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
float dollars;
    do {
        dollars = get_float("Changed owed: ");
    }
    while (dollars <= 0.0);

    int cents = round(dollars * 100);

    int quarters = cents / 25;

    int coins = quarters;

    printf("%i %i %i\n", cents, quarters, coins);
}