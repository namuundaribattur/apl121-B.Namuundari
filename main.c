#include <stdio.h>

int main(void)
{
    int today, car, digit, day, count;
    int bestCar = 0, bestCount = -1;

  /* 1. unuudriin garag unshih  */
    do {
        printf("unuudriin garag (1=Davaa ... 7=Nyam): ");
        scanf("%d", &today);
        if (today < 1 || today > 7) {
            printf("buruu utga bn bro :O !!! 1-7 hoorond too oruulna uu.\n");
        }
    } while (today < 1 || today > 7);

    /* 2. Nuhtsul */
    if (today <= 5) {
        printf("unuudur: ajliin odor\n");
    } else if (today == 6) {
        printf("unuudur: Byamba\n");
    } else {
        printf("unuudur: Nyam\n");
    }

    /* 3. Mashin bur deer hiih davtalt */
    for (car = 1; car <= 3; car++) {
        do {
            printf("Mashin %d-iin dugaariin suuliin oron (0-9): ", car);
            scanf("%d", &digit);
            if (digit < 0 || digit > 9) {
                printf("buruu utga bn bro :O !!! 0-9 hoorond too oruulna uu.\n");
            }
        } while (digit < 0 || digit > 9);

       /* 4. garag bureer garah husnegt garna */
        printf("%-10s%-10s\n", "Garag", "Yavah");
        count = 0;
        for (day = 1; day <= 7; day++) {
            if (day % 2 == digit % 2) {
                printf("%-10d%-10s\n", day, "Yavna");
                count++;
            } else {
                printf("%-10d%-10s\n", day, "-");
            }
        }
        printf("Niit: %d udur\n", count);

        if (today % 2 == digit % 2) {
            printf("unuudur yavj BOLNO\n");
        } else {
            printf("unuudur yavj BOLOHGUI\n");
        }

       /* 5. hamgiin olon odor yavah mashinii ur dun hargdna */
        if (count > bestCount) {
            bestCount = count;
            bestCar = car;
        }
    }

    printf("Hamgiin olon udur yavah mashin: Mashin %d (%d udur)\n", bestCar, bestCount);
    return 0;
}
