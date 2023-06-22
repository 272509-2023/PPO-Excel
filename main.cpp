#include <iostream>
#include<string>
#include "sheet.h"
using namespace std;
int main() {
    string size;
    do{
        cout<<"czy chcesz tabele"<<endl;
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
                int row, column;
                float number_to_set;
                bool type;
                string string_to_set;
                cout << "enter row and column\n";
                cin >> row >> column;
                cout << "enter type of variable\n";
                cin >> type;
                if(type) {
                    cout << "enter float number\n";
                    cin >> number_to_set;
                    exel.setCell(row, column, number_to_set);
                } else {
                    cout << "enter string\n";
                    cin >> string_to_set;
                    exel.setCell(row, column, string_to_set);
                }
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
                int start, end, amongus;
                bool direction;
                cin >> start >> end >> amongus >> direction;
                cout << exel.sumCells(start, end, amongus, direction) << "\n";
                break;
            }
            case 6: {
                int start, end, amongus;
                bool direction;
                cin >> start >> end >> amongus >> direction;
                cout << exel.averageCells(start, end, amongus, direction) << "\n";
                break;
            }
            case 7: {
                exel.loadFromFile("db");
                break;
            }
            case 8: {
                exel.saveToFile("db");
                break;
            }
            case 0: {cont = false; break;}
            default: {cout << "zla operacja"; break;}
        }
    }
    return 0;
}
