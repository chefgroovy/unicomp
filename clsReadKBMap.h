/* 
 * File:   clsReadKBMap.h
 * Author: Dan
 *
 * Created on January 24, 2015, 10:43 AM
 */

#ifndef CLSREADKBMAP_H
#define	CLSREADKBMAP_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class clsReadKBMap {
public:
    clsReadKBMap();
    clsReadKBMap(const clsReadKBMap& orig);
    virtual ~clsReadKBMap();
    std::string KBDescription;
    std::string WSEFileName;
private:
    int NumberOfKeys;

};

#endif	/* CLSREADKBMAP_H */

