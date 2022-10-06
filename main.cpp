#include "include/animals/Pet.h"
#include "include/people/Family.h"
#include "include/people/Person.h"

#include <string>

int main(int argc, char const *argv[]) {
  Family f1("Potter");
  std::string f1_lastName = f1.getName();
  Person *p1 = new Person("James", f1_lastName, 30);
  Person *p2 = new Person("Lily", f1_lastName, 25);
  Person *p3 = new Person("Harry", f1_lastName, 15);
  Pet *pet1 = new Pet("Hedwig", "Owl");
  f1.addMember(p1);
  f1.addMember(p2);
  f1.addMember(p3);
  p3->setPet(pet1);
  f1.printInfo();
  return 0;
}
