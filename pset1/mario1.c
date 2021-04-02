#include <cs50.h>
#include <stdio.h>

// https://cs50.harvard.edu/x/2021/psets/1/mario/less/#:~:text=$%20./marioHeight:%208%20%20%20%20%20%20%20#%20%20%20%20%20%20##%20%20%20%20%20###%20%20%20%20####%20%20%20#####%20%20######%20###############

    /* 
        Print out right-aligned pyramids like the one's you see in 
        Mario. 

        $ ./mario
        Height: 8
               #
              ##
             ###
            ####
           #####
          ######
         #######
        ########
    */

int main(void) {

    int usr_inputted_height;
    do {
        // Get user input for how high the pyramid is.
        usr_inputted_height = get_int("How high did you want the pyramid? ");
    }
    while (usr_inputted_height < 1 || usr_inputted_height > 8);

    
    // Iterate through numbers until we hit the number inputted.
    for (int row = 0; row < usr_inputted_height; row++) {

        int whitespace = usr_inputted_height - row;

        // Iterate through the columns and print out a left-aligned pyramid.
        for (int column = 0; column < usr_inputted_height ; column++) {
            if (column > row - 1) {
                printf("#");
            }
            else {
                printf("*");
            }
        }
        whitespace--;   
        printf("\n");
    }
}