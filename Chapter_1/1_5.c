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

// int main() {
//     int nc;

//     nc = 0;
//     int c;
//     while ((c = getchar()) != EOF){
//         if (c != '\n') {
//             ++nc;
//             printf("total : %d, input : %c\n", nc, c);
//         }
//     }

//     return 0;
// }

/*
Character Counting 2nd version
*/

// main()
// {
//     double nc = 0;

//     for (getchar() != EOF; ++nc;);
//     {printf("%.0f\n", nc);}
// }

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

// main()
// {
//     int c, nl = 0, nt = 0, nb = 0; 
//     printf("%d", nl);
//     while ((c = getchar()) != EOF) {
//         if (c == '\n') {
//             ++nl;
//             printf("New Line: %d\n", nl);
//         } else if (c == '\t') {
//             ++nt;
//             printf("Tab: %d\n", nt);
//         } else if (c == ' ') {
//             ++nb;
//             printf("Blank: %d\n", nb);
//         }
//     }
// }

/* count lines in input*/

main()
{
    int c, nl;

    nl = 0;
    while ((c == getchar()) != EOF)
        if (c == '\n')
            {++nl;
    printf("%d\n", nl);}}