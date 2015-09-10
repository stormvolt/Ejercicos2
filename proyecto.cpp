#include<iostream>

using namespace std;

void ordenar(int x[10])
{
     for(int i=0; i<10; i++)
        {
        for(int j=i+1; i<10; i++)        
               {
               if(x[i] > x[j])
                    {
                    int c=x[i];
                    x[i]=x[j];
                    x[j]=c;
                    }
                }
         }  
}




int main()
{
     int a[10];
     for(int i=0; i<10; i++)
          {
          cout <<"Ingresa un valor: ";
          cin >>a[i];
          }
     ordenar(a);
     cout << "Esta es la lista ordenada: "  << endl;
     for(int i=0; i<10; i++)
          {
          cout << a[i] << endl;
          }
     return 0;
}     
