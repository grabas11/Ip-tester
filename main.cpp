#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout<<"Konsola sieciowa"<<endl;
    string polecenie;
    while(polecenie!="end")
    {

        cin>>polecenie;
        if(polecenie=="maszyna")
            {
                system("ipconfig /all");
                int r;
                cin>>r;
                for(int i=0; i<r; i++)
                {
                    string robocza;
                    cin>>robocza;
                    "ping "+robocza;
                    system(robocza.c_str());
                }
            }
    system(polecenie.c_str());
    }
    return 0;
}
