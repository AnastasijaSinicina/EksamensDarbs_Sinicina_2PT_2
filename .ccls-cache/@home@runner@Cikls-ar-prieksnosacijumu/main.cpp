#include <iostream>
int main() {
using namespace std;
  
  cout<<"Sveiki! Tev ir iespēja pārbaudīt savas zināšanas par tēmu \"Cikls ar prieksnosacījumu\"\n";
  cout<<"Uz katru jautājumu ir 2 vai 3 pareizas atbildes. Pie katra jautājuma iekavās pierakstīts pareizo atbilžu skaits. Atbildes raksti ar lielajiem burtiem, alfabetu secībā un ar komatiem(bez atstarpem)\nPiemēram: A,B,D\n\n";
  
  string jautajumi[10]; //masīvs ar jautājumiem
  string atbilzuVar[10]; //masīvs ar atbilžu variantiem
  string pareizAtbildes[10]; //masīvs ar pareizajām atbildēm
  string atb[10]; //masīvs, kurā glābājās lietotāja atbildes
  string nepareiziJautajumi[10]; //masīvs, kurā tiek ievietoti jautājumi, uz kuriem lietotajs atbildējis nepareizi
  string nepareiziAtbildes[10]; //masīvs, kurā tiek ievietotās pareizas atbildes uz jautājumiem, kur lietotājs pieļaujis kļūdu
  int punkti = 0; //punktu skaits

  jautajumi [0] = "1. Kā saucās cikls kura pieraksts ir šāds?(2)\n"
    "\twhile(<nosacījums>){\n"
    "\tizpildāmie operatori; }\n";
  jautajumi[1] = "2. Kuri apgalvojumi apraksta while ciklu?(3)";
  jautajumi[2] = "3. Kāda ir \"while\" cikla sintakse?(2)";
  jautajumi[3] = "4. Kuri cikli darbosies bezgalīgi daudz?(2)";
  jautajumi[4] = "5. Vai \"while\" ciklā var atrasties citi cikli?(2)";
  jautajumi[5] = "6. Kādas ir \"while\" cikla iespējamās problēmas?(2)";
  jautajumi[6] = "7. Kā var pārtraukt while cikla izpildi agrāk nekā nosacījums kļūst nepatiess?(2)";
  jautajumi[7] = "8. Kā palielināt mainīgā vērtību \"while\" ciklā?(3)";
  jautajumi[8] = "9. Kuri cikli neizpīldīsies?(2)";
  jautajumi[9] = "10. Kuri cikli darbosies 4 reizes?(2)";
    


  atbilzuVar[0] = "\tA. Cikls ar pēcnosacījumu\n"
    "\tB. Cikls ar priekšnosacījumu\n"
    "\tC. While\n\tD. Do...while\n";
  atbilzuVar[1] = "\tA.\tVispirms pārbaudi, pēc tam dari.\n"
    "\tB.\tKonstrukcija ar nosacījumu cikla sākumā.\n"
    "\tC.\tKonstrukcija ar nosacījumu cikla beigās.\n"
    "\tD.\tJa nosacījums nepatiess, neviena darbība netiek pildīta.\n";
  atbilzuVar[2] = "\tA.\t{ izpildāmie_operatori; } while (izteiksme)\n"
"\tB.\tizpildāmie_operatori; while (izteiksme)\n"
"\tC.\twhile (izteiksme) { izpildāmie_operatori; }\n"
"\tD.\twhile (izteiksme)  izpildāmie_operatori;\n";
  atbilzuVar[3] = "\tA.\tint a = 0;\n\t\twhile(a < 5){\n\t\tcout<<a; }\n\n"
"\tB.\tint i = 2;\n\t\twhile(i<10){\n\t\tcout<<i<<\" * \"<<i<<\" = \"<<i*i;}\n\n"
 "\tC. int i = 2;\n\t\twhile(i<10){\n\t\tcout<<i<<\" * \"<<i<<\" = \"<<i*i;\n\t\ti++;}\n\n\tD.\tVisi";
  atbilzuVar[4] = "\tA.\tJā\n\tB.\tNē\n\tC.\tJā, bet obligāti jālieto figuriekavas\n\tD.\tTikai if..else\n";
  atbilzuVar[5] = "\tA.\tCikls var radīt neparedzētas kļūdas, ja nosacījums ir sarežģīts loģiskais izteiksmes.\n"
"\tB.\tCikls var nekad neizpildīties, ja nosacījums vienmēr ir nepatiess.\n"
"\tC.\tCikls var izraisīt pārmērīgu resursu patēriņu, ja izpildāmie operatori ir laikietilpīgi.\n"
"\tD.\tCikls var izpildīties bezgalīgi, ja nosacījums nekad nav patiess.\n";
  atbilzuVar[6] =  "\tA.\tIzmantojot \"break\" komandu.\n"
"\tB.\tIzmantojot \"continue\" komandu.\n"
"\tC.\tIzmantojot \"return\" komandu.\n"
"\tD.\tVisi varianti ir pareizi.\n";
  atbilzuVar[7] = "\tA.\tmainigais++;\n"
"\tB.\tmainigais += 1;\n"
"\tC.\tmainigais = mainigais + 1;\n"
"\tD.\tmainigas=mainigais\n";
  atbilzuVar[8] = "\tA.\tint x = 0;\n\t\twhile (x > 10) {\n\t\tcout<<x;}\n\n"
    "\tB.\tint x = 10;\n\t\twhile(x < 0) {\n\t\tcout<<x;\n\t\tx++;}\n\n"
    "\tC.\tint a = 0;\n\t\twhile(a < 5){\n\t\tcout<<a; }\n\n"
    "\tD.\tint i = 2;\n\t\twhile(i<10){\n\t\tcout<<i<<\" * \"<<i<<\" = \"<<i*i;}\n"
    ;
  atbilzuVar[9] = "\tA.\tint a = 0;\n\t\twhile (a > 10) {\n\t\tcout<<a;}\n\n"
     "\tB.\tint b = 0;\n\t\twhile(b < 5){\n\t\tcout<<b; }\n\n"
    "\tC.\tint c = 4;\n\t\twhile(c<10){\n\t\tcout<<c<<\" \"\n\t\tc+=2;}\n\n"
    "\tD.\tint d = 0;\n\t\twhile(d<4){\n\t\tcout<<d<<\" \"\n\t\td++;}";

  pareizAtbildes[0] = "B,C";
  pareizAtbildes[1] = "A,B,D";
  pareizAtbildes[2] = "C,D";
  pareizAtbildes[3] = "A,B";
  pareizAtbildes[4] = "A,C";
  pareizAtbildes[5] = "B,D";
  pareizAtbildes[6] = "A,B";
  pareizAtbildes[7] = "A,B,C";
  pareizAtbildes[8] = "A,B";
  pareizAtbildes[9] = "C,D";

  for(int i=0; i<10; i++){
    cout<<jautajumi[i]<<"\n";
    cout<<atbilzuVar[i]<<"\n";
    cin>>atb[i];
      
      if((atb[i].find('A') == string::npos && atb[i].find('B') == string::npos && atb[i].find('C') == string::npos&& atb[i].find('D') == string::npos)){
      cout<<"Kļūda. Nav atrasts nevien attiecīgais burts\n";
      } ///Pārbauda, lai lietotāja atbildē būtu vismaz 1 burts (A,B,C vai D). npos (no-position) - nozīmē, ka meklētais elements nav atrasts. Paziņojums ja neviens burts nav atrasts.
      
    if(atb[i]==pareizAtbildes[i]){
      cout<<"PAREIZI!\n\n";
      punkti++;
    }else{
      cout<<"NEPAREIZI!\n\n";
    nepareiziJautajumi[i] = jautajumi[i]; //ja atbilde ir nepareiza, tad šīs jautājums tiek ievietots jaunajā masīva
      nepareiziAtbildes[i] = pareizAtbildes[i]; //ja atbilde ir nepareiza, tad pareizās atbildes attiecīgam jautājumam tiek ievietotas jaunajā masīvā      
    }
  }
  cout<<"---------------------------------\n";
  cout<<"Pareizo atbilžu skaits: "<<punkti<<"\n";
  if(punkti==10){
    cout<<"Visas atbildes ir pareizas!";
  }else{
  cout<<"Nepareizo jautājumu sarakts: \n\n";
  for(int i=0; i<10; i++){
    if (!nepareiziJautajumi[i].empty() && !nepareiziAtbildes[i].empty()) { //Tajā vieta kur atrodas parezi atbildēts jautājums, netiek izvadīts tukšums
    cout<<nepareiziJautajumi[i]<<"\n";
    cout<<"Pareizas atbildes: "<<nepareiziAtbildes[i]<<"\n\n";
     }
    }
   }
  }
