#include <iostream>
#include "Task.h"
#include "TaskList.h"
#include "TaskDisplayer.h"
using namespace std;
//\b(todo) Creare una classe per gestire liste di liste di attività
int main() {
    int menu=-1;
    TaskList list;
    TaskDisplayer td;

    while (menu!=0)
    {
        cout << "Digitare uno dei numeri del menù:"<<endl;
        cout << "0) Termina programma" << endl;
        cout << "1) Inserisci una nuova attività"<<endl;
        cout << "2) Visualizza tutte le attività" <<endl;
        cout << "3) Rimuovi un attività" <<endl;
        cin>>menu;
        switch (menu) {
            case 0:
                cout << "Uscita dal menù" << endl;
                break;
            case 1:{
                string text = "";
                int day, month, year, hour, minute;
                cout << "Inserisci una descrizione dell'attività:" << endl;
                cin >> text;
                cout << "Inserisci il giorno dell'attività (in numeri):" << endl;
                cin >> day;
                cout << "Inserisci il mese dell'attività (in numeri):" << endl;
                cin >> month;
                cout << "Inserisci l'anno dell'attività:" << endl;
                cin >> year;
                cout << "Inserisci l'ora dell'attività:" << endl;
                cin >> hour;
                cout << "Inserisci il minuto dell'attività" << endl;
                cin >> minute;
                Task t(text, day, month, year, hour, minute);
                td.displayTask(t);
                list.addActivity(t);
                cout << "Attività registrata" << endl;
                break;
        }
            case 2:
                cout<<"Visualizzazione attività:"<<endl;
                td.displayTask(list);
                break;
            case 3:
                cout<<"ELenco attività:"<<endl;
                td.displayTask(list);
                int pos;
                cout<<"Digitare il numero dell'attività da eliminare"<<endl;
                cin>>pos;
                try {
                    list.removeActivity(pos);
                }
                catch (std::out_of_range& e) {
                    cout<< e.what() <<endl;
                }
                break;
            default:
                cout<<"Selezione non valida!"<<endl;
                break;
        }
    }

    cout << "Terminazione programma"<<endl;
}
