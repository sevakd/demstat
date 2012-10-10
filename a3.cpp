#include "a3.h"

void esriParse::loadFile(string fname){
  string line; //from file
  int rowCol[2]; //gridsize(testing)
  int rc = 0; //iter for height/width:rowCol
  int elcount = 0; //number of elements found
  string elmnt; //elmnt to be inserted
  string onw; //elmnt alt(testing)
  int lcount = 0; //limit line output
  ifstream file (fname.c_str());
  
  if (file.is_open())
  {
    while ( file.good()) //read line from file if state is good
    {
      getline(file, line);
      if (line == "") continue;

      if (lcount < 2){ //grab meta data
        onw = line.substr(line.find_first_of(' ')+1);
        rowCol[rc]=atoi(onw.c_str());
        ++rc;
      }
      else if (lcount > 4){ //in the matrix
        int current = 0;
        int ind = 0;
        int prev = 0;

        while(ind!=line.size()-1){ //populate data vector
          ind = line.find_first_of(' ', prev);

          elmnt = line.substr(prev, ind-prev);

          data.push_back(atof(elmnt.c_str()));
          ++elcount;

          prev=ind+1;
        }
      }
      ++lcount;

    }
    file.close();

    cout << rowCol[0]*rowCol[1] << endl;
    cout << elcount << endl;
  }

  else cout << "Can't open file" << endl;

  numDatPoints = rowCol[0] * rowCol[1];
  //cout << numDatPoints << endl;
  //cout << data[38] << endl;
}

void esriParse::printTable(){
  cout << "---------------|---" << endl;
  cout << "num of data pts" << "|" << endl;
  cout << numDatPoints << endl;
}