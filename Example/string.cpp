#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

/*
string generar_contra () {
    string contra;
    
    string abc = "accdefghijklmnopqrstuvwxyz";
    string Abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string nums = "1234567890";
    string signos = "~$-/[{&#=}]%!";
    string todo_junto = abc.append(nums).append(Abc).append(signos);

    for (int i = 0; i<6; i++) {
      int pos = 1+rand()%(todo_junto.length()-1);
      contra += todo_junto[pos];
    }

    return contra;
  }
*/
int main(){

    //string x = generar_contra();
    string contra;
    string abc = "accdefghijklmnopqrstuvwxyz";
    string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string nums = "1234567890";
    string signos = "~$-/[{&#=}]%!";
    srand(time(NULL));
    string todo_junto = abc.append(nums).append(ABC).append(signos);
    cout<<"todo junt: "<<todo_junto<<endl;
    int x = todo_junto.length();
    cout<<x<<endl;
    int y = 1 + rand()%(x-1);
    cout<<y<<endl;


    
    return 0;
}