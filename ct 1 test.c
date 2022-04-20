#include <stdio.h>

int main() {

        int amount_given,bill_amount,a,b;
        scanf("%d %d",&amount_given,&bill_amount);
        a=amount_given/bill_amount;
        b=amount_given%bill_amount;
        printf("%d\n%d",a,b);

    return 0;
}
