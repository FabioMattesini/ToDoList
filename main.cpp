#include <iostream>
#include "Task.h"
#include <iostream>
using namespace std;

int main() {
    int menu=-1;
    Task t;

    while (menu!=0)
    {
        cout << "Digitare uno dei numeri del menù:"<<endl;
        cout << "0) Termina programma" << endl;
        cout << "1) Inserisci una nuova attività"<<endl;
        cout << "2) Visualizza attività" <<endl;
        cin>>menu;

        string text="";
        switch (menu) {
            case 0:
                cout<< "Uscita dal menù"<<endl;
                break;
            case 1:
                cout<<"Scrivi l'attività"<<endl;
                cin>>text;
                t.setToDoText(text);
                cout << "Attività registrata"<<endl;
                break;
            case 2:
                cout << "Visualizzazione attività:"<<endl;
                cout<<t.getToDoText();
                if(t.isCompleted())
                    cout<< " - COMPLETATA" <<endl;
                else
                    cout<< " - NON COMPLETATA" <<endl;
                break;
            default:
                cout<<"Selezione non vallida!"<<endl;
                break;
        }
    }

    cout << "Terminazione programma"<<endl;
}
