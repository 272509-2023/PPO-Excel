#include <iostream>
#include<string>
#include "sheet.h"
using namespace std;
int main() {
    string size;
    do{
        cout<<"Podaj rozmiar tabeli"<<endl;
        cin>>size;
    }while(size!="tak" && size!="nie");
    int row=1, column=5;
    if(size=="tak"){
    do{
        cout<<"ile wierszy ma mieć tabela"<<endl;
        cin>>row;
    }while(row < 0);
    do{
        cout<<"ile kolumn"<<endl;
        cin>>column;
    }while(column < 0);

    }
    sheet exel(row,column);
    cout<<"oto twoja tabela:"<<endl;
    exel.printSheet();
    bool cont = true;
    while(cont){
        int operation=0;
        cout<<"1.dodaj do tabeli"<<endl;
        cout<<"2.Dodaj Kolumne"<<endl;
        cout<<"3.Dodaj wiersze "<<endl;
        cout<<"4.wyświetl tabele"<<endl;
        cout<<"5.suma"<<endl;
        cout<<"6.średnia"<<endl;
        cout<<"7.wczytaj z dysku"<<endl;
        cout<<"8.zapisz na dysku"<<endl;
        cout<<"0.zakończ program"<<endl;
        cout << "co chcesz wykonać" << endl;
        cin >> operation;
        switch (operation) {
            case 1: {
                int row, column, number_to_set;
                cout << "user stuff"; // ewentualnie dodaj tego if-a
                cin >> row >> column >> number_to_set;
                exel.setCell(row, column, number_to_set);
                break;
            }
            case 2: {
                exel.resizeColumn();
                break;
            }
            case 3: {
                exel.resizeRow();
                break;
            }
            case 4: {
                exel.printSheet();
            break;
            }
            case 5: {
                int startv, endv, amongus;
                bool direction;
                exel.sumCells(startv, endv, amongus, direction);
                break;
            }
            case 6: {
                int startv, endv, amongus;
                bool direction;
                exel.averageCells(startv, endv, amongus, direction);
                break;
            }
            case 0: {cont = false;}
            default: {cout << "zla operacja"; break;}
        }
    }
    return 0;
}
