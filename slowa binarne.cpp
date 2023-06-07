#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik, plik1, plik2, plik3;
    string slowo, bloki, naj, co;
    int ile =0, ile0 =0, zmiana =0, ileblokow =0;
    plik.open("slowa.txt");
    plik1.open("slowa.txt");
    plik2.open("slowa.txt");
    plik3.open("slowa.txt");
    for(int i =0; i<1000; i++)
    {
        plik>>slowo;
        ile0 =0;
        for(int j =0; j<slowo.length(); j++)
        {
            if(slowo[j]=='0')
            {
                ile0++;
            }
        }
        if(ile0>slowo.length()-ile0)
        {
            ile++;
        }
    }
    cout <<"4.1 "<< ile << endl;
    for(int u =0; u<1000; u++)
    {
        plik1>>bloki;
        zmiana =0;
        for(int c =0; c<bloki.length()-1; c++)
        {
            if(bloki[c]!= bloki[c+1])
            {
                zmiana++;
            }
        }
        if(zmiana==1&&bloki[0]=='0')
        {
            ileblokow++;
            //cout << bloki << endl;
        }
    }
    cout << "4.2 "<< ileblokow<< endl;
    int dlugosc =1, maxi =0, jak = 1, tak =0;
    for(int y =0; y<1000; y++)
    {
        plik2>>naj;
        dlugosc = 1;
        for(int c =0; c<naj.length()-1; c++)
        {
            if(naj[c]==naj[c+1]&&naj[c]=='0')
            {
                dlugosc++;
                if(dlugosc>maxi)
                {
                    maxi = dlugosc;

                }
            }
            else
            {
                dlugosc =1;
            }

        }
    }
    cout <<"4.3 " << maxi<< " ";
    for(int x =0; x<1000; x++)
    {
        plik3>>co;
        jak = 1;
        tak =0;
        for(int z =0; z<co.length()-1; z++)
        {
            if(co[z]==co[z+1]&&co[z]=='0')
            {
                jak++;
                if(jak==maxi)
                {
                  tak++;
                }
            }
            else
            {
                jak =1;
            }
        }
    if(tak == 1 )
    {
        cout << co << " ";
    }
    }
}
