#include <stdio.h>
#include <ctype.h>

unsigned int vowels = 0b01000100000100000100010001;

unsigned int s(int a, int b){
    a = tolower(a);
    b = tolower(b);
    unsigned int st = 0b00000000000000000000000000;
    st = st | (1 << (a - 'a'));
    st = st | (1 << (b - 'a'));
    return st;
}

int second_attempt(){
    int c = 0;
    int x = 0;
    int y = 0;
    while (c != EOF) {
        c = getchar();
        if (c == ' ' || c == '\n') {
            unsigned int result = s(x, y);
            // Debug
            printf("[%c: %c]\n", x, y);
            x = 0;
            y = 0;
            if ((result | vowels) == vowels) {
                printf("YES\n");
                return 0;
            }
        } else if (isalpha(c)) {
            if (x == 0) {
                x = c;
                y = c;
            } else {
                y = c;
            }
        }
    }
    return 1;
}

int main() {
    /*
    //unsigned int vowels = 0b01000100000100000100010001;
    int c = 0;
    int x = getchar();
    int y = x;
    int b;
    while (c != EOF) {
        c = getchar();
        if ((c == ' ' || c == '\n') && !isalpha(c)) {
            //printf("[%c:%c] \n", x, y);
            x = getchar();
            //break;
            if (y == '\n' || y == ' ') {
                y = x;
            }
            printf("[%c:%c]\n", x, y);
            unsigned int result = s(x, y);
            if ((result | vowels) == vowels) {
                printf("YES\n");
                return 0;
            }
        }
        y = c;
        if (y == '\n' || y == ' ') {
            y = x;
        }
    }
    */
    if (second_attempt() == 0) {
        return 0;
    } else {
        printf("NO\n");
        return 0;
    }
}
