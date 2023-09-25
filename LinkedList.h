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
    void PushBack(T *value){
        if(header == nullptr){
            header = Node(value);
        }else{
            Node *currentNode = header;
            while(currentNode != nullptr){
                currentNode = currentNode->pNextNode;
            }
        }
    }

private:
    class Node{
    public:
        Node(T value, Node *nextNode = nullptr){
            pNextNode = nextNode;
        }

        Node *pNextNode;
        T value;
    };

    int size;
    Node *header;

};

#endif // LINKEDLIST_H
