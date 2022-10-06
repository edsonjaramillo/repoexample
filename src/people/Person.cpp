#include "../../include/people/Person.h"
#include <iostream>
#include <string>

Person::Person(std::string firstName, std::string lastName, int age) {
  this->m_firstName = firstName;
  this->m_lastName = lastName;
  this->m_age = age;
  this->m_pet = nullptr;
}

Person::~Person() {}

// Getters

std::string Person::getFullName() {
  return this->m_firstName + " " + this->m_lastName;
}

std::string Person::getFirstName() { return this->m_firstName; }

std::string Person::getLastName() { return this->m_lastName; }

// Setters
int Person::getAge() { return this->m_age; }

void Person::setFirstName(std::string firstName) {
  this->m_firstName = firstName;
}

void Person::setLastName(std::string lastName) { this->m_lastName = lastName; }

void Person::setAge(int age) { this->m_age = age; }

void Person::setPet(Pet *pet) { this->m_pet = pet; }

void Person::printInfo() {
  std::cout << "Full name: " << this->getFullName() << std::endl;
  std::cout << "Age: " << this->m_age << std::endl;
  if (this->m_pet != nullptr) {
    std::cout << "Pet: " << this->m_pet->getName() << " ("
              << this->m_pet->getType() << ")" << std::endl;
  }
}
