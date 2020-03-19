//
//  history_word_length.c
//  
//
//  Created by Giang Ha Le on 3/19/20.
//

#include <stdio.h>
#define IN 1;
#define OUT 0;
/* This program prints a histogram of the lengths of words in the input. */

main() {
    int state, c;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            state = OUT;
            putchar('\n');
        } else {
            state = IN;
            putchar('|');
        }
    }
}
