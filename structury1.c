#include <stdio.h>

struct Pomiar {
    char data[12];
    float temperatura;
    float cisnienie;
};

int main() {
    struct Pomiar pomiary[3] = {
        {"2025-10-01", 20.5, 1011},
        {"2025-10-02", 19.8, 1017},
        {"2025-10-03", 21.0, 1024}
    };

    double suma_temp = 0;
    for (int i = 0; i < 3; i++)
        suma_temp += pomiary[i].temperatura;

    printf("Srednia temp: %.2f*C\n", suma_temp / 3);
    return 0;
}
