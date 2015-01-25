/* 
 * File:   clsReadKBMap.cpp
 * Author: Dan
 * 
 * Created on January 24, 2015, 10:43 AM
 */
#include <fstream>
#include <iostream>
#include <string>
#include "clsReadKBMap.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;


//clsReadKBMap::clsReadKBMap() {
//}
//
//clsReadKBMap::clsReadKBMap(const clsReadKBMap& orig) {
//}
//
//clsReadKBMap::~clsReadKBMap() {
//}

void ParseWSELine(const string& s, char c, vector<string>& v) { 
   string::size_type i = 0; 
   string::size_type j = s.find(c); 
   while (j != string::npos) { 
      v.push_back(s.substr(i, j-i)); 
      i = ++j; 
      j = s.find(c, j); 
      if (j == string::npos) 
         v.push_back(s.substr(i, s.length( ))); 
   } 
} 

    void ReadWSEFile()
    {
	ifstream inputFile;
	//cout << "Filename: " << filename.c_str() << endl;
	//inputFile.open(clsReadKBMap::WSEFileName.c_str());
	
	return;
    }