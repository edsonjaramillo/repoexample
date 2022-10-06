#pragma once

#include "../animals/Pet.h"
#include <string>

class Person {
private:
  std::string m_firstName;
  std::string m_lastName;
  int m_age;
  Pet *m_pet;

public:
  Person(std::string, std::string, int);
  ~Person();
  std::string getFullName();
  std::string getFirstName();
  std::string getLastName();
  void setFirstName(std::string);
  void setLastName(std::string);
  void setAge(int);
  void setPet(Pet *);
  int getAge();
  void printInfo();
};
