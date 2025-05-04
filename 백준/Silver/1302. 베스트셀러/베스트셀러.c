#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void best_seller_books(int N, char books[][51])
{
    int count = 1, max_count = 1;
    char prev_book[51];
    char max_book[51];
    strcpy(prev_book, books[0]);
    strcpy(max_book, books[0]);

    for(int i =1; i < N; i++)
    {
        if(!strcmp(prev_book, books[i]))
        {
            count++;
        }
        else
        {
            count = 1;
            strcpy(prev_book, books[i]);
        }
        if(count > max_count)
        {
            max_count = count;
            strcpy(max_book, books[i]);
        }
        else if (count == max_count && strcmp(books[i], max_book) < 0)
        {
            strcpy(max_book, books[i]);
        }
    }
    printf("%s\n", max_book);
}

int compare(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
}

int main(void)
{
    int N;
    char books[1000][51];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%s", books[i]);
    }
    qsort(books, N, sizeof(books[0]), compare);
    best_seller_books(N, books);
    return 0;
}