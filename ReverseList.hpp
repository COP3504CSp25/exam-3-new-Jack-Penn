#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        // implement your function here!
        LinkedList result;
        Node* temp = head;
        while(temp != nullptr) {
            result.addHead(temp->data);
            temp = temp -> next;
        }
        return result;
    }

    Node* head = nullptr;
};
