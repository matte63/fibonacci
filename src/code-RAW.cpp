#include <iostream>
#include <iomanip>

/*  It works until 94th number, due to computer limits */


int main(int argc, char const *argv[]) {

  /* code */

  std::cout << "Fibonacci Sequence"
  << std::endl
  << std::endl;
  std::cout << "NOTE"
  << std::endl << "It works until 94th number, due to computer"
  << std::endl << "limits."
  << std::endl
  << std::endl;

  int n, i;
  unsigned long long int a = 0, b = 1, c;

  std::cout << "Enter the limit: ";
  std::cin >> n;

  if (n > 94) {

    std::cout << "ERROR: Use a smaller value."
    << std::endl
    << std::endl;

  }

  else {

    std::cout << "First " << n
    << " numbers in Fibonacci sequence are:"
    << std::endl
    << std::endl;

    for (i = 0; i < n; ++i) {

      if (i <= 1) {

        c = i;

      }

      else {

        c = a + b;
        a = b;
        b = c;

      }

      if (i < 10) {

        std::cout << "  a(" << i << ") = " << c
        << std::endl;

      }

      else {
        std::cout << " a(" << i << ") = " << c
        << std::endl;
      }
      std::cout << " ratio = " << (float)a/b
      << std::endl
      << std::endl;

    }


  }

  return 0;
}
