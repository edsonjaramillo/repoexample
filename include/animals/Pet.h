#pragma once
#include <string>

class Pet {
private:
  std::string m_name;
  std::string m_type;

public:
  Pet(std::string, std::string);
  ~Pet();
  std::string getName();
  std::string getType();
};
