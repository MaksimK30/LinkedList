#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class LinkedList{
public:
    LinkedList(){
        size = 0;
        header = nullptr;
    }

    //Добавить элемент в конце списка
    void PushBack(T value){
        if(header == nullptr){
            header = new Node(value);
        }else
        {
            Node *currentNode = header;
            while(currentNode->pNextNode != nullptr){
                currentNode = currentNode->pNextNode;
            }

            currentNode->pNextNode = new Node(value);
        }
        size++;
    }

    //Добавление элемента в начало
    void PushFront(T value){
        Node *newHeader = new Node(value);
        newHeader->pNextNode = header;
        header = newHeader;
        size++;
    }

    //Добавление элемента в место по индексу

    //Проверка на пустоту
    bool IsEmpty(){
        return size == 0;
    }

private:
    class Node{
    public:
        Node(T value, Node *nextNode = nullptr){
            pNextNode = nextNode;
            this->value = value;
        }

        Node *pNextNode;
        T value;
    };

    int size;
    Node *header;

};

#endif // LINKEDLIST_H
