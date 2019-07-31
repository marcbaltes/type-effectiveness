# Pokemon Type Effectiveness Display
The Pokemon.csv file contains all pokemon from gen 1 to 7. In that file the name, types, and stats of all pokemon are shown there (for gens 1 - 6. Gen 7 only has the name and types). This program parses that file and displays the weaknesses and resistances of the pokemon that you choose.

### Compiling
In terminal, type: ```g++ main.cc``` followed by ```./a.out Pokemon.csv``` to run the program

### Use
In the program, simply type the pokemon you want to look up and their weaknesses and resistances will be shown. If the type has a * next to it that means it is x4 weak or x0.25 resistant to that type. The program is in a loop so you can keep entering as many pokemon as you'd like. To stop the loop and the program press ```ctrl+c``` and the program will quit.
