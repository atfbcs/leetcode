#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    int values[256] = {0};
    int result = 0;
    int length = (int) strlen(s);

    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    for (int i = 0; i < length; i++) {
        int current = values[(int) s[i]];

        if (i < length - 1 && current < values[(int) s[i + 1]]) {
            result -= current;
        }
        else {
            result += current;
        }
    }
    return result;
}

int main(void) {
    printf("%d",romanToInt("MCMXCIV"));
    return 0;
}
