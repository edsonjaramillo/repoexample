#pragma once

#include "Person.h"
#include <vector>

class Family {
private:
  std::string m_name;
  std::vector<Person *> m_members;

public:
  Family(std::string);
  ~Family();
  std::string getName();
  void changeName(std::string);
  void addMember(Person *member);
  void printInfo();
};
