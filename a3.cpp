#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class esriParse
{
public:
  esriParse(){}; //constructor
  void loadFile(string); //loads esri file
};

void esriParse::loadFile(string fname){
  string line;
  int lcount = 0; //limit line output
  ifstream file (fname.c_str());
  
  if (file.is_open())
  {
    while ( file.good() && lcount<4) //read line from file if state is good
    {
      getline(file, line);
      if(line == "") continue;
      cout << line << endl;
      lcount++;
    }
    cout << "meow";
    file.close();
  }

  else cout << "Can't open file" << endl;
}

int main()
{
  esriParse demo;
  string name;

  cout << "Enter a filename: ";
  cin >> name;

  demo.loadFile(name);

  return 0;
}
