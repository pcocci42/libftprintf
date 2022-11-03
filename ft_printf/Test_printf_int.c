#include <stdio.h>

int main(){

    int nb;
    nb = 100;

    //integers 

    printf("vuoto %d\n", nb);
    printf("width only %4d\n", nb);
    printf("+ %+d\n", nb);
    printf("+3 %+3d\n", nb);
    printf("+7 %+7d\n", nb);
    printf("- width 3 %-3d cazzo \n", nb);
    printf("space% d\n", nb);
    printf("space width 5% 5d\n", nb);
    printf("0 width 3%03d\n", nb);
    printf("00 width %00d\n", nb);
    printf("point %.d\n", nb);
    printf("point width %.6d\n", nb);
    printf("hash width %#5d\n", nb);
    printf("- width plus %-+6d cazzo \n", nb);
    printf("- width 3%-03d cazzo \n", nb);
    printf("- width 7%-07d cazzo \n", nb);
    printf("- width space %- d cazzo \n", nb);
    printf("- width space 7%- 7d cazzo \n", nb);
    printf("- point %-.d cazzo \n", nb);
    printf("- point 7%-.7d cazzo \n", nb);
    printf("- plus zero 3 %+03d cazzo \n", nb);
    printf("plus space %+ d \n", nb);
    printf("plus space 4 %+ 4d \n", nb);
    printf("plus point %+.d \n", nb);
    printf("plus point 5 %+.5d \n", nb);
    printf("zero point %.0d \n", nb);
    printf("zero point 6 %.06d \n", nb);
    printf("space point% .d \n", nb);
    printf("space point 5% .5d \n", nb);
    printf("- space point %- .d cazzo \n", nb);
    printf("- space point 5%- .5d cazzo \n", nb);
    printf("- space 0 %- 0d cazzo \n", nb);
    printf("- space zero 3%- 03d cazzo \n", nb);
    printf("- point plus 3%-+.4d cazzo \n", nb);
    printf("- zero plus 4%-+04d cazzo \n", nb);
    printf("- zero plus %-+0d cazzo \n", nb);
    printf("- zero space plus point%- +.0d cazzo \n", nb);
    printf("- zero space plus point 5%- +.05d cazzo \n", nb);
    printf("- zero space point%- .0d cazzo \n", nb);
    printf("- zero space point 5%- .05d cazzo \n", nb);
    printf("zero plus point 5%+.05d cazzo \n", nb);
    printf("zero plus point 5%+ .05d cazzo %-+ .0d\n", nb, nb);
    printf("zero plus point 5%+ .05d cazzo %-+ .05d\n", nb, nb);
    printf("zer0 - plus point 5 %-+.05d \n", nb);
    printf("zero plus point space - 5%-+ .5d cazzo %- .0+d\n", nb, nb);
    printf("- zero plus point 5%+ .-05d cazzo % .0+d\n", nb, nb);
    printf("- zero plus point 5%+ .0-5d cazzo %. 0+6d bo\n", nb, nb);
    printf("- zero plus point 5%+ .0-5d cazzo %. 06+d bo\n", nb, nb);
    //printf("- zero plus point 5%+ .0-5d cazzo %. 40+d\n", nb, nb);
    //printf(" - point %-.doooo\n", nb);

}

