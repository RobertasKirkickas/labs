#include <stdio.h>

#define MAX 100           // Maximum size of the stack
int stack[MAX], top = -1; // Stack array and top pointer initialized to -1 (empty stack)

// Push operation to add an element to the stack
void push(int data)
{
    if (top == MAX - 1)
    {                               // Check if the stack is full
        printf("Stack Overflow\n"); // Stack overflow error
    }
    else
    {
        stack[++top] = data; // Increment top and add the element to the stack
    }
}

// Pop operation to remove the top element from the stack
int pop()
{
    if (top == -1)
    {                                // Check if the stack is empty
        printf("Stack Underflow\n"); // Stack underflow error
        return -1;                   // Return -1 to indicate an empty stack
    }
    else
    {
        return stack[top--]; // Return the top element and decrement top
    }
}

// Main function to test the stack operations
int main()
{
    push(10);                      // Push 10 onto the stack
    push(20);                      // Push 20 onto the stack
    printf("Popped: %d\n", pop()); // Pop the top element (20) and print it
    printf("Popped: %d\n", pop()); // Pop the top element (10) and print it
    return 0;
}

queue
#include <stdio.h>

#define MAX 100 // Maximum size of the queue
    int queue[MAX],
    front = 0, rear = -1; // Queue array, front, and rear pointers initialized

// Enqueue operation to add an element to the queue
void enqueue(int data)
{
    if (rear == MAX - 1)
    {                               // Check if the queue is full
        printf("Queue Overflow\n"); // Queue overflow error
    }
    else
    {
        queue[++rear] = data; // Increment rear and add the element to the queue
    }
}

// Dequeue operation to remove the front element from the queue
int dequeue()
{
    if (front > rear)
    {                                // Check if the queue is empty
        printf("Queue Underflow\n"); // Queue underflow error
        return -1;                   // Return -1 to indicate an empty queue
    }
    else
    {
        return queue[front++]; // Return the front element and increment front
    }
}

// Main function to test the queue operations
int main()
{
    enqueue(10);                         // Enqueue 10 to the queue
    enqueue(20);                         // Enqueue 20 to the queue
    printf("Dequeued: %d\n", dequeue()); // Dequeue the front element (10) and print it
    printf("Dequeued: %d\n", dequeue()); // Dequeue the front element (20) and print it
    return 0;
}