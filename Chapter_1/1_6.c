#include <stdio.h>

/* count digits, whilte space, others */
// main()
// {
//     int c, i, nwhite, nother;
//     int ndigit[10];

//     nwhite = nother = 0;
//     for (i = 0; i < 10; ++i)
//         ndigit[i] = 0;

//     while ((c = getchar()) != EOF) 
//         if (c >= '0' && c <= '9')
//             ++ndigit[c-'0'];
//         else if (c == ' ' || c == '\n' || c == '\t')
//             ++nwhite;
//         else 
//             ++nother;

//     printf("digits =");
//     for (i = 0; i < 10; ++i)
//         printf(" %d", ndigit[i]);
//     printf(", white space = %d, other = %d\n", nwhite, nother);
// }


// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
// main() {
//     int c;
//     int char_freq[128] = {0};

//     while ((c = getchar()) != EOF) {
//         char_freq[c]++;
//     }

//     for (int i = 0; i < 128; i++) {
//         if (char_freq[i] > 0) {
//             printf("%c: ", i);
//             for (int j = 0; j < char_freq[i]; j++) {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
// }

// Exercise 1-13 Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

// #define MAX_LENGTH 30

// main() {
//     int c;
//     int length = 0;
//     int arr[MAX_LENGTH] = {0};

//     while ((c= getchar()) != EOF) {
//         if (c == ' ' || c == '\n' || c == '\t'){
//             if (length > 0){
//                 arr[length - 1]++;
//                 length = 0;
//             }
//         }
//         else {
//             length++;
//         }
//     }

//     for (int i = 0; i < MAX_LENGTH; i++){
//         if (arr[i] > 0){
//             printf("%d :", i+1);
//             for (int j = 0; j < arr[i]; j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
// }


// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
#define CHAR_NUM 128

main(){
    int c;
    int arr[CHAR_NUM] = {0};

    while ((c = getchar()) != EOF)
        arr[c]++;

    for (int i = 0; i < CHAR_NUM; i++){
        if (arr[i] > 0){
            printf("%c : ", i);
            printf("%d", arr[i]);
            printf("\n");
        }
    }
}