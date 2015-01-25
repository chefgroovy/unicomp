/* 
 * File:   clsReadKBMap.h
 * Author: Dan
 *
 * Created on January 24, 2015, 10:43 AM
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef CLSREADKBMAP_H
#define	CLSREADKBMAP_H



#define UKB_POSITION 0
#define UKB_KEYCODE 1
#define UKB_DESCRIPTION 2


class clsReadKBMap {
      std::string WSEFileName;
public:
    clsReadKBMap();
    clsReadKBMap(const clsReadKBMap& orig);
    virtual ~clsReadKBMap();
    std::string KBDescription;
   
       std::string KeyData[3][4];
    //std::vector<KeyData> KeyboardMap;
    void ParseWSELine( std::string& s, char c, std::vector<std::string> v);
    void ReadWSEFile(std::string filename);
private:
    int NumberOfKeys;

};

#endif	/* CLSREADKBMAP_H */

