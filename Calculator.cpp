#include <iostream>
using namespace std;

int main()
{
  int x,y,sum;
  int c;
  cout<<"Εισαγωγή Πρώτου Αριθμού : " <<endl;
  cin>> x;
  cout<<"Εισαγωγή Δευτέρου Αριθμού : " <<endl;
  cin>> y;
  cout<<"Επιλογές \n "<<endl;
  cout<<"1.Πρόσθεση \n"<<endl;
  cout<<"2.Αφαίρεση \n"<<endl;
  cout<<"3.Πολλαπλασιασμός \n"<<endl; 
  cout<<"4.Διαίρεση \n"<<endl;
  do{
    system("cls");
    cout<<"Εισαγωγή επιλογής : " << endl;
    cin>> c;
  }while(c<=0 || c>=5)
  switch(c)
  {
    case 1:
    sum=x+y;
    cout<<"Το αποτέλεσμα της πρόσθεσης είναι : "<< sum <<endl;
    break;
    case 2:
    sum=x-y;
    cout<<"Το αποτέλεσμα της αφαίρεσης είναι : "<< sum <<endl;
    break;
    case 3:
    sum=x*y;
    cout<<"Το αποτέλεσμα του πολλαπλασιασμού είναι : "<< sum <<endl;
    break;
    case 4:
      if(y!=0)
      {
        sum=x/y;
        cout<<"Το αποτέλεσμα της διαίρεσης είναι : "<< sum <<endl;
      }
      else
      {
        cout<<"Αδύνατο να γινει η διαίρεση με το μηδέν"<<endl;
      }
    break;
  }
  return 0;
}
