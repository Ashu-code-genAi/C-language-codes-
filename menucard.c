#include<stdio.h>

int main() {
    int a, b, d;
    char c, add_more;

    do {
        printf("\t\t\t\tTANGSALE KHANAWAL\n");
        printf("\t\t\t\tMENU:\n");
        printf("\t\t\t\t\tFULL\tHALF\n");
        printf("\t\t1. CHICKEN TRIPLE RICE:  140\t80\n");
        printf("\t\t2. CHICKEN HANDI:        400\t220\n");
        printf("\t\t3. EGG CURRY             120\t70\n");
        printf("\t\t4. VEG KOLHAPURI         200\t120\n");
        printf("\t\t5. VEG MARATHA           200\t120\n");
        printf("\t\t6. BHUNA                 180\t100\n");
        printf("\t\t7. SHEV BHAJI            150\t80\n");
        printf("\t\t8. DAL TADKA             120\t70\n");
        printf("\t\t9. PANEER MUTTER         240\t140\n");
        printf("\t\t10. PANEER ANGARA        360\t150\n");

        while (1) {
            printf("Enter the number of the item you want to order between (1-10): ");
            scanf("%d", &a);

            if (a < 1 || a > 10) {
                printf("INVALID CHOICE! Please select a valid menu item (1-10).\n");
                continue;
            }
            break;
        }

        while (1) {
            printf("ENTER HALF(H) OR FULL(F): ");
            scanf(" %c", &c);  // Space before %c to handle newline veryyyyyy impppppp

            if (c == 'H' || c == 'h' || c == 'F' || c == 'f') {
                break;
            } else {
                printf("INVALID CHOICE! Please enter 'H' for HALF or 'F' for FULL.\n");
            }
        }

        printf("Enter the quantity: ");
        scanf("%d", &b);

        switch (a) {
            case 1:
                if (c == 'H' || c == 'h') {
                    d = b * 80;
                    printf("Your order for %d HALF CHICKEN TRIPLE RICE has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 140;
                    printf("Your order for %d FULL CHICKEN TRIPLE RICE has been placed!\n", b);
                }
                break;

            case 2:
                if (c == 'H' || c == 'h') {
                    d = b * 220;
                    printf("Your order for %d HALF CHICKEN HANDI has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 400;
                    printf("Your order for %d FULL CHICKEN HANDI has been placed!\n", b);
                }
                break;

            case 3:
                if (c == 'H' || c == 'h') {
                    d = b * 70;
                    printf("Your order for %d HALF EGG CURRY has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 120;
                    printf("Your order for %d FULL EGG CURRY has been placed!\n", b);
                }
                break;

            case 4:
                if (c == 'H' || c == 'h') {
                    d = b * 120;
                    printf("Your order for %d HALF VEG KOLHAPURI has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 200;
                    printf("Your order for %d FULL VEG KOLHAPURI has been placed!\n", b);
                }
                break;

            case 5:
                if (c == 'H' || c == 'h') {
                    d = b * 120;
                    printf("Your order for %d HALF VEG MARATHA has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 200;
                    printf("Your order for %d FULL VEG MARATHA has been placed!\n", b);
                }
                break;

            case 6:
                if (c == 'H' || c == 'h') {
                    d = b * 100;
                    printf("Your order for %d HALF BHUNA has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 180;
                    printf("Your order for %d FULL BHUNA has been placed!\n", b);
                }
                break;

            case 7:
                if (c == 'H' || c == 'h') {
                    d = b * 80;
                    printf("Your order for %d HALF SHEV BHAJI has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 150;
                    printf("Your order for %d FULL SHEV BHAJI has been placed!\n", b);
                }
                break;

            case 8:
                if (c == 'H' || c == 'h') {
                    d = b * 70;
                    printf("Your order for %d HALF DAL TADKA has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 120;
                    printf("Your order for %d FULL DAL TADKA has been placed!\n", b);
                }
                break;

            case 9:
                if (c == 'H' || c == 'h') {
                    d = b * 140;
                    printf("Your order for %d HALF PANEER MUTTER has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 240;
                    printf("Your order for %d FULL PANEER MUTTER has been placed!\n", b);
                }
                break;

            case 10:
                if (c == 'H' || c == 'h') {
                    d = b * 150;
                    printf("Your order for %d HALF PANEER ANGARA has been placed!\n", b);
                } else if (c == 'F' || c == 'f') {
                    d = b * 360;
                    printf("Your order for %d FULL PANEER ANGARA has been placed!\n", b);
                }
                break;
        }

        printf("Your total bill for this item is: %d /-\n", d);

        while (1) {
            printf("Do you want to add more items to your cart (y/n)? ");
            scanf(" %c", &add_more);
            
            if (add_more == 'Y' || add_more == 'y' || add_more == 'N' || add_more == 'n') {
                break;
            } else {
                printf("INVALID CHOICE! Please enter 'y' to add more or 'n' to finish.\n");
            }
        }

    } while (add_more == 'Y' || add_more == 'y');

    printf("\nYour final order has been placed, THANK YOU FOR ORDERING!\n");

    return 0;
}
