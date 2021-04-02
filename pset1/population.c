#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    
    do 
    {
        start_size = get_int("What is the  starting size? Please enter a value >= 9: "); 
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;

    do 
    {
        end_size = get_int("What is the  ending size? Please enter a value >= the starting size: "); 
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int new_llamas_born = 0;
    int old_llamas_die = 0;
    int years = 0;
    int population = start_size;

    while (population < end_size) 
    {
        new_llamas_born = population / 3;
        old_llamas_die = population / 4;
        population = population + new_llamas_born - old_llamas_die;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);

}
