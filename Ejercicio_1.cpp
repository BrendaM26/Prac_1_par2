#include <iostream>
 using namespace std;

 int mai(){
 int variableLocal = 5;
 int * apLocal = &variableLocal;
 int * apHeap = new int;


 *apHeap = 7;
 cout << "variableLocal: "<< variableLocal<< endl;
 cout << "apLocal: "<< *apLocal<< endl;
 cout << "*apHeap: "<< *apHeap<< endl;
 delete  apHeap;
 apHeap = 9;
 cout << "*apHeap: "<< *apHeap<< endl;
 delete *apHeap;

 return 0;
 }
