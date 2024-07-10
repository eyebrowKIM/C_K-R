#include <stdio.h>

// main()
// {
//     int c;

//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

// main()
// {
//     int c;

//     while (c = (getchar() != EOF)) {
//         putchar(c);
//     }
// }

// Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
// main()
// {
//     int c;

//     while (c = (getchar() != EOF)) {
//         printf("%d\n", c);
//     }
// }

// Exercise 1-7. Write a program to print the value of EOF.

// main()
// {
//     printf("EOF: %d\n", EOF);
// }

/*
Character Counting
*/

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
        printf("%d", nc);
    }
}