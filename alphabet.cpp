#include "alphabet.h"

Alphabet::Alphabet() {
  alphabet.push_back(".");  // es correcto añadirlo o simplemente en check() devolver true si elem == .
}
Alphabet::~Alphabet() {

}

void Alphabet::add(std::string elem) {
  alphabet.push_back(elem);
}

bool Alphabet::check(std::string elem) {
  return std::find(alphabet.begin(), alphabet.end(), elem) != alphabet.end();
}

void Alphabet::print() {
  for(auto token : alphabet)
    std::cout << token << " ";
  std::cout << "\n";
}