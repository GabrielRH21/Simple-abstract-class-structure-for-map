#pragma once

#include <iostream>

template<class T>
class Nodo {
  public:
    Nodo(const T);
    Nodo();

    void SetSecond(const T);
    void SetNext(Nodo);

    T GetSecond();
    int* Next();

  private:
    T SecondVal;
    Nodo *Next;
};

template<class T>
Nodo<T>::Nodo(const T dato) {
  SecondVal = dato;
  Next = NULL;
}

template<class T>
Nodo<T>::Nodo() {
  SecondVal = NULL;
  Next = NULL;
}

/*template<class T>
void Nodo<T>::SetSecond(const T dato) {
  SecondVal = dato;
}

template<class T>
void Nodo<T>::SetNext(Nodo sig) {
  Next
}*/