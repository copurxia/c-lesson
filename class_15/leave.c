/*
    谁最先到谁最晚走
*/

#include <stdio.h>

struct peo {
    char ID[7];
    int arr[3];
    int lea[3];
    int artime, letime;
};

int main() {
    int n;
    scanf("%d\n", &n);
    struct peo peos[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d %d:%d:%d", peos[i].ID, &peos[i].arr[0], &peos[i].arr[1], &peos[i].arr[2],
              &peos[i].lea[0], &peos[i].lea[1], &peos[i].lea[2]);
    }
    for (int i = 0; i < n; i++) {
        peos[i].artime = peos[i].arr[0] * 3600 + peos[i].arr[1] * 60 + peos[i].arr[2];
        peos[i].letime = peos[i].lea[0] * 3600 + peos[i].lea[1] * 60 + peos[i].lea[2];
    }
    int open = 0, close = 0;
    for (int i = 0; i < n; i++) {
        if (peos[i].artime < peos[open].artime) {
            open = i;
        }
        if (peos[i].letime > peos[close].letime) {
            close = i;
        }
    }
    printf("Open: %s %02d:%02d:%02d\n", peos[open].ID, peos[open].arr[0], peos[open].arr[1], peos[open].arr[2]);
    printf("Close: %s %02d:%02d:%02d\n", peos[close].ID, peos[close].lea[0], peos[close].lea[1], peos[close].lea[2]);
}