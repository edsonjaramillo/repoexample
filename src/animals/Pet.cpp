#include "../../include/animals/Pet.h"
#include <string>

Pet::Pet(std::string name, std::string type) {
  this->m_name = name;
  this->m_type = type;
}

Pet::~Pet() {}

std::string Pet::getName() { return this->m_name; }
std::string Pet::getType() { return this->m_type; }
