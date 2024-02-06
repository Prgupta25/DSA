#include<bits/stdc++.h>
#include<stack>
using namespace std;
class MinStack {
public:
    MinStack() {
        stk2.push(INT_MAX);
    }

    void push(int val) {
        stk1.push(val);
        stk2.push(min(val, stk2.top()));
    }

    void pop() {
        stk1.pop();
        stk2.pop();
    }

    int top() {
        return stk1.top();
    }

    int getMin() {
        return stk2.top();
    }

private:
    stack<int> stk1;
    stack<int> stk2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
#include <iostream>

int main() {
    // Create a MinStack object
    MinStack* obj = new MinStack();

    // Push some elements into the stack
    obj->push(5);
    obj->push(3);
    obj->push(7);
    obj->push(2);

    // Get the top element and the minimum element
    std::cout << "Top element: " << obj->top() << std::endl;
    std::cout << "Minimum element: " << obj->getMin() << std::endl;

    // Pop an element from the stack
    obj->pop();

    // Get the top element and the minimum element again
    std::cout << "Top element after pop: " << obj->top() << std::endl;
    std::cout << "Minimum element after pop: " << obj->getMin() << std::endl;

    // Clean up
    delete obj;

    return 0;
}

