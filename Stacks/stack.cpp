#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creation of stack
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // remove element
    st.pop();

    // check element on top
    cout << "element on top is  " << st.top() << endl;

    // size
    cout << "size of stack is  " << st.size() << endl;

    if (st.empty())
    {
        cout << "stack is not empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    return 0;
}