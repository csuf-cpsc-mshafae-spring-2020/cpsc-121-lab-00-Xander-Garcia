// Alexander Garcia
// CPSC 121-02
// alexgarcia98@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if(argc != 3){
    cout << "Not the correct amount of arguments." << endl;
    return 0;
  }
  string word_entered = argv[1];
  string amount_of_copies = argv[2];
  int multiples = stoi(amount_of_copies);
  for(int i=0; i < multiples; i++){
    cout << "Hello " << word_entered << "!" <<endl;
  }
  return 0;
}
