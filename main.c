// https://gist.github.com/6210cc538d65f98cfd3b66e07d9d685d
#include <stdio.h>
#define MAX 1004



void obtem(float t[]) {
    int i;
    printf("Informe as temperaturas dos ultimos %d dias: \n", MAX);
    for (i = 0; i < MAX ;i++) {
        printf("Temp. do %do dia: ", i + 1);
        scanf("%f", &t[i]);
    }
}

float media(float t[]) {
    int i;
    float s = 0;
    for (i = 0; i < MAX ; i++) {
        s += t[i];
    }
    return s / MAX;
}

int conta(float t[], float m) {
    int i, c = 0;
    for (i = 0; i < MAX ;i++) {
        if (t[i] > m) {
            c++;
        }
    }
    return c;
}

int main() {
    float temp[MAX], m;
    obtem(temp);
    m = media(temp);
    printf("Media da Temp: %.2fº\n", m);
    printf("Dias acima da media: %d\n", conta(temp, m));
    return 0;
}