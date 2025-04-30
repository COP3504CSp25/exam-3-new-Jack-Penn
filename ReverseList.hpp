#pragma once
#include <vector>

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
        std::vector<int> nodeData;
        Node* temp = head;
        while(temp != nullptr) {
            nodeData.push_back(temp->data);
            temp = temp -> next;
        }
        LinkedList result;
        for(int i = nodeData.size()-1; i >= 0; i--) {
            result.addHead(nodeData.at(i));
        }
        return result;
    }

    Node* head = nullptr;
};
