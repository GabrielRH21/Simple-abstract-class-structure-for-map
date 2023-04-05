#pragma once

#include "Nodo.hpp"

template<class T>
class Lista {
  public:
    Lista();

    int GetSize();

    void add(const T);
    bool search (const T);

  private:
    Nodo<T> *head_;
    int size_;
};

template<class T>
Lista<T>::Lista() {
  head_ = NULL;
  size_ = 0;
}

template<class T> 
int Lista<T>::GetSize() {
  return size_;
}

template<class T>
void Lista<T>::add(const T dato){
  Nodo<T> *aux = new Nodo<T> (dato);
  Nodo<T> *aux2 = head_;
  if (!head_)
    head_ = aux;
  else
    while (aux2->Next != NULL)
      aux2 = aux2->Next;
    aux2->Next = aux;
  size_++;
}