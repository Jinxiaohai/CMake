#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char *argv[])
{
  if(argc < 2){
    std::cout << "Usage:" << argv[0] << " number" << std::endl;
    return -1;
  }

  double inputValue = atof(argv[1]);
  double outputValue = pow(inputValue, 2);

  std::cout << "The square of " << inputValue << " is " << outputValue << std::endl;
  return 0;
}
