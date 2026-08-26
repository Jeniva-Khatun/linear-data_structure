#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int rear = -1;

// Check if queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Check if queue is empty
int isEmpty() {
    return rear == -1;
}

// Insert element
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    rear++;
    queue[rear] = value;

    printf("%d inserted\n", value);
}

// Delete highest-priority element
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    int priorityIndex = 0;

    // Find the largest element
    for (int i = 1; i <= rear; i++) {
        if (queue[i] > queue[priorityIndex]) {
            priorityIndex = i;
        }
    }

    printf("%d deleted\n", queue[priorityIndex]);

    // Shift elements to fill the deleted position
    for (int i = priorityIndex; i < rear; i++) {
        queue[i] = queue[i + 1];
    }

    rear--;
}

// Display queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    for (int i = 0; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {

    enqueue(3);
    enqueue(1);
    enqueue(5);
    enqueue(2);
    enqueue(4);

    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}
