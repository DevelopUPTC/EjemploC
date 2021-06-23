#include <stdio.h>

#define PI 3.141516171819173
#define VALUE 36346

int main(void){

    printf("[%.2f]\n", PI );
    printf("[%10f]\n", PI );
    printf("[%10.2f]\n", PI );
    printf("[%10d]\n",65535);
    printf("[%-10d]\n",65535);
    printf("[%010d]\n",65535);
    printf("El Valor %d en Octal=%o y en Hexadecimal=%x\n",VALUE,VALUE,VALUE);

    return 0;
}
