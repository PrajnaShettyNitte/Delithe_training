#include <stdio.h>
#define QUE_SIZE 100

int queue[QUE_SIZE];
int f = -1;
int r = -1;

void enqueue(int item) {
    if (r == QUE_SIZE - 1) {
        printf("Queue is full %d\n", item);
        return;
    }

    if (f == -1)
        f = 0;

    queue[++r] = item;
}

void dequeue() {
    if (f == -1 || f > r) {
        printf("Queue is empty. Cannot dequeue\n");
        return;
    }

    f++;
}

int front_element() {
    if (f == -1 || f > r) {
        printf("Queue is empty. No front element.\n");
        return -1;
    }

    return queue[f];
}

int main() {
    int q, operation, item;
    scanf("%d", &q);

    while (q--) {
        scanf("%d", &operation);
        switch (operation) {
            case 1:
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("%d\n", front_element());
                break;
            default:
                printf("Invalid operation: %d\n", operation);
                break;
        }
    }

    return 0;
}
