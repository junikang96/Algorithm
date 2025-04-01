#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y); 
}


void find_integer(int N, int M, int *arr1, int *arr2) {
    qsort(arr1, N, sizeof(int), compare);

    for (int i = 0; i < M; i++) {
        int *found = bsearch(&arr2[i], arr1, N, sizeof(int), compare);
        printf("%d\n", found != NULL ? 1 : 0);
    }
}

int main(void) {
    int N, M;
    scanf("%d", &N);
    int arr1[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &M);
    int arr2[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &arr2[i]);
    }

    find_integer(N, M, arr1, arr2);
    return 0;
}