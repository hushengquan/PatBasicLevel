#include <stdio.h>

int main() {
    int hh, mm;

    scanf("%d:%d", &hh, &mm);
    if ((hh > 12 && hh < 24) || (hh == 12 && mm != 0)) {
        int i;
        if (hh != 12 && mm != 0) {
            printf("Dang");
        }
        for (i = 12; i < hh; i++) {
            printf("Dang");
        }
    } else {
        printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
    }

    return 0;
}
