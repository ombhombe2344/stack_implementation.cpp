/* name om bhombe
prn 23070123039
  aim :stack using array
*/
#include <iostream>
using namespace std;

class Stack {
public:
    int capacity;
    int top;
    int* arr;

    
Stack(int capacity) {
        this->capacity = capacity;
arr = new int[capacity];
        top = -1; 
    }

    
    ~Stack() {
delete[] arr; 
    }

    
    void push(int element) {
        if (top < capacity - 1) { 
            top++;
arr[top] = element;
        } else {
cout<< "Stack Overflow" <<endl;
        }
    }

    
    void pop() {
        if (top >= 0) {
            top--;
        } else {
cout<< "Stack Underflow" <<endl;
        }
    }

  
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            return -1; 
        }
    }
};

int main() {
    Stack st(5);
st.push(23);
st.push(24);
st.push(25);

cout<<st.peek() <<endl; // Output: 25
st.pop();
cout<<st.peek() <<endl; // Output: 24

    return 0;
}
