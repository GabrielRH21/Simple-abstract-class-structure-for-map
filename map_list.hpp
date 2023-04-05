#pragma once

#include <iostream>
#include <vector>

#include "map.hpp"
#include "exceptions.hpp"

template<class Key, class T>
class Map_List: public Map<Key, T> {
  public:
    typedef std::pair<const Key, T> value_type;
    bool insert(const Key, T&);
    T& operator[](const Key);
  private:
    std::vector<value_type> list_;
};

template<class Key, class T>
bool Map_List<Key, T>::insert(const Key clave, T& dato) {
  for(unsigned i = 0; i < list_.size(); i++) {
    if(clave == list_.at(i).first) {
      return false;
    }
  }
  value_type aux {clave, dato};
  list_.push_back(aux);
  return true;
}

template<class Key, class T>
T& Map_List<Key, T>::operator[](const Key clave) {
  for(unsigned i = 0; i < list_.size(); i++) {
    if(clave == list_.at(i).first) {
      return list_.at(i).second;
    }
  }
  throw map_exception_bad_key();
}