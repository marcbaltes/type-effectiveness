#include <unordered_map>
using namespace std;

unordered_map<string, double> get_weaknesses(string type1, string type2){
  unordered_map<string, double> map;
  //check type1
  if(type1 == "NORMAL"){
    map.insert(make_pair("FIGHTING", 2));
  }
  else if(type1 == "FIRE"){
    map.insert(make_pair("GROUND", 2));
    map.insert(make_pair("ROCK", 2));
    map.insert(make_pair("WATER", 2));
  }
  else if(type1 == "FIGHTING"){
    map.insert(make_pair("FLYING", 2));
  }
  else if(type1 == "FLYING"){
    map.insert(make_pair("ROCK", 2));
    map.insert(make_pair("ELECTRIC", 2));
    map.insert(make_pair("ICE", 2));
  }
  else if(type1 == "POISON"){
    map.insert(make_pair("GROUND", 2));
    map.insert(make_pair("PSYCHIC", 2));
  }
  else if(type1 == "GROUND"){
    map.insert(make_pair("WATER", 2));
    map.insert(make_pair("GRASS", 2));
    map.insert(make_pair("ICE", 2));
  }
  else if(type1 == "ROCK"){
    map.insert(make_pair("FIGHTING", 2));
    map.insert(make_pair("GROUND", 2));
    map.insert(make_pair("STEEL", 2));
    map.insert(make_pair("WATER", 2));
    map.insert(make_pair("GRASS", 2));
  }
  else if(type1 == "BUG"){
    map.insert(make_pair("FLYING", 2));
    map.insert(make_pair("ROCK", 2));
    map.insert(make_pair("FIRE", 2));
  }
  else if(type1 == "GHOST"){
    map.insert(make_pair("GHOST", 2));
    map.insert(make_pair("DARK", 2));
  }
  else if(type1 == "STEEL"){
    map.insert(make_pair("FIGHTING", 2));
    map.insert(make_pair("GROUND", 2));
    map.insert(make_pair("FIRE", 2));
  }
  else if(type1 == "WATER"){
    map.insert(make_pair("GRASS", 2));
    map.insert(make_pair("ELECTRIC", 2));
  }
  else if(type1 == "GRASS"){
    map.insert(make_pair("FLYING", 2));
    map.insert(make_pair("POISON", 2));
    map.insert(make_pair("BUG", 2));
    map.insert(make_pair("FIRE", 2));
    map.insert(make_pair("ICE", 2));
  }
  else if(type1 == "ELECTRIC"){
    map.insert(make_pair("GROUND", 2));
  }
  else if(type1 == "PSYCHIC"){
    map.insert(make_pair("BUG", 2));
    map.insert(make_pair("GHOST", 2));
    map.insert(make_pair("DARK", 2));
  }
  else if(type1 == "ICE"){
    map.insert(make_pair("FIGHTING", 2));
    map.insert(make_pair("ROCK", 2));
    map.insert(make_pair("STEEL", 2));
    map.insert(make_pair("FIRE", 2));
  }
  else if(type1 == "DRAGON"){
    map.insert(make_pair("ICE", 2));
    map.insert(make_pair("DRAGON", 2));
    map.insert(make_pair("FAIRY", 2));
  }
  else if(type1 == "DARK"){
    map.insert(make_pair("FIGHTING", 2));
    map.insert(make_pair("BUG", 2));
    map.insert(make_pair("FAIRY", 2));
  }
  else if(type1 == "FAIRY"){
    map.insert(make_pair("POISON", 2));
    map.insert(make_pair("STEEL", 2));
  }

  if(type2 != ""){
    unordered_map<string, double>::iterator it;
    if(type2 == "NORMAL"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 2));
      }
    }
    else if(type2 == "FIGHTING"){
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FLYING", 2));
      }
      it = map.find("PSYCHIC");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("PSYCHIC", 2));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FAIRY", 2));
      }
    }
    else if(type2 == "FLYING"){
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ROCK", 2));
      }
      it = map.find("ELECTRIC");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ELECTRIC", 2));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ICE", 2));
      }
    }
    else if(type2 == "POISON"){
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GROUND", 2));
      }
      it = map.find("PSYCHIC");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("PSYCHIC", 2));
      }
    }
    else if(type2 == "GROUND"){
      it = map.find("WATER");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("WATER", 2));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GRASS", 2));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ICE", 2));
      }
    }
    else if(type2 == "ROCK"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 2));
      }
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GROUND", 2));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("STEEL", 2));
      }
      it = map.find("WATER");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("WATER", 2));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GRASS", 2));
      }
    }
    else if(type2 == "BUG"){
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FLYING", 2));
      }
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ROCK", 2));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIRE", 2));
      }
    }
    else if(type2 == "GHOST"){
      it = map.find("GHOST");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GHOST", 2));
      }
      it = map.find("DARK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("DARK", 2));
      }
    }
    else if(type2 == "STEEL"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 2));
      }
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GROUND", 2));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIRE", 2));
      }
    }
    else if(type2 == "FIRE"){
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GROUND", 2));
      }
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ROCK", 2));
      }
      it = map.find("WATER");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("WATER", 2));
      }
    }
    else if(type2 == "WATER"){
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GRASS", 2));
      }
      it = map.find("ELECTRIC");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ELECTRIC", 2));
      }
    }
    else if(type2 == "GRASS"){
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FLYING", 2));
      }
      it = map.find("POISON");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("POISON", 2));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("BUG", 2));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIRE", 2));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ICE", 2));
      }
    }
    else if(type2 == "ELECTRIC"){
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GROUND", 2));
      }
    }
    else if(type2 == "PSYCHIC"){
      it = map.find("BUG");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("BUG", 2));
      }
      it = map.find("DARK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("DARK", 2));
      }
      it = map.find("GHOST");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("GHOST", 2));
      }
    }
    else if(type2 == "ICE"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 2));
      }
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ROCK", 2));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("STEEL", 2));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIRE", 2));
      }
    }
    else if(type2 == "DRAGON"){
      it = map.find("ICE");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("ICE", 2));
      }
      it = map.find("DRAGON");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("DRAGON", 2));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FAIRY", 2));
      }
    }
    else if(type2 == "DARK"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 2));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("BUG", 2));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("FAIRY", 2));
      }
    }
    else if(type2 == "FAIRY"){
      it = map.find("POISON");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("POISON", 2));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second += 2;
      }
      else{
          map.insert(make_pair("STEEL", 2));
      }
    }
  }
  return map;
}

unordered_map<string, double> get_resistances(string type1, string type2){
  unordered_map<string, double> map;
  //check type1
  if(type1 == "FIGHTING"){
    map.insert(make_pair("ROCK", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("DARK", 0.5));
  }
  else if(type1 == "FLYING"){
    map.insert(make_pair("FIGHTING", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("GRASS", 0.5));
  }
  else if(type1 == "POISON"){
    map.insert(make_pair("FIGHTING", 0.5));
    map.insert(make_pair("POISON", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("GRASS", 0.5));
    map.insert(make_pair("FAIRY", 0.5));
  }
  else if(type1 == "GROUND"){
    map.insert(make_pair("POISON", 0.5));
    map.insert(make_pair("ROCK", 0.5));
  }
  else if(type1 == "ROCK"){
    map.insert(make_pair("NORMAL", 0.5));
    map.insert(make_pair("FLYING", 0.5));
    map.insert(make_pair("POISON", 0.5));
    map.insert(make_pair("FIRE", 0.5));
  }
  else if(type1 == "BUG"){
    map.insert(make_pair("FIGHTING", 0.5));
    map.insert(make_pair("GROUND", 0.5));
    map.insert(make_pair("GRASS", 0.5));
  }
  else if(type1 == "GHOST"){
    map.insert(make_pair("POISON", 0.5));
    map.insert(make_pair("BUG", 0.5));
  }
  else if(type1 == "STEEL"){
    map.insert(make_pair("NORMAL", 0.5));
    map.insert(make_pair("FLYING", 0.5));
    map.insert(make_pair("ROCK", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("STEEL", 0.5));
    map.insert(make_pair("GRASS", 0.5));
    map.insert(make_pair("PSYCHIC", 0.5));
    map.insert(make_pair("ICE", 0.5));
    map.insert(make_pair("DRAGON", 0.5));
    map.insert(make_pair("FAIRY", 0.5));
  }
  else if(type1 == "WATER"){
    map.insert(make_pair("STEEL", 0.5));
    map.insert(make_pair("FIRE", 0.5));
    map.insert(make_pair("WATER", 0.5));
    map.insert(make_pair("ICE", 0.5));
  }
  else if(type1 == "FIRE"){
    map.insert(make_pair("FIRE", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("ICE", 0.5));
    map.insert(make_pair("GRASS", 0.5));
    map.insert(make_pair("FAIRY", 0.5));
    map.insert(make_pair("STEEL", 0.5));
  }
  else if(type1 == "GRASS"){
    map.insert(make_pair("GROUND", 0.5));
    map.insert(make_pair("WATER", 0.5));
    map.insert(make_pair("GRASS", 0.5));
    map.insert(make_pair("ELECTRIC", 0.5));
  }
  else if(type1 == "ELECTRIC"){
    map.insert(make_pair("FLYING", 0.5));
    map.insert(make_pair("STEEL", 0.5));
    map.insert(make_pair("ELECTRIC", 0.5));
  }
  else if(type1 == "PSYCHIC"){
    map.insert(make_pair("FIGHTING", 0.5));
    map.insert(make_pair("PSYCHIC", 0.5));
  }
  else if(type1 == "ICE"){
    map.insert(make_pair("ICE", 0.5));
  }
  else if(type1 == "DRAGON"){
    map.insert(make_pair("FIRE", 0.5));
    map.insert(make_pair("GRASS", 0.5));
    map.insert(make_pair("WATER", 0.5));
    map.insert(make_pair("ELECTRIC", 0.5));
  }
  else if(type1 == "DARK"){
    map.insert(make_pair("GHOST", 0.5));
    map.insert(make_pair("DARK", 0.5));
  }
  else if(type1 == "FAIRY"){
    map.insert(make_pair("FIGHTING", 0.5));
    map.insert(make_pair("BUG", 0.5));
    map.insert(make_pair("DARK", 0.5));
  }

  if(type2 != ""){
    unordered_map<string, double>::iterator it;
    if(type2 == "FIGHTING"){
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ROCK", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("DARK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("DARK", 0.5));
      }
    }
    else if(type2 == "FLYING"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
    }
    else if(type2 == "POISON"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 0.5));
      }
      it = map.find("POISON");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("POISON", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FAIRY", 0.5));
      }
    }
    else if(type2 == "GROUND"){
      it = map.find("POISON");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("POISON", 0.5));
      }
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ROCK", 0.5));
      }
    }
    else if(type2 == "ROCK"){
      it = map.find("NORMAL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("NORMAL", 0.5));
      }
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FLYING", 0.5));
      }
      it = map.find("POISON");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("POISON", 0.5));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIRE", 0.5));
      }
    }
    else if(type2 == "BUG"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 0.5));
      }
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GROUND", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
    }
    else if(type2 == "GHOST"){
      it = map.find("POISON");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("POISON", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
    }
    else if(type2 == "STEEL"){
      it = map.find("NORMAL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("NORMAL", 0.5));
      }
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FLYING", 0.5));
      }
      it = map.find("ROCK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ROCK", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("STEEL", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
      it = map.find("PSYCHIC");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("PSYCHIC", 0.5));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ICE", 0.5));
      }
      it = map.find("DRAGON");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("DRAGON", 0.5));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FAIRY", 0.5));
      }
    }
    else if(type2 == "FIRE"){
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("STEEL", 0.5));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIRE", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ICE", 0.5));
      }
      it = map.find("FAIRY");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FAIRY", 0.5));
      }
    }
    else if(type2 == "WATER"){
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("STEEL", 0.5));
      }
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIRE", 0.5));
      }
      it = map.find("WATER");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("WATER", 0.5));
      }
      it = map.find("ICE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ICE", 0.5));
      }
    }
    else if(type2 == "GRASS"){
      it = map.find("GROUND");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GROUND", 0.5));
      }
      it = map.find("WATER");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("WATER", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
      it = map.find("ELECTRIC");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ELECTRIC", 0.5));
      }
    }
    else if(type2 == "ELECTRIC"){
      it = map.find("FLYING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FLYING", 0.5));
      }
      it = map.find("STEEL");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("STEEL", 0.5));
      }
      it = map.find("ELECTRIC");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ELECTRIC", 0.5));
      }
    }
    else if(type2 == "PSYCHIC"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 0.5));
      }
      it = map.find("PSYCHIC");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("PSYCHIC", 0.5));
      }
    }
    else if(type2 == "ICE"){
      it = map.find("ICE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ICE", 0.5));
      }
    }
    else if(type2 == "DRAGON"){
      it = map.find("FIRE");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIRE", 0.5));
      }
      it = map.find("WATER");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("WATER", 0.5));
      }
      it = map.find("GRASS");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GRASS", 0.5));
      }
      it = map.find("ELECTRIC");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("ELECTRIC", 0.5));
      }
    }
    else if(type2 == "DARK"){
      it = map.find("GHOST");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("GHOST", 0.5));
      }
      it = map.find("DARK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("DARK", 0.5));
      }
    }
    else if(type2 == "FAIRY"){
      it = map.find("FIGHTING");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("FIGHTING", 0.5));
      }
      it = map.find("BUG");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("BUG", 0.5));
      }
      it = map.find("DARK");
      if(it != map.end()){
        it -> second /= 2;
      }
      else{
          map.insert(make_pair("DARK", 0.5));
      }
    }
  }
  return map;
}

unordered_map<string, double> get_immunities(string type1, string type2){
  unordered_map<string, double> map;
  if(type1 == "NORMAL" || type2 == "NORMAL"){
    map.insert(make_pair("GHOST", 0));
  }
  else if(type1 == "GHOST" || type2 == "GHOST"){
    map.insert(make_pair("NORMAL", 0));
    map.insert(make_pair("FIGHTING", 0));
  }
  else if(type1 == "FLYING" || type2 == "FLYING"){
    map.insert(make_pair("GROUND", 0));
  }
  else if(type1 == "GROUND" || type2 == "GROUND"){
    map.insert(make_pair("ELECTRIC", 0));
  }
  else if(type1 == "STEEL" || type2 == "STEEL"){
    map.insert(make_pair("POISON", 0));
  }
  else if(type1 == "DARK" || type2 == "DARK"){
    map.insert(make_pair("PSYCHIC", 0));
  }
  else if(type1 == "FAIRY" || type2 == "FAIRY"){
    map.insert(make_pair("DRAGON", 0));
  }
  return map;
}
