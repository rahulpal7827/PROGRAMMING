#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MIN

// 1. Structure Definition for a Stack Node
struct Node {
    int data;
    struct Node *next;
};

// Global pointer for the Top of the stack
struct Node *top = NULL;

// --- Function Prototypes ---
void push(int data);
int pop();
int peek();
int isEmpty();
void display();

// --- Core Stack Operations ---

// 1. PUSH Operation (Insertion at the beginning of the linked list)
void push(int data) {
    // 1. Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    // Check for heap overflow
    if (newNode == NULL) {
        printf("Stack Overflow! Cannot allocate memory.\n");
        return;
    }
    
    // 2. Set new node's data and next pointer
    newNode->data = data;
    newNode->next = top; // New node points to the current top
    
    // 3. Update the 'top' pointer
    top = newNode; // New node becomes the new top
    printf("Pushed %d onto the stack.\n", data);
}

// 2. POP Operation (Deletion from the beginning of the linked list)
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Stack is empty.\n");
        return INT_MIN; // Use a distinct error value
    }
    
    // 1. Store the top node and its data
    struct Node *temp = top;
    int poppedData = temp->data;
    
    // 2. Move the 'top' pointer to the next node
    top = top->next;
    
    // 3. Free the memory of the popped node
    free(temp);
    
    printf("Popped %d from the stack.\n", poppedData);
    return poppedData;
}

// 3. PEEK Operation
int peek() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot peek.\n");
        return INT_MIN;
    }
    return top->data;
}

// 4. IS EMPTY Operation
int isEmpty() {
    return top == NULL;
}

// 5. DISPLAY (Utility function to visualize the stack)
void display() {
    struct Node *current = top;
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    
    printf("\nStack Contents (TOP -> Bottom):\n");
    while (current != NULL) {
        printf("| %-4d |\n", current->data);
        printf("--------\n");
        current = current->next;
    }
}

// --- Main Program to Demonstrate Stack Operations ---
int main() {
    
    display(); // Initially empty

    push(10);
    push(20);
    push(30);

    display();

    printf("\nTop element is: %d\n", peek());

    pop(); // Pop 30
    
    printf("Top element after pop: %d\n", peek());

    push(40);

    display();

    pop(); // Pop 40
    pop(); // Pop 20
    pop(); // Pop 10

    // Attempt to pop from an empty stack (Underflow)
    pop(); 

    display();

    return 0;
}