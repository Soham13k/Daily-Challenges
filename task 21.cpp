#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(topElement);
}

void reverseStack(stack<int> &st) {
    if (st.empty()) return;

    int topElement = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, topElement);
}

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Original Stack (top to bottom): ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    reverseStack(st);

    cout << "Reversed Stack (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
