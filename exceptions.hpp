#pragma once

#include <iostream>
#include <exception>

using namespace std;

class map_exception: public exception {
 public:
  virtual const char* what() const noexcept = 0;
};

class map_exception_bad_key: public map_exception {
 public:
  const char* what() const noexcept {
    return "¡ERROR! Clave no válida.";
  }
};

class map_exception_limit: public map_exception {
 public:
  const char* what() const noexcept {
    return "¡ERROR! Límite sobrepasado.";
  }
};
