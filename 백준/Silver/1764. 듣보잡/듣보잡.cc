#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    unordered_set<string> str1;
    vector<string> result;

    string name;
    
    for (int i = 0; i < N; i++)
    {
        cin >> name;
        str1.insert(name);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> name;
        if (str1.find(name) != str1.end())
        {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (const string &s : result)
    {
        cout << s << '\n';
    }

    return 0;
}