//uy ishi 1
//#include <stdio.h>
//int main() {
//    int oy;
//    FILE *fayl;
//    scanf("%d", &oy);
//    fayl = fopen("1-masala.txt", "w");
//    switch (oy) {
//        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//            fprintf(fayl, "tanlagan oyingizda  31 kun bor\n");
//            break;
//        case 4: case 6: case 9: case 11:
//            fprintf(fayl, "tanlagan oyingizda  30 kun bor\n");
//            break;
//        case 2:
//            fprintf(fayl, "faqat fevralda  28 kun bor\n");
//            break;
//        default:
//            fprintf(fayl, "siz xato kiritdingiz boshidan urinib korin\n");
//            break;
//    }
//    fclose(fayl);
//    return 0;
//}
//uy ishi 2
//#include <stdio.h>
//int main() {
//    int a, i;
//    FILE *fayl;
//    scanf("%d", &a);
//    fayl = fopen("2-masala.txt", "w");
//    for (i = 1; i <= a; i++) {
//        if (i % 2 == 0) {
//            fprintf(fayl, "%d ", i);
//        }
//    }
//    fprintf(fayl, "\n");
//    for (i = 1; i <= a; i++) {
//        if (i % 2 != 0) {
//            fprintf(fayl, "%d ", i);
//        }
//    }
//    fclose(fayl);
//    return 0;
//}
////uy ishi 3
// #include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    int soz_soni = 0;
//    int gap_soni = 0;
//    int ichida_soz = 0;
//    char belgi;
//    FILE *fayl;
//    char fayl_nomi[100];
//    printf("Fayl nomini kiriting: ");
//    scanf("%s", fayl_nomi);
//    fayl = fopen(fayl_nomi, "r");
//    while ((belgi = fgetc(fayl)) != EOF) {
//        if (isalpha(belgi) || belgi == '\'') {
//            if (!ichida_soz) {
//                ichida_soz = 1;
//                soz_soni++;
//            }
//        } else {
//            if (ichida_soz) {
//                ichida_soz = 0;
//            }
//        }
//    }
//    if (ichida_soz) {
//        soz_soni++;
//    }
//    fclose(fayl);
//    printf("So'zlar soni: %d\n", soz_soni);
//    printf("Gaplar soni: %d\n", gap_soni);
//
//    return 0;
//}
////sinf ishi 1
//#include <stdio.h>
//struct masala_1 {
//    float temperatura;
//    char sana[11];
//    char vaqt[6];
//};
//int main() {
//    struct mashq_1 log;
//    printf("temperaturani  kiriting");
//    scanf("%f", &log.temperatura);
//    printf("sanani kiriting");
//    scanf("%s", log.sana);
//    printf("timeni  kiriting ");
//    scanf("%s", log.vaqt);
//    FILE *fayl = fopen("1-mashq.txt", "w");
//    fprintf(fayl, "harorat- %.1f  sana- %s, vaqt- %s", log.temperatura, log.sana, log.vaqt);
//    fclose(fayl);
//    return 0;
//}
////sinf ishi 2
//#include <stdio.h>
//#include <string.h>
//struct mashq_2 {
//    char name[50];
//    int age;
//    char email[50];
//};
//int main() {
//    struct mashq_2 user;
//    printf("Ismingizni kiriting: ");
//    fgets(user.name, sizeof(user.name), stdin);
//    user.name[strcspn(user.name, "\n")] = 0;
//    printf("Yoshingizni kiriting: ");
//    scanf("%d", &user.age);
//    getchar();
//    printf("Elektron pochtani kiriting: ");
//    fgets(user.email, sizeof(user.email), stdin);
//    user.email[strcspn(user.email, "\n")] = 0;
//    FILE *fayl = fopen("user_profiles.txt", "w");
//    if (fayl == NULL) {
//        printf("Faylni ochishda xatolik yuz berdi.\n");
//        return 1;
//    }
//    fprintf(fayl, "Ism: %s\nYosh: %d\nElektron pochta: %s\n", user.name, user.age, user.email);
//    fclose(fayl);
//    printf("Ma'lumotlar muvaffaqiyatli yozildi.\n");
//    fayl = fopen("user_profiles.txt", "r");
//    struct mashq_2 read_user;
//    fscanf(fayl, "Ism: %[^\n]\nYosh: %d\nElektron pochta: %[^\n]\n", read_user.name, &read_user.age, read_user.email);
//    fclose(fayl);
//    printf("\nProfil 1:\n");
//    printf("Ism: %s\n", read_user.name);
//    printf("Yosh: %d\n", read_user.age);
//    printf("Elektron pochta: %s\n", read_user.email);
//    return 0;
//}
//// uy ishi 4
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N 10
//
//void tartibla(int arr[], int n, int oshish);
//void faylgaYoz(const char *filename, int arr[], int n);
//
//int main() {
//    int massiv[N];
//    int juft[N], toq[N], musbat[N], manfiy[N];
//    int j = 0, t = 0, m = 0, c = 0;
//    srand(time(NULL));
//    for (int i = 0; i < N; i++) {
//        massiv[i] = rand() % 101 - 50;
//    }
//    for (int i = 0; i < N; i++) {
//        if (massiv[i] % 2 == 0) {
//            juft[j++] = massiv[i];
//        } else {
//            toq[t++] = massiv[i];
//        }
//        if (massiv[i] > 0) {
//            musbat[m++] = massiv[i];
//        } else if (massiv[i] < 0) {
//            manfiy[c++] = massiv[i];
//        }
//    }
//    tartibla(juft, j, 1);
//    faylgaYoz("Juft.txt", juft, j);
//
//    tartibla(toq, t, 0);
//    faylgaYoz("Toq.txt", toq, t);
//
//    tartibla(musbat, m, 0);
//    faylgaYoz("Musbat.txt", musbat, m);
//
//    tartibla(manfiy, c, 1);
//    faylgaYoz("Manfiy.txt", manfiy, c);
//
//    return 0;
//}
//void tartibla(int arr[], int n, int oshish) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if ((oshish && arr[i] > arr[j]) || (!oshish && arr[i] < arr[j])) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//void faylgaYoz(const char *filename, int arr[], int n) {
//    FILE *file = fopen(filename, "w");
//    for (int i = 0; i < n; i++) {
//        fprintf(file, "%d ", arr[i]);
//    }
//    fclose(file);
//}
//uy ishi 5
//
//#include <stdio.h>
//
//int main() {
//    char familiya[50];
//    char ism[50];
//    char ochestva[50];
//    char tugilgan_sana[11];
//    FILE *fayl;
//    char fayl_nomi[100];
//    printf("Fayl nomini kiriting: ");
//    scanf("%s", fayl_nomi);
//    fayl = fopen(fayl_nomi, "w");
//    printf("Familiya: ");
//    scanf("%s", familiya);
//    printf("Ism: ");
//    scanf("%s", ism);
//    printf("ochestva: ");
//    scanf("%s", ochestva);
//    printf("Tug'ilgan sana  ");
//    scanf("%s", tugilgan_sana);
//    fprintf(fayl, "%s\n", familiya);
//    fprintf(fayl, "%s\n", ism);
//    fprintf(fayl, "%s\n", ochestva);
//    fprintf(fayl, "%s\n", tugilgan_sana);
//    fclose(fayl);
//    return 0;
//}
//uy ishi 6
//
//#include <stdio.h>
//int main() {
//    int sonlar[5];
//    int yigindi = 0;
//    FILE *fayl;
//    char fayl_nomi[100];
//    printf("Fayl nomini kiriting: ");
//    scanf("%s", fayl_nomi);
//    fayl = fopen(fayl_nomi, "w");
//    printf("5 ta son kiriting: ");
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &sonlar[i]);
//        yigindi += sonlar[i];
//    }
//    for (int i = 0; i < 5; i++) {
//        fprintf(fayl, "%d", sonlar[i]);
//        if (i < 4) {
//            fprintf(fayl, "+");
//        }
//    }
//    fprintf(fayl, "=%d\n", yigindi);
//    fclose(fayl);
//
//    return 0;
//}
//
//uy ishi 8
//
//#include <stdio.h>
//#include <stdbool.h>
//
//bool tublikmi(int son);
//
//int main() {
//    int n;
//    FILE *fayl;
//    char fayl_nomi[100];
//    printf("Fayl nomini kiriting: ");
//    scanf("%s", fayl_nomi);
//    printf("N qiymatini kiriting: ");
//    scanf("%d", &n);
//    fayl = fopen(fayl_nomi, "w");
//    bool birinchi = true;
//    for (int i = 2; i <= n; i++) {
//        if (tublikmi(i)) {
//            if (!birinchi) {
//                fprintf(fayl, " ");
//            }
//            fprintf(fayl, "%d", i);
//            birinchi = false;
//        }
//    }
//
//    fprintf(fayl, "\n");
//    fclose(fayl);
//    return 0;
//}
//bool tublikmi(int son) {
//    if (son <= 1) return false;
//    if (son == 2) return true;
//    if (son % 2 == 0) return false;
//    for (int i = 3; i * i <= son; i += 2) {
//        if (son % i == 0) return false;
//    }
//    return true;
//}
//uy ishi 9
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    int soz_soni = 0;
//    int gap_soni = 0;
//    int ichida_soz = 0;
//    char belgi;
//    FILE *fayl;
//    char fayl_nomi[100];
//    printf("Fayl nomini kiriting: ");
//    scanf("%s", fayl_nomi);
//    fayl = fopen(fayl_nomi, "r");
//    while ((belgi = fgetc(fayl)) != EOF) {
//        if (isalpha(belgi) || belgi == '\'') {
//            if (!ichida_soz) {
//                ichida_soz = 1;
//                soz_soni++;
//            }
//        } else {
//            if (ichida_soz) {
//                ichida_soz = 0;
//            }
//        }
//    }
//    if (ichida_soz) {
//        soz_soni++;
//    }
//    fclose(fayl);
//    printf("%dta so'z\n", soz_soni);
//    printf("%dta gap\n", gap_soni);
//
//    return 0;
//}
//uy ishi 10
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 10
//
//void tartibla(int arr[], int n, int oshish);
//void faylgaYoz(const char *faylNomi, int arr[], int n);
//
//int main() {
//    int massiv[N];
//    int juft[N], toq[N], musbat[N], manfiy[N];
//    int j = 0, t = 0, m = 0, c = 0;
//
//    for (int i = 0; i < N; i++) {
//        massiv[i] = rand() % 101 - 50;
//    }
//    for (int i = 0; i < N; i++) {
//        if (massiv[i] % 2 == 0) {
//            juft[j++] = massiv[i];
//        } else {
//            toq[t++] = massiv[i];
//        }
//        if (massiv[i] > 0) {
//            musbat[m++] = massiv[i];
//        } else if (massiv[i] < 0) {
//            manfiy[c++] = massiv[i];
//        }
//    }
//    tartibla(juft, j, 1);
//    faylgaYoz("Juft.txt", juft, j);
//    tartibla(toq, t, 0);
//    faylgaYoz("Toq.txt", toq, t);
//    tartibla(musbat, m, 0);
//    faylgaYoz("Musbat.txt", musbat, m);
//    tartibla(manfiy, c, 1);
//    faylgaYoz("Manfiy.txt", manfiy, c);
//
//    return 0;
//}
//void tartibla(int arr[], int n, int oshish) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if ((oshish && arr[i] > arr[j]) || (!oshish && arr[i] < arr[j])) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//void faylgaYoz(const char *faylNomi, int arr[], int n) {
//    FILE *fayl = fopen(faylNomi, "w");
//    for (int i = 0; i < n; i++) {
//        fprintf(fayl, "%d ", arr[i]);
//    }
//    fclose(fayl);
//}
////uy ishi 7
//#include <stdio.h>
//#include <stdlib.h>
//
//void tartibla(int arr[], int n, int oshish);
//void faylgaYoz(const char *faylNomi, int arr[], int n);
//
//int main() {
//    int n;
//    int yigindilar[100];
//    int i;
//    printf("n ni  kiriting: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        int yigindi = i * i;
//        yigindilar[i-1] = yigindi;
//    }
//    int oshish = n % 2 == 0 ? 1 : 0;
//    tartibla(yigindilar, n, oshish);
//    faylgaYoz("Yigindilar.txt", yigindilar, n);
//
//    return 0;
//}
//void tartibla(int arr[], int n, int oshish) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if ((oshish && arr[i] > arr[j]) || (!oshish && arr[i] < arr[j])) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//void faylgaYoz(const char *faylNomi, int arr[], int n) {
//    FILE *fayl = fopen(faylNomi, "w");
//    for (int i = 0; i < n; i++) {
//        int qiymat = arr[i];
//        for (int j = 0; j < i + 1; j++) {
//            fprintf(fayl, "%d", qiymat);
//            if (j < i) {
//                fprintf(fayl, "+");
//            }
//        }
//        fprintf(fayl, "=%d\n", qiymat);
//    }
//    fclose(fayl);
//}
//sinf ishi 3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct  {
    char name[50];
    int age;
    char email[50];
} User;

int user_data_count(){
    FILE *file = fopen("users.txt", "r");
    int count = 0;

    char data[1024];

    while (fgets(data, sizeof(data), file) != NULL)
    {
        count++;
    }

    fclose(file);
    return count;
}

User split_data(char data[1024]){
    User user;

    char *token = strtok(data, ",");

    strcpy(user.name, token);

    token = strtok(NULL, ",");
    user.age = atoi(token);

    token = strtok(NULL, ",");
    while (*token == ' ') {
        token++;
    }

    strcpy(user.email, token);

    return user;
}

User write_to_file(){
    User user;
    puts("");
    printf("Enter Name: ");
    scanf("%s", user.name);

    printf("Enter Age: ");
    scanf("%d", &user.age);

    printf("Enter Email: ");
    scanf("%s", user.email);

    FILE *file = fopen("users.txt", "a");

    if(file == NULL){
        printf("Failed while opening file!");
        return user;
    }

    fprintf(file, "%s, %d, %s\n", user.name, user.age, user.email);
    fclose(file);

    return user;
}

void read_from_file(User* users){
    FILE *file = fopen("users.txt", "r");

    if(file == NULL){
        printf("Failed while opening file!");
        return ;
    }

    char data[1024];
    int i = 0;
    while (fgets(data, sizeof(data), file) != NULL)
    {
        User user = split_data(data);
        users[i++] = user;
    }
    fclose(file);
    return;
}

int main(){
    User *users;

    int n = user_data_count();
    printf("%d\n", n);
    users = (User *) malloc(sizeof(User ) * n);

    int number;
    printf("number of users: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        write_to_file();
    }


    read_from_file(users);

    for (int i = 0; i < number + n-1; i++)
    {

        printf("user %d\n", i+1);

        printf("Enter Name: %s\n", users[i].name);

        printf("Enter Age: %d\n", users[i].age);

        printf("Enter Email: %s\n\n", users[i].email);
    }

}
// ustoz dars da ishlab berdila buni qoshimcha ustoz
//tepadagi uyga vazifalarni qiyinlarini ustoz bilan darsda bajardik