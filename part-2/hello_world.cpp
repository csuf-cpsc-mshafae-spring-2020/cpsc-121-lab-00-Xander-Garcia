// Alexander Garcia
// CPSC 121-02
// alexgarcia98@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  string word_entered = argv[1];
  string amount_of_copies = argv[2];
  int multiples = stoi(amount_of_copies);


  if(argc > 4){
    cout << "Too few arguments." << endl;
    return 1;
  }


  do{

    cout << "Hello " << word_entered << endl;

  } while (multiples > multiples+1);


  //Program he wrote on the white borad
  // int main (int argc, char*argv[])
  // cout << argc is << argc << endl;
  // for( int i =0; i < argc; i++){
    //cout << "i = " << i << " : " << arv[i] << endl;
//}
//return 0;
//arg_demo.cpp
//clang++ -----
//./arg_dmeo A cat dog D



  return 0;
}
