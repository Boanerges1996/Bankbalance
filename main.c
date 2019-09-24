#include <stdio.h>
#include <stdlib.h>
/*
** Written by Nkrumah Samson Kwaku
** Pin 19551A0545
** Frequency of numbers [100,50,20,10,5,1] in a bank balance Assignment
*/

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    /*
    a for 100 count
    b for 50 count
    c for 20 count
    d for 10 count
    e for 5 count
    f for 1 count
    */
    int amount;
    int rem;

    printf("\nPlease enter the amount ");
    scanf("%d",&amount);

    if(amount>=100){
            rem = amount%100;
            a = amount/100;
            amount = rem;
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
            else if(amount>=20){
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

            else if (amount>=10){
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
            //100 close
        }
    else if(amount>=50){
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

    else if(amount>=20){
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
    else if(amount>=1){
        f = amount;
    }
    else{
        printf("Invalid input");
    }


printf("\n100 -> %d",a);
printf("\n 50 -> %d",b);
printf("\n 20 -> %d",c);
printf("\n 10 -> %d",d);
printf("\n 5  -> %d",e);
printf("\n 1  -> %d",f);

    return 0;
}
