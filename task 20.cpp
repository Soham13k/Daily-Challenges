#include <iostream>
#include <stack>
using namespace std;

void insertInSorted(stack<int> &st, int element) {

    if (st.empty() || st.top() >= element) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertInSorted(st, element);

    st.push(temp);
}

void sortStack(stack<int> &st) {
   
    if (st.empty()) return;

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertInSorted(st, temp);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Example input
    st.push(3);
    st.push(-1);
    st.push(4);
    st.push(0);
    st.push(2);

    cout << "Original stack (top to bottom): ";
    printStack(st);

    sortStack(st);

    cout << "Sorted stack (top to bottom): ";
    printStack(st);

    return 0;
}
