#include "../../include/people/Family.h"
#include <iostream>
#include <string>

Family::Family(std::string name) { this->m_name = name; }

Family::~Family() {}

void Family::addMember(Person *member) { this->m_members.push_back(member); }

std::string Family::getName() { return this->m_name; }

void Family::changeName(std::string name) {
  this->m_name = name;

  for (const auto &member : this->m_members) {
    member->setLastName(name);
  }
}

void Family::printInfo() {
  std::cout << "Family name: " << this->m_name << std::endl << std::endl;
  std::cout << "Members: " << std::endl;
  for (const auto &member : this->m_members) {
    member->printInfo();
  }
  std::cout << std::endl << std::endl;
}