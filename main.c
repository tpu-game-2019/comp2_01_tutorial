#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256] = Gomennasai;
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);

    return 0;
}
