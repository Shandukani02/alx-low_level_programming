#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: input string
 *
 * Return: 1 if all characters in the string are digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count;

    count = 0;
    while (count < strlen(str)) /* count string */
    {
        if (!isdigit(str[count])) /* check if there are non-digit characters */
        {
            return (0);
        }

        count++;
    }
    return (1);
}

/**
 * main - Prints the sum of valid integers from command-line arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc) /* Goes through the whole array */
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }

        count++;
    }

    printf("%d\n", sum); /* print the sum */

    return (0);
}
