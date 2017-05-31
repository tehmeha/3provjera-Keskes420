#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int brojArtikla = 0;
    int izbor;
    int MAX = 50;
    string artikli[MAX];
    unsigned long long int barkod[MAX];
     unsigned long long barkod_pretraga;
    float cijena [MAX];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;

    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos novog artikla" << endl;
        cout << "2. Ispisi sve podatke" << endl;
        cout << "3. Pretraga prema bar kodu artikla" << endl;
        cout << "4. Pretraga prema nazivu artikla" << endl;
        cout << "5. Izmjena podataka prema bar kodu" << endl;
        cout << "6. Ispisi sortirano prema nazivu artikla" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
            cout << "unesite bar kod artikla: ";
            cin >> barkod [brojArtikla];
            cout << "Unesite naziv artikla: ";
            cin.ignore();
            getline (cin, artikli[brojArtikla]);
            cout << "Unesite cijenu artikla: ";
            cin >> cijena [brojArtikla];
            brojArtikla++;
        }
        else if( izbor == 2 )
        {
            cout << "bar kod: "<< "\t" << "naziv artikla; "  << "\t" << "cijena"  << endl;
            for( int i = 0; i < brojArtikla; i++ )
            {
                cout << artikli[i] <<  "\t";
                cout << barkod[i] << "\t";
                cout << cijena[i] << endl << endl;
            }
        }
        else if( izbor == 3 )
        {
            cout << " upisite barkod; ";
            cin >> barkod_pretraga;
            bool pronadjen = false;
            for(int i = 0; i< brojArtikla; i++)
            {
                if(barkod_pretraga == barkod[i])
                {
                    cout << artikli[i] <<  "\t";
                cout << barkod[i] << "\t";
                cout << cijena[i] << endl;
                    pronadjen=true;
                    break;

                }
                if(pronadjen == false)
                {
                    cout << "unijeli ste krivi barkod:";
                }
            }
        }
        else if( izbor == 4 )
        {

        }
        else if( izbor == 5 )
        {
        }
        else if( izbor == 6 )
        {
        }
        else if( izbor == 7 )
        {
            cout << "Kraj rada" << endl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
        cout << endl;
    }
}
