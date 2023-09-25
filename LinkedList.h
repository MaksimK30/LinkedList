#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdexcept>

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
    void PushAt(int index, T value){
        if(index >= size || index < 0){
            throw std::out_of_range("Index out of range");
        }

        Node *currentNode = header;

        for(int i = 0; i < index; i++){
            currentNode = currentNode->pNextNode;
        }

        currentNode->value = value;
        size++;
    }

    //Получение первого элемента
    T Front(){
        return header == nullptr ? throw std::out_of_range("Index out of range") : header->value;
    }

    //Получит элемент по индексу
    T ElementAt(int index){
        if(size <= index || size < 0){
            throw std::out_of_range("Index out of range");
        }

        Node *currentNode = header;
        for(int i = 0; i < index; i++){
            currentNode = currentNode->pNextNode;
        }

        return currentNode->value;
    }

    //Получить последний элемент
    T Back(){
        if(size < 1){
            throw std::out_of_range("Index out of range");
        }

        Node *currentNode = header;

        while(currentNode->pNextNode != nullptr){
            currentNode = currentNode->pNextNode;
        }

        return currentNode->value;
    }

    T PopFront(){
        Node *tmpNode;
        T value;

        if(size == 0){
            throw std::out_of_range("Index out of range");
        }

        tmpNode = header;
        value = tmpNode->value;

        header = tmpNode->pNextNode;
        delete tmpNode;
        size--;

        return value;
    }

    T PopAt(int index){
        Node *currentNode;
        Node *tmpNode;
        T value;

        if(index < 0 || index >= size){
            throw std::out_of_range("Index out of range");
        }

        currentNode = header;

        for(int i = 0; i < index; i++){
            currentNode = currentNode->pNextNode;

            if(i == index - 2){
                tmpNode = currentNode;
            }
        }


        value = currentNode->value;
        tmpNode->pNextNode = currentNode->pNextNode;
        delete currentNode;
        size--;
        return value;
    }

    T PopBack(){
        Node *currentNode;
        T value;

        if(size < 1){
            throw std::out_of_range("Index out of range");
        }

        if(size == 1){
            value = header->value;
            delete header;
            header = nullptr;
            size = 0;
            return value;
        }

        currentNode = header;

        for(int i = 0; i < size - 2; i++){
            currentNode = currentNode->pNextNode;
        }
        \
        value = currentNode->pNextNode->value;
        delete currentNode->pNextNode;
        currentNode->pNextNode = nullptr;
        size--;

        return value;
    }

    void EraseFront(){
        Node *tmpNode;

        if(size == 0){
            throw std::out_of_range("Index out of range");
        }

        tmpNode = header;

        header = tmpNode->pNextNode;
        delete tmpNode;
        size--;
    }

    void EraseAt(int index){
        Node *currentNode;
        Node *tmpNode;

        if(index < 0 || index >= size){
            throw std::out_of_range("Index out of range");
        }

        currentNode = header;

        for(int i = 0; i < index; i++){
            currentNode = currentNode->pNextNode;

            if(i == index - 2){
                tmpNode = currentNode;
            }
        }

        tmpNode->pNextNode = currentNode->pNextNode;
        delete currentNode;
        size--;
    }

    void EraseBack(){
        Node *currentNode;

        if(size < 1){
            throw std::out_of_range("Index out of range");
        }

        if(size == 1)
        {
            delete header;
            header = nullptr;
            size = 0;
        }

        currentNode = header;

        for(int i = 0; i < size - 2; i++){
            currentNode = currentNode->pNextNode;
        }
        \
        delete currentNode->pNextNode;
        currentNode->pNextNode = nullptr;
        size--;
    }

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
