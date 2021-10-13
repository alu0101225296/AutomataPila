#include <iostream>
#include <fstream>
#include <string>
#include "ap.cpp"

int main(int argc, char *argv[]) {
  if (argc != 2) { 
    std::cout << "introduzca fichero como argumento"; 
    return 0;
  }
  std::string file = argv[1];
  AP automata(file);

  std::cout << "\n\n";
  automata.run("aab");
  // cargo gramática 1vez
  // voy cargando cadenas por teclado  
}