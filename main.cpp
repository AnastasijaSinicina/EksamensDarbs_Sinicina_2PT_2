#include <iostream>
int main() {
using namespace std;
  string jautajumi[10]; //masīvs ar jautājumiem
  string atbilzuVar[10]; //masīvs ar atbilžu variantiem
  string pareizAtbildes[10]; //masīvas ar pareizajām atbildēm

  jautajumi [1] = "1. Kā saucās cikls kura pieraksts ir šāds?\n"
    "    while(<nosacījums>){"
    "    izpildāmie operatori; }\n";
  jautajumi[2] = "2. Kuri apgalvojumi apraksta while ciklu?";



  atbilzuVar[1] = "\tA. Cikls ar pēcnosacījumu\n"
    "\tB. Cikls ar priekšnosacījumu\n"
    "\tC. While\n\tD. Do...while\n";
  atbilzuVar[2] = "\tA. Vispirms pārbaudi, pēc tam dari.\n"
    "\tB. Konstrukcija ar nosacījumu cikla sākumā.\n"
    "\tC. Konstrukcija ar nosacījumu cikla beigās.\n"
    "\tD. Ja nosacījums nepatiess, neviena darbība netiek pildīta.\n";

  pareizAtbildes[1] = "A,C";
  pareizAtbildes[2] = "A,B,D";

  for(int i=1; i<10; i++){
    cout<<jautajumi[i]<<"\n";
    cout<<atbilzuVar[i]<<"\n";
  }
  
}