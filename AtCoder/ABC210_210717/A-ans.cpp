// #include <iostream>
//
// using namespace std;
//
// int main(void)
// {
//   int n, a, x, y;
//   cin >> n >> a >> x >> y;
//
//   if(n <= a) cout << n*x << endl;
//   else cout << a*x + (n-a)*y << endl;
//
//   return 0;
// }

// otherwise
#include <iostream>

int main(void)
{
  int n, a, x, y;
  std::cin >> n >> a >> x >> y;

  if(n <= a) std::cout << n*x << std::endl;
  else std::cout << a*x + (n-a)*y << std::endl;

  return 0;
}
