//======que1: Minimum value from stack============
#include <iostream>
#include <stack>
using namespace std;
class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;

public:
    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack stack;
    stack.push(5);
    stack.push(2);
    stack.push(7);
    stack.push(8);

    cout << "Minimum value: " << stack.getMin() <<endl;

    stack.pop();
    
return 0;
}