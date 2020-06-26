#include <iostream>
#include <cmath>

using namespace std;

int *sumatoria;

int main()
{
     float media= 0;
     int cantidad;
     float varianza= 0;
     
     
      cout<<"PROGRAMA PARA CALCULAR LA MEDIA ARITMETICA\n";
     cout<<"\nCuantos numeros son? ";
     cin>>cantidad;
     
     sumatoria = new int[cantidad];
     
     for(int i= 0;i < cantidad;i++)
     {
        cout<<"Escribe el valor "<<i+1<<":";
        cin>>sumatoria[i];
    }
    
    for(int e = 0;e < cantidad;e++)
    {
         media = media + sumatoria[e];
    }
    
    media = media / cantidad;
    
    cout<<"La Media es: ";
    cout<<media<<endl;
    
    delete[] sumatoria;
     
    system("PAUSE>nul");
    return EXIT_SUCCESS;
}

