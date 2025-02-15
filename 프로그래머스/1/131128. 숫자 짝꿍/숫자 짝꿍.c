#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* X, const char* Y) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int countX[10] = {0}, countY[10] = {0};
    
    for (int i=0; X[i] != '\0'; i++)
    {
        countX[X[i] - '0']++;
    }
    
    for (int i=0; Y[i] != '\0'; i++)
    {
        countY[Y[i] - '0']++;
    }
    
    char* answer = (char*)malloc(strlen(X) + 1);
    int index = 0;
    
    // 9부터 0까지 공통 숫자 개수만큼 추가
    for (int num = 9; num >= 0; num--)
    {
        int commonCount = countX[num];
        
        if (countY[num] < countX[num])
        {
            commonCount = countY[num];
        }
        
        int i = 0;
        while (i < commonCount)
        {
            answer[index] = '0' + num;
            index++;
            i++;
        }
    }
    answer[index] = '\0';
    
    // 공통 숫자가 없는 경우 
    if (index == 0)
    {
        free(answer);
        answer = (char*)malloc(3);
        strcpy(answer, "-1");
        return answer;
    }
    
    // 공통 숫자가 0인 경우
    if (answer[0] == '0')
    {
        free(answer);
        answer = (char*)malloc(2);
        strcpy(answer, "0");
        return answer;
    }
    return answer;
}


int main(void)
{
    char X[30000001], Y[3000001];
    scanf("%s %s", X, Y);
    solution(X, Y);
    return 0;
}