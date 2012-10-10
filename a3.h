#ifndef __A3_H_INCLUDED__
#define __A3_H_INCLUDED__

/* Sevak Deirmendjian
 * 10/11/12
 *
 * desription
 *
 * Input:
 * Output:
 */

//dependencies
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <ctype.h>

using namespace std;

class esriParse
{
  vector <float> data;
public:
  int numDatPoints;
  esriParse(){}; //constructor
  void loadFile(string); //loads esri file
  void printTable();
};

#endif // __A3_H_INCLUDED__