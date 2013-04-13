# Deferred #

A C++ implementation of the Deferred design patern. This implementation is
simmilar to the jQuery Implementation.

The implemetation is templated no compilation needed just include HPP files.

  #include "Deferred.hpp"
  #include <iostream>

  using namespace Df;

  int main(int argc, char** argv)
  {
    Deferred<int> d;
    Promise<int> p;
    Resolver<int> r;

    p = d.promise();
    r = d.resolver();

    p.then([] (int a) {
        std::cout << "A = " << a << std::endl;
      });
    p.fail([] (const std::string& a) {
        std::cout << "Error [" << a << "]" << std::endl;
      });


    //r.error("Oops");
    //     OR
    //r.resolve(42);
    return 0;
  }
