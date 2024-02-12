#include <stdio.h>

int sinalcount(char *str) {
    int number = 0;
    int count = 0;

    while (str[number]) {
        if (str[number] == '-') {
            count++;
        }
        number++;
    }
    return count;
}

int ft_atoi(char *str) {
    int number = 0;
    int result = 0;
    int numberofn;

    while (str[number] >= '0' && str[number] <= '9') {
        result = result * 10 + (str[number] - '0');
        number++;
    }
    
    numberofn = sinalcount(str);
    if (numberofn % 2 != 0) {
        result = -result;
    }
    return result;
}

int main(int argc, char **argv) {
    int a;

    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    a = ft_atoi(argv[1]);
    printf("%i\n", a);

    return 0;
}