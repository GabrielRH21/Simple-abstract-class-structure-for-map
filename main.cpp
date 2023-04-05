#include <iostream>

#include "map.hpp"
#include "map_binary.hpp"
#include "map_list.hpp"
#include "exceptions.hpp"

int main() {
  Map<int, std::string>* map;
  int opt, clave;
  std::string dato;
  /*std::string word = "hello";
  std::string word2 = "PEPE";
  map = new Map_List<int, std::string>;
  for (int i = 0; i < 6; i++) {
    map->insert(i, word);
  }

  for (int i = 0; i < 6; i++) {
    try{
      std::cout << map->operator[](i) << std::endl;
    }
    catch (map_exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  try{
    std::cout << map->operator[](89) << std::endl;
  }
  catch (map_exception& e) {
    std::cout << e.what() << std::endl;
  }*/
//
  std::cout << "Practica del examen de junio" << std::endl;
  
  
  do {
    std::cout << "A continuacion seleccione el mapa con el que desea trabajar" << std::endl;
    std::cout << "1. Map Array Binary" << std::endl;
    std::cout << "2. Map List" << std::endl;
    std::cout << "Seleccion: ";
    std::cin >> opt;
    system("clear");
  } while(opt < 1 || opt > 2);

  if(opt == 1) {
    int size;
    std::cout << "Usted a seleccionado: Map Array Binary" << std::endl;
    do {
      std::cout << "Introduzca el tamaño de su Map: ";
      std::cin >> size;
      system("clear");
    } while(size <= 0);
    map = new Map_Array_Binary<int , std::string> (size);
  } else {
    std::cout << "Usted a seleccionado: Map List" << std::endl;
    map = new Map_List<int, std::string>;
  }
  opt = 0;
  do {
    do {
      std::cout << "____MENU DE OPCIONES____" << std::endl;
      std::cout << "1. Insertar" << std::endl;
      std::cout << "2. Buscar" << std::endl;
      std::cout << "3. Finalizar Programa" << std::endl;
      std::cout << "Opcion: ";
      std::cin >> opt;
      system("clear");
    } while (opt < 1 || opt > 3);

    switch (opt) {
    case 1:
      std::cout << "Introduzca el numero clave que desea: ";
      std::cin >> clave;
      std::cout << "A continuacion introduzca el string a almacenar: ";
      std::cin >> dato;
      if (map->insert(clave, dato)) {
        std::cout << "Variables almacenadas con exito" << std::endl;
      }
      break;
    case 2:

      break;
    case 3:

      break;
    default:
      break;
    }
  } while(opt != 3);
//
  return 0;
}
