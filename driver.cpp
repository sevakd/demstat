#include "a3.h"

int main()
{
  esriParse demo;
  string name;

  cout << "Enter a filename: ";
  cin >> name;

  demo.loadFile(name);
  //demo.printTable();

  return 0;
}