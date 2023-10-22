#include <stdio.h>

int main() {
    FILE *file = fopen("numbers_4.txt", "w");
    if (file == NULL) {
        printf("Не вдалося відкрити файл\n");
        return 1;
    }

    int i, j, k, l;
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                for (l = 0; l <= 9; l++) {
                    fprintf(file, "%d%d%d%d\n", i, j, k, l);
                }
            }
        }
    }

    fclose(file);

    FILE *file1 = fopen("numbers_6.txt", "w");
    if (file1 == NULL) {
        printf("Не вдалося відкрити файл\n");
        return 1;
    }

    int h, n;
    for(n=0;n <= 9; n++){
        for(h = 0; h <=9; h++){
            for (i = 0; i <= 9; i++) {
                for (j = 0; j <= 9; j++) {
                    for (k = 0; k <= 9; k++) {
                        for (l = 0; l <= 9; l++) {
                            fprintf(file, "%d%d%d%d%d%d\n", n, h, i, j, k, l);
                        }
                    }
                }
            }
        }
    }

    fclose(file1);
    return 0;
}
