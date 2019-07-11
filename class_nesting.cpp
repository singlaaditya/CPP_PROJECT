#include <iostream>

class X {
 int a;
public:
 X(): a(54) {}
 void func() {
  /*
   class Y {
   public: 
   void func() {
   X x1;
   std::cout << x1.a << std::endl;
   }
   };
  Y y1;
  y1.func();
  */
  {
  auto r = []() {std::cout << "Aditya Singla" << std::endl;};
  }
  r();
}
void func1() {
   //Y y1;
   //y1.func();
}
};



int main() {
 X x1;
 x1.func();
 x1.func1();
}

