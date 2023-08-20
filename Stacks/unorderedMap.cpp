#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    // map creation
    unordered_map<string, int> m;
    m["fortuner"] = 10;
    m["alto"] = 9;
    m["baleno"] = 3;
    cout << m["fortuner"] << endl;
    cout << m["baleno"] << endl;
    cout << m["alto"] << endl;

    return 0;
}