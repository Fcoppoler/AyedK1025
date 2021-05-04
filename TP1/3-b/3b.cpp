
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int m1,m2,b1,b2,cx,cy;

    cout<<"Ingrese la pendinte de la recta y1"<<endl<<endl;
    cin>> m1;
    cout<<"Ingrese la ordenada al origen de la recta y1"<<endl;
    cin>>b1;
    cout<<"Ingrese la pendinte de la recta y2"<<endl;
    cin>>m2;
    cout<<"Ingrese la ordenada al origen de la recta y2"<<endl;
    cin>>b2;

    if(m1==m2 && b1==b2) //son iguales
    {
     cout<<"las rectas son iguales"<<endl;
    }

    else
    {
            cx=(b2-b1)/(m1-m2);
            cy= (m1*cx + b1);
            cout<<"las rectas se intersectan en el punto (" <<cx<< ";"<<cy<<")"<<endl;
    }


}



