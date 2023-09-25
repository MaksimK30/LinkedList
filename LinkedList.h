#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class LinkedList{
public:
    //Вставить элемент
    void Add(){

    }

    //Вставляет элемент после текущего
    void AddNext(){

    }

    //Получить размер списка
    int GetSize(){

    }

    //Получить элемент по индексу
    T GetItem(int index){

    }

    //Удалить элемент по индексу
    void Remove(int index){

    }

    //Получить и удалить последний элемент
    T Pop(){

    }

    //Получить и удалить элемент по индексу
    T Pop(int index){

    }

private:
    int size;
    LinkedList<T> *nextItem;
};

#endif // LINKEDLIST_H
