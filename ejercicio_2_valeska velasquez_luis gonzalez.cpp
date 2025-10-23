  #include<iostream>
  #include<limis>
  
  using namespace std;
  
  int main(){
      int n;
      int i=0;
      double numero;
      double sumatotal=0.0;
      
      
      double mayor=numeric_limitis<double>:lowest();
      cout<<"igrese la cantidad total de numeros(N) a procesar:";
       cin>>n;
       
       while (i<n){
             cout<<"ingrese el numero"<<i+1<<":";
             cin>>numero;
             
             sumatotal+=numero;
             }
             
             if(numero>mayor){
                mayor= numero;
                }
                
      i++;//incrementa el contador para controlar el bucle
      }
      
      double promedio=0.0:
      if (n>0)
      
      promedio=sumatotal/n;
      }
      
      cout<<"n---resultados---"<<endl;
      cout<<"suma total"<<sumatotal<<endl;
      cout<<"promedio"<<promedio<<endl;
      
      if(n>0)
      cout<<"el numero mayor fue:"<<mayor<<endl;
      }else{
            cout<<"no se ingresaron numeros para calcular"<<endl;
            }
            return 0;
            }
      
                
                
