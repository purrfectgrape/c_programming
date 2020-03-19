//
//  histogram_char_frequency.c
//  
//
//  Created by Giang Ha Le on 3/19/20.
// TODO: print char value before the histogram

#include <stdio.h>

main() {
    int nchar[36];
    int c, i, j;
    for (i = 0; i < 36; i++) {
        nchar[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c <= 9) {
            ++nchar[c-0];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ;
        } else if (c == 'a') {
            ++nchar[10];
        } else if (c == 'b') {
            ++nchar[11];
        } else if (c == 'c') {
            ++nchar[12];
        } else if (c == 'd') {
            ++nchar[13];
        } else if (c == 'e') {
            ++nchar[14];
        } else if (c == 'f') {
            ++nchar[15];
        } else if (c == 'g') {
            ++nchar[16];
        } else if (c == 'h') {
            ++nchar[17];
        } else if (c == 'i') {
            ++nchar[18];
        } else if (c == 'j') {
            ++nchar[19];
        } else if (c == 'k') {
            ++nchar[20];
        } else if (c == 'l') {
            ++nchar[21];
        } else if (c == 'm') {
            ++nchar[22];
        } else if (c == 'n') {
            ++nchar[23];
        } else if (c == 'o') {
            ++nchar[24];
        } else if (c == 'p') {
            ++nchar[25];
        } else if (c == 'q') {
            ++nchar[26];
        } else if (c == 'r') {
            ++nchar[27];
        } else if (c == 's') {
            ++nchar[28];
        } else if (c == 't') {
            ++nchar[29];
        } else if (c == 'u') {
            ++nchar[30];
        } else if (c == 'v') {
            ++nchar[31];
        } else if (c == 'w') {
            ++nchar[32];
        } else if (c == 'x') {
            ++nchar[33];
        } else if (c == 'y') {
            ++nchar[34];
        } else if (c == 'z') {
            ++nchar[35];
        }
    }
    for (i = 0; i < 36; i++) {
        if (nchar[i] != 0) {
            for (j = 0; j < nchar[i]; j++) {
                printf("|");
            }
            printf("\n");
        } else {
            continue;
        }
    }
}
        
