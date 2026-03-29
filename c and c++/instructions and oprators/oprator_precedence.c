//since BODMAS rule is not valid in C we studi opraaaaaator precedence
//part of arithmatik instructions
#include <stdio.h>
int main()
{float a;
a=2.0/100.4*12.34+89.6867;
//how to predict this opration?? and value of a?
/*
super high priority --- ()
1st priority-- *,/,%
2nd prioritty-- +,-
3rd priority -- =
*/

        printf("value of a is %f", a);
    return 0;
}
