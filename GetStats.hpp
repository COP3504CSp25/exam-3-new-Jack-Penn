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

    int* getStats() const{
        //write your function here!
        int max = head->data;
        int min = head->data;
        int sum = 0;
        int size = 0;

        Node* temp = head;
        while(temp != nullptr) {
            if(temp->data < min)
                min = temp->data;
            if(temp->data > max)
                max = temp->data;
            sum += temp->data;
            size++;
            temp = temp->next;
        }
        return new int[3]{min, max, sum/size};
    }
    

private:
    Node* head = nullptr;
};
