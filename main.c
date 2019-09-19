#include <stdio.h>
#include <stdlib.h>
/*
** Written by Nkrumah Samson Kwaku
** Pin 19551A0545
** Frequency of numbers [100,50,20,10,5,1] in a bank balance
*/

int main()
{
    int a=0;//a for 100 count
    int b=0;//b for 50 count
    int c=0;//c for 20 count
    int d=0;//d for 10 count
    int e=0;//e for 5 count
    int f=0;//f for 1 count

    int amount,rem;

    printf("\nPlease enter the amount ");
    scanf("%d",&amount);
    yes:
        if(amount>=100){
                rem = amount%100;
                a = amount/100;
                amount = rem;
                fifthy:
                    if(amount>=50){
                        rem = amount%50;
                        b = amount/50;
                        amount = rem;
                        if(amount>=20){
                            rem = amount%20;
                            c = amount/20;
                            amount = rem;
                            if(amount>=10){
                                rem = amount%10;
                                d = amount/10;
                                amount = rem;
                                if(amount>=5){
                                    rem = amount%5;
                                    e = amount/5;
                                    amount = rem;
                                    if(amount>=1){
                                        f = amount;
                                    }
                                }
                                else if(amount>=1){
                                    f = amount;
                                }
                            }
                            else if(amount>=5){
                                rem = amount%5;
                                e = amount/5;
                                amount = rem;
                                if(amount>=1){
                                    f = amount;
                                }
                            }
                            else if(amount>=1){
                                f = amount;
                            }
                        }
                        else if(amount>=10){
                            rem = amount%10;
                            d = amount/10;
                            amount = rem;
                            if(amount>=5){
                                rem = amount%5;
                                e = amount/5;
                                amount = rem;
                                if(amount>=1){
                                    f = amount;
                                }
                            }
                            else if(amount>=1){
                                f = amount;
                            }
                        }
                        else if(amount>=5){
                            rem = amount%5;
                            e = amount/5;
                            amount = rem;
                            if(amount>=1){
                                f = amount;
                            }
                        }
                        if(amount>=1){
                                f = amount;
                            }
                        }
                    else{
                        goto output;
                    }

                    twenty:
                        if(amount>=20){
                            rem = amount%20;
                            c = amount/20;
                            amount = rem;
                            if(amount>=10){
                                rem = amount%10;
                                d = amount/10;
                                amount = rem;
                                if(amount>=5){
                                    rem = amount%5;
                                    e = amount/5;
                                    amount = rem;
                                    if(amount>=1){
                                        f = amount;
                                    }
                                }
                                else if(amount>=1){
                                    f = amount;
                                }
                            }
                            else if(amount>=5){
                                rem = amount%5;
                                e = amount/5;
                                amount = rem;
                                if(amount>=1){
                                    f = amount;
                                }
                            }
                            else if(amount>=1){
                                f = amount;
                            }
                        }
                        else{
                            goto output;
                        }

                tenth:
                    if(amount>=10){
                        rem = amount%10;
                        d = amount/10;
                        amount = rem;
                        if(amount>=5){
                            rem = amount%5;
                            e = amount/5;
                            amount = rem;
                            if(amount>=1){
                                f = amount;
                            }
                        }
                        else if(amount>=1){
                            f = amount;
                        }
                    }
                    else{
                        goto output;
                    }

                five:
                    if(amount>=5){
                        rem = amount%5;
                        e = amount/5;
                        amount = rem;
                        if(amount>=1){
                            f = amount;
                        }
                    }
                    else{
                        goto output;
                    }

                one:
                    if(amount>=1){
                        f = amount;
                    }
                    else{
                        goto output;
                    }
            }
            // Number greater than 50
            else if(amount>=50){
                    goto fifthy;
            }
            // Numbers greater than 20
            else if(amount>=20){
                goto twenty;
            }
            // Numbers greater than 10
            else if(amount>=10){
                goto tenth;
            }
            // Numbers greater than 5
            else if(amount>=5){
                goto five;
            }
            // Numbers greater than 1
            else if(amount>=1){
                goto one;
            }
    output:
        printf("\n100 -> %d \n 50 -> %d \n 20 -> %d \n 10 -> %d \n 5  -> %d \n 1  -> %d",a,b,c,d,e,f);

    return 0;
}
