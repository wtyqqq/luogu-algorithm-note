#include<bits/stdc++.h>
using namespace std;

char str1[10000000];

int main() {
    char ch;
    int acount11 = 0, bcount11 = 0;
    int acount21 = 0, bcount21 = 0;
    int i;

    for (i = 0; (ch = getchar()) != 'E'; i++) {
        if (ch == '\n'||ch == '\r') {
            i--;
            continue;
        }
        str1[i] = ch;
    }
    for (int j = 0; j < i; j++) {

        if (str1[j] == 'W') {
            acount11++;
        } else {
            bcount11++;
        }
        if ((acount11 >= 11 || bcount11 >= 11) && (abs(acount11 - bcount11) >= 2)) {
            printf("%d:%d\n", acount11, bcount11);
            acount11 = 0;
            bcount11 = 0;
        }

    }
    printf("%d:%d\n", acount11, bcount11);

    printf("\n");
    for (int j = 0; j < i; j++) {
        if (str1[j] == 'W') {
            acount21++;
        } else {
            bcount21++;
        }
        if ((acount21 >= 21 || bcount21 >= 21) && (abs(acount21 - bcount21) >= 2)) {
            printf("%d:%d\n", acount21, bcount21);
            acount21 = 0;
            bcount21 = 0;
        }
    }
    printf("%d:%d", acount21, bcount21);
    return 0;
}