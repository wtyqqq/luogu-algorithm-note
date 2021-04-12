#include <cstdio>

using namespace std;

int main() {
    int m, n;
    scanf("%d %d", &n, &m);
    char map[n][m];
    for (int i = 0; i < n; ++i) {
        scanf("%s", map[i]);
    }
    int count;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (map[i][j] == '*') {
                printf("*");
            } else {
                count = 0;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if ((k == 0) && (l == 0))
                            continue;
                        if (((i + k >= 0) && (i + k < n) && (j + l >= 0) && (j + l < m)) &&
                            (map[i + k][j + l] == '*')) {
                            count++;
                        }
                    }
                }
                printf("%d", count);
            }
        }
        printf("\n");
    }
    return 0;
}