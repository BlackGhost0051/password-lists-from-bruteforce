#include <stdio.h>



void generate_num_4(){
  FILE *file_num_4 = fopen("numbers_4.txt", "w");
  if (file_num_4 == NULL) {
      printf("Error\n");
  }

  int i, j, k, l;
  for (i = 0; i <= 9; i++) {
      for (j = 0; j <= 9; j++) {
          for (k = 0; k <= 9; k++) {
              for (l = 0; l <= 9; l++) {
                  fprintf(file_num_4, "%d%d%d%d\n", i, j, k, l);
              }
          }
      }
  }

  fclose(file_num_4);
}

void generate_num_6(){
  FILE *file_num_6 = fopen("numbers_6.txt", "w");
  if (file_num_6 == NULL) {
      printf("Error\n");
  }

  int h, n, i, j, k, l;
  for(n=0;n <= 9; n++){
      for(h = 0; h <=9; h++){
          for (i = 0; i <= 9; i++) {
              for (j = 0; j <= 9; j++) {
                  for (k = 0; k <= 9; k++) {
                      for (l = 0; l <= 9; l++) {
                          fprintf(file_num_6, "%d%d%d%d%d%d\n", n, h, i, j, k, l);
                      }
                  }
              }
          }
      }
    }
  fclose(file_num_6);
}




int main() {
    printf("==== Password generator ====\n\n");
    printf("1 -> Generate 4 digital passwords\n");
    printf("2 -> Generate 6 digital passwords\n");
    printf("0 -> Exit\n");

    int value;

    while (1) {
    printf("Enter your choice: ");
    scanf("%d", &value);

    if (value == 1) {
        generate_num_4();
        printf("4-digit passwords generated\n");
    } else if (value == 2) {
        generate_num_6();
        printf("6-digit passwords generated.\n");
    } else if (value == 0) {
        break;
    } else {
        printf("Invalid choice. Please select 1, 2, or 0.\n");
        break;
    }
}

    return 0;
}
