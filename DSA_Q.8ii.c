#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


struct Node* insertAtBeginning(struct Node *head, int value) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}


struct Node* insertAtEnd(struct Node *head, int value) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}


struct Node* insertAtPosition(struct Node *head, int value, int position) {
    struct Node *newNode = createNode(value);
    if (position <= 0) {
        printf("Invalid position. Position should be greater than zero.\n");
        return head;
    }
    if (position == 1) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        return newNode;
    }
    struct Node *temp = head;
    int count = 1;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        printf("Position exceeds the length of the list. Inserting at the end.\n");
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    return head;
}

struct Node* insertBeforePosition(struct Node *head, int value, int position) {
    return insertAtPosition(head, value, position - 1);
}

struct Node* insertAfterPosition(struct Node *head, int value, int position) {
    return insertAtPosition(head->next, value, position);
}

struct Node* insertBeforeNumber(struct Node *head, int value, int key) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        printf("List is empty. Cannot insert.\n");
        return NULL;
    }
    if (head->data == key) {
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    struct Node *temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found in the list. Inserting at the end.\n", key);
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    } else {
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }
    return head;
}


struct Node* insertAfterNumber(struct Node *head, int value, int key) {
    struct Node *newNode = createNode(value);
    struct Node *temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found in the list. Inserting at the end.\n", key);
        struct Node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    return head;
}


struct Node* insertAtMiddle(struct Node *head, int value) {
    if (head == NULL) {
        struct Node *newNode = createNode(value);
        return newNode;
    }
    struct Node *slowPtr = head;
    struct Node *fastPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    struct Node *newNode = createNode(value);
    newNode->next = slowPtr->next;
    newNode->prev = slowPtr;
    if (slowPtr->next != NULL) {
        slowPtr->next->prev = newNode;
    }
    slowPtr->next = newNode;
    return head;
}

struct Node* insertAtPenultimateNode(struct Node *head, int value) {
    if (head == NULL || head->next == NULL) {
        printf("List has less than two nodes. Cannot insert at penultimate node.\n");
        return head;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    struct Node *newNode = createNode(value);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    return head;
}

void displayForward(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Doubly linked list elements (forward): ");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayBackward(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Doubly linked list elements (backward): ");
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}


void freeList(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main() {
    struct Node *head = NULL;
    int choice, value, position, key;

    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a given position\n");
        printf("4. Insert before a given position\n");
        printf("5. Insert after a given position\n");
        printf("6. Insert before a given number\n");
        printf("7. Insert after a given number\n");
        printf("8. Insert at the middle\n");
        printf("9. Insert at penultimate node\n");
        printf("10. Display forward\n");
        printf("11. Display backward\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertAtPosition(head, value, position);
                break;
            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertBeforePosition(head, value, position);
                break;
            case 5:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertAfterPosition(head, value, position);
                break;
            case 6:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter number before which to insert: ");
                scanf("%d", &key);
                head = insertBeforeNumber(head, value, key);
                break;
            case 7:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter number after which to insert: ");
                scanf("%d", &key);
                head = insertAfterNumber(head, value, key);
                break;
            case 8:
                printf("Enter value to insert at middle: ");
                scanf("%d", &value);
                head = insertAtMiddle(head, value);
                break;
            case 9:
                printf("Enter value to insert at penultimate node: ");
                scanf("%d", &value);
                head = insertAtPenultimateNode(head, value);
                break;
            case 10:
                displayForward(head);
                break;
            case 11:
                displayBackward(head);
                break;
            case 12:
                freeList(head);
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}


