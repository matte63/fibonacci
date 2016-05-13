#include <iostream>

/*  It works until 94th number, due to computer limits */


int main(int argc, char const *argv[]) {

  /* code */

  std::cout << "\033[1;96mFibonacci Sequence\033[0m"
  << std::endl
  << std::endl;
  std::cout << "\e[1mNOTE\e[0m"
  << std::endl << "It works until 94th number, due to computer"
  << std::endl << "limits."
  << std::endl
  << std::endl;

  int n, i;
  unsigned long long int a = 0, b = 1, c;

  std::cout << "Enter the limit: ";
  std::cin >> n;

  if (n == 1) {

    std::cout << "First number in \033[0;36mFibonacci sequence\033[0m is: "
    << std::endl
    << std::endl;

  }

  else {

    std::cout << "First " << n
    << " numbers in \033[0;36mFibonacci sequence\033[0m are:"
    << std::endl
    << std::endl;

  }

  for (i = 0; i < n; i++) {

    if (i <= 1) {

      c = i;

    }

    else {

      c = a + b;
      a = b;
      b = c;

    }

    std::cout << "         \033[1;31m" << c << "\033[0m"
    << std::endl;

    float r1;

    r1 = (float)a/b;
/*
    std::cout << " a(" << i + 1 << ") / a(" << i << ") = " << r1
    << std::endl
    << std::endl;
*/

    std::cout << " ratio = \033[1;32m" << r1 << "\033[0m"
    << std::endl
    << std::endl;

  }

  /* This defines ratio = a(n) / a(n-1) */

/*  float r1;

  r1 = (float)a/b;

  std::cout << std::endl;
  std::cout << " a(n) / a(n-1) = " << r1 << "..."
  << std::endl
  << std::endl;
*/

  // This defines ratio = A(63) / A(64)

/*  int v;
  float x = 0.0, y = 1.0, z, r2;

  for (v = 0; v < 64; v++) {

  	z = x + y;
  	x = y;
  	y = z;

  }

  r2 = x / y;

	std::cout << "A(63) / A(64) = " << r2 << "... "
  << std::endl
  << std::endl;

*/

  return 0;
}
