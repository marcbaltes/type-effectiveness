#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>  // transform
#include <string>
#include "main.h"
#include <unordered_map>
using namespace std;

int main(int argc, char* argv[]){
  fstream file;
  string filename = argv[1];
  while(true){
    file.open(filename.c_str());
    // get pokemon and convert to lowercase
    cout << "Enter Pokemon: ";
    string pokemon;
    getline(cin, pokemon);
    transform(pokemon.begin(), pokemon.end(), pokemon.begin(), ::tolower);

    //search for pokemon
    bool found = false;
    while(!file.eof() && found == false){
      string buffer;
      getline(file, buffer, ',');
      transform(buffer.begin(), buffer.end(), buffer.begin(), ::tolower);
      if(buffer == pokemon){
        transform(pokemon.begin(), pokemon.end(), pokemon.begin(), ::toupper);
        cout << "================================================================================" << endl;
        cout << "POKEMON:" << "\t" << pokemon << endl;
        found = true;
        string type1, type2;
        getline(file, type1, ',');
        getline(file, type2, ',');
        transform(type1.begin(), type1.end(), type1.begin(), ::toupper);
        transform(type2.begin(), type2.end(), type2.begin(), ::toupper);
        if(type2 != ""){
          cout << "TYPE:" << "\t\t[" << type1 << "] [" << type2 << "]" << endl;
        }
        else{
          cout << "TYPE:" << "\t\t[" << type1 << "]" << endl;
        }
        unordered_map<string, double> weak = get_weaknesses(type1, type2);
        unordered_map<string, double> res = get_resistances(type1, type2);
        unordered_map<string, double> imm = get_immunities(type1, type2);

        //get duplicates
        unordered_map<string, double>::iterator it = weak.begin();
        for(it; it != weak.end(); it++){
          string type = it -> first;
          unordered_map<string, double>::iterator it2 = res.begin();
          for(it2; it2 != res.end(); it2++){
            if(it2 -> first == type){
              it -> second /= 2;
              it2 -> second *= 2;
            }
          }
        }
        //get immunities
        it = imm.begin();
        for(it; it != imm.end(); it++){
          string type = it -> first;
          unordered_map<string, double>::iterator it2 = weak.begin();
          for(it2; it2 != weak.end(); it2++){
            if(it2 -> first == type){
              it2 -> second = 1;
            }
          }
          it2 = res.begin();
          for(it2; it2 != res.end(); it2++){
            if(it2 -> first == type){
              it2 -> second = 1;
            }
          }
        }
        cout << "WEAKNESSES:\t";
        it = weak.begin();
        for(it; it != weak.end(); it++){
          if(it -> second != 1.0){
            if(it -> second > 2.0){
              cout << "[" << it -> first << "]*" << " ";
            }
            else{
              cout << "[" << it -> first << "]" << " ";
            }
          }
        }
        cout << endl;
        cout << "RESISTANCES:\t";
        it = res.begin();
        for(it; it != res.end(); it++){
          if(it -> second != 1.0){
            if(it -> second < 0.5){
              cout << "[" << it -> first << "]*" << " ";
            }
            else{
              cout << "[" << it -> first << "]" << " ";
            }
          }
        }
        cout << endl;
        cout << "IMMUNITIES:\t";
        it = imm.begin();
        for(it; it != imm.end(); it++){
          cout << "[" << it -> first << "]" << " ";
        }
        cout << endl;
        cout << "================================================================================" << endl;
      }
    }
    file.close();
  }
  return 0;
}
