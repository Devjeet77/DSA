#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    // cout << name << endl;
    int n;
    // n = strlen(name);
    n = name.length();
    cout << "the length is : " << n << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << name[i] << endl;
    // }
    // int j = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (name[i] == name[j])
    //     {
    //         name.erase(i, 1);
    //     }
    // }
}