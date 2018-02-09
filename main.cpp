/*
 * main.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: keith
 *      
 *      look up std::to_string, its a C++11 construct which means you have to compile using that standard
 *      To enable C++11 support for this application. Click on the project name->Properties-> 
                        C/C++ Build->Settings->GCC C++ Compiler-> Dialect ->'Language Standard' dropdown 
                        choose at least ISO C++11(-std=c++0x)
		
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int i=0;
	i++;
//if the following symbol is defined like so
//#define MYSYMBOL
//then the code inside the #ifdef/#endif is compiled into the project
//a better way to define the symbol is make it project wide (Project->Properties-> 
//    C/C++ General->Paths and Symbols  under the symbols tag just add MYSYMBOL
//this makes it project wide (for the other conditionally compiled blocks in your project
//plus if working on a build and dont want to change settings of entire project, then just 
//check in this file, and not the project settings (so if you define the symbol there it will not
//affect the entire project)
	
#ifdef MYSYMBOL
	cout<<"The value of i is"<<std::to_string(i)<<endl;
#endif	
	i++;	
}




