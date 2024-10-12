# stack_implementation.cpp
## Aim 
To use excepttion handling.

## Software Used 
VS Code

## Theory
### Definition
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. Stacks are used in various applications, including function call management, expression evaluation, and backtracking algorithms.

**Key Characteristics of Stack**

- **LIFO Structure**: The most recently added element is the first to be removed.
  eg-
  
  ```cpp
  struct Stack {
    int arr[MAX]; // Array to hold stack elements
    int top;      // Index of the top element
  };
  


### Operations

- **Push**: Add an element to the top of the stack.
- **Pop**: Remove and return the top element of the stack.
- **Peek/Top**: Return the top element without removing it.
- **isEmpty**: Check if the stack is empty.
- **isFull**: Check if the stack is full (only applicable in fixed-size stacks).

### Implementation

Stacks can be implemented using two main methods: arrays and linked lists.

## Algorithms
# Algorithm for Stack Implementation

## Data Structure
- Define a class `Stack` with:
  - An array `arr` of size `MAX` to store stack elements.
  - An integer `top` initialized to -1 to track the top element.

## Operations

1. **Push(value)**
   - If `top` is equal to `MAX - 1`, print "Stack overflow! Cannot push."
   - Otherwise, increment `top` and assign `arr[top] = value`.
   - Print "value pushed to stack."

2. **Pop()**
   - If `top` is -1, print "Stack underflow! Cannot pop."
   - Otherwise, print `arr[top]` and decrement `top`.

3. **Display()**
   - If `top` is -1, print "Stack is empty."
   - Otherwise, print all elements from `arr[top]` down to `arr[0]`.

## Main Function
1. Create an instance of `Stack`.
2. Repeat the following until the user chooses to exit:
   - Display a menu with options: Push, Pop, Display, Exit.
   - Read user choice.
   - Perform the corresponding operation based on user choice.

## Conclusion
We learnt to use stack implementation.
