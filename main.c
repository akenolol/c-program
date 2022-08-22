#include <stdio.h> // Standard Input Output


int main(int argc, char *argv[]) // Start of the main Program
{
    int i; // Define i as an integer
    for (i = 0; i < argc; i++) // For each arg
    {
        printf("argv[%d] = %s\n", i, argv[i]); // Print all the args to the console (./a.out test test test)

    }
    
    while (1) // Await user input.
    {
        printf("Press any key to continue...\n"); // Print to the console
        
        getchar(); // Get the Character the user presses.
        return 0; // Exit the program.
    }
    return 0; // Exit the program.
}