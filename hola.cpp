#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Car
{
  string brand;
  string plate;
};

struct Person
{
  string name;
  int age;
  string dni;
  string email;
  Car car;
};

void printPerson(Person const &p)
{
  cout << "Nombre: " << p.name << "\n";
  cout << "Edad: " << p.age << endl;
  cout << "Marca del coche: " << p.car.brand << endl;
}

int main()
{
  Person alberto{"Alberto", 18, "123456789J", "alberto.valero@bq.com", Car{"Hyundai", "1234ABC"}};
  Person maria{"Maria", 20, "123436789J", "maria@bq.com", Car{"Kia", "1234ABC"}};
  Person aldo{"Aldo", 13, "123436789J", "maria@bq.com", Car{"Kia", "1234ABC"}};
  Person violeta{"Violeta", 17, "123436789J", "maria@bq.com", Car{"Kia", "1234ABC"}};
  Person alvaro{"alvaro", 23, "123436789J", "maria@bq.com", Car{"Kia", "1234ABC"}};

  std::vector<Person> people = {alberto, maria, aldo, violeta, alvaro};

  std::cout << "Personas mayores de edad:\n";
    for (const auto& p : people) {
        if (p.age >= 18) {
            std::cout << p.name << " (" << p.age << " años)" << std::endl;
        }
    }

    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < people.size(); ++i) { // uso de size_t para índices de vectores
        if (people[i].age >= 18) {
            std::cout << people[i].name << " (" << people[i].age << " años)" << std::endl;
        }
    }


  return 0;
}

// Luis
// 18
// Hyiundai
// Luis
// 18
// Hyundai
// Luis