#pragma once

#include <vector>
#include <exception>
#include <stdlib.h>

#include "map.hpp"
#include "exceptions.hpp"

//typedef std::exception map_exception;

template<class Key, class T>
class Map_Array_Binary: public Map<Key, T> {
  public:
    typedef std::pair<const Key, T> value_type;
    Map_Array_Binary(const int m): Max_Size(m) {}
    bool insert(const Key, T&);
    T& operator[] (const Key);
  private:
    unsigned Max_Size;
    std::vector<value_type> list_;
};

template<class Key, class T>
bool Map_Array_Binary<Key, T>::insert(const Key clave, T& dato) {
  try {
    if ( list_.size() + 1 > Max_Size ) {
      throw map_exception_limit();
    }
    value_type aux{clave, dato};
    list_.push_back(aux);
    return true;
  }
  catch (map_exception& e) {
    std::cout << std::endl << e.what() << std::endl << std::endl;
    return false;
  }
}

template<class Key, class T>
T& Map_Array_Binary<Key, T>::operator[](const Key clave) {
    for (unsigned i = 0; i < list_.size(); i++) {
      if (clave == list_.at(i).first) {
        return list_.at(i).second;
      }
    }
    throw map_exception_bad_key();
}