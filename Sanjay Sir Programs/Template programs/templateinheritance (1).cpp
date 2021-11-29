// templateInheritance2.cpp

#include <iostream>

template <typename T>
class Base{
public:
  void func1() const {
    std::cout << "Hello func1()\n";
  }
  void func2() const {
    std::cout << "Hello func2()\n";
  }
  void func3() const {
    std::cout << "Hello func3()\n";
  }
};

template <typename T>
class Derived: public Base<T>{
public:
  using Base<T>::func2;              // (2)
  void callAllBaseFunctions(){

    this->func1();                   // (1)
    func2();                         // (2)
    Base<T>::func3();                // (3)

  }
};


int main(){

  std::cout << '\n';

  Derived<int> derived;
  derived.callAllBaseFunctions();

  std::cout << '\n';

}
