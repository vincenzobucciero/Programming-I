#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, digit_cnt=0, other_cnt=0;

    while ((i=getchar())!=EOF)
        if(i>='0'&&i<='9')
        ++digit_cnt;
    else
        ++other_cnt;

    printf("%10s        %10s\n\n", "cifre", "altri caratteri");

    printf("%10d        %10d\n\n", digit_cnt, other_cnt);

    return 0;
}
