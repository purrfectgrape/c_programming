#include <stdio.h>
#define EOL '\n'
#define ARYLEN 256
main()
{
    int c, i, x;
    int length[ARYLEN];
    for(x = 0; x < ARYLEN;x++)
        length[x] = 0;
    while( (c = getchar() ) != EOL)
     {
        length[c]++;
    if (c == EOL)
        break;
    }    
    for(x = 0; x < ARYLEN; x++)
    {
         if( length[x] > 0){
            printf("%c | ", x);
            for(i = 1; i <= length[x]; ++i){
                printf("*");
         }
         printf("\n");
         }
     }
}
