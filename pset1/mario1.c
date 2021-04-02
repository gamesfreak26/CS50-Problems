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

    int user_input;
    do {
        // Get user input for how high the pyramid is.
        user_input = get_int("How high did you want the pyramid?");
    }
    while (user_input < 1 || user_input > 8);

    // Iterate through numbers until we hit the number inputted.       
    for (int i = 1; i <= user_input; i++) { 
        int whitespace = 0; 
        // Subtract the line number from the user inputted height to get whitespace.  
        whitespace = user_input - i;
        // Print out the white space and then the hashes.  
        string line = "";
        for (int j = 1; j <= whitespace; j++) {
            printf("*");
        }
        printf("#\n");
    }
}