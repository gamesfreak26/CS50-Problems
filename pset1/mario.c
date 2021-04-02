#include <stdio.h>
#include <cs50.h>

int main(void) {

    int usr_inputted_height;
    do {
        // Get user input for how high the pyramid is.
        usr_inputted_height = get_int("How high did you want the pyramid? ");
    }
    while (usr_inputted_height < 1 || usr_inputted_height > 8);

    
    // Iterate through numbers until we hit the number inputted.
    for (int row = 0; row < usr_inputted_height; row++) {

        // Iterate through the columns 
        for (int column = usr_inputted_height; column > 0 ; column--) {
            
            if (column < row + 2) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
