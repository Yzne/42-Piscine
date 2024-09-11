#include <unistd.h>

// Helper function to print a string followed by a newline using write
void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);  // Write each character in the string to the standard output
        str++;
    }
    write(1, "\n", 1); // Write a newline character
}

// Function to compare two strings lexicographically (like strcmp)
int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2); // Return the difference between the first non-matching characters
}

// Main function to sort and print arguments
int main(int argc, char **argv) {
    int i, j;
    char *temp;

    // Sorting the arguments (using bubble sort)
    i = 1;
    while (i < argc - 1) {
        j = 1;
        while (j < argc - i) {
            // Compare argv[j] and argv[j+1]
            if (ft_strcmp(argv[j], argv[j + 1]) > 0) {
                // Swap them if they are out of order
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    // Print the sorted arguments (excluding argv[0])
    i = 1;
    while (i < argc) {
        ft_putstr(argv[i]); // Print each argument followed by a newline
        i++;
    }

    return 0; // Return 0 to indicate successful execution
}
