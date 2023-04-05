#pragma once

template<class Key, class T>
class Map {
  public:
    virtual bool insert(const Key, T&) = 0;
    virtual T& operator[](const Key) = 0;
};