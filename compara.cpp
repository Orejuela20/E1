//nombre:orejuela sannicolas jefferson ober
//curso:Tics B
//examen de 1 parcial
//docente: stalin francis


// Programa que permite al usuario determinar si un numero es mayor, menor o igual que el otro numero
#include<iostream>
using namespace std;
int main() 
{
 //Se declaran las variables
         float j,k;
            cout<<"Ingrese el primer numero en j  : "; cin>>j;
              cout<<"Ingrese el segundo numero  en  k  : "; cin>>k;

             if(j==k)
                    {
                 cout<<"Son numeros Iguales "<<endl;
    }
          else                                                 {        
		  if(j<k)                                         {
			  cout<<j<<" Es Menor que "<<k<<"\n";
   }
		       else
  {
	  cout<<k<<" Es Menor que  "<<j<<"\n";
						        }
		         }

	  return (0);
}


