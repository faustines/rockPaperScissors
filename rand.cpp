#include <iostream>
#include <string>
using namespace std;

int main()
int random;
random = rand() % (3+1);
cout << &random << "\n";
return 0;
}
