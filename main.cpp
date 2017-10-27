
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
using namespace std;

vector<int> orden_vector(vector<int>);
string fechas (string);

int main(){

	bool seguir=true;
	int opcion;
	while(seguir){
		cout<<"ingrese la opcion 1 2 3 4.salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				vector<int> vector1;
				int tam;
				cout<<"Ingrese numero de elementos"<<endl;
				cin>>tam;
				srand(time(NULL));

				int ran;
				for(int i=0;i<tam;i++){
					ran=rand()%30;
					vector1.push_back(ran);
				}
				for(int i=0;i<vector1.size();i++){
					cout<<" "<<vector1.at(i);
				}
				
			}break;
			case 2:{
			
			}break;
			case 3:{
				string fecha;	
				cout<<"Ingrese fecha"<<endl;
				cin>>fecha;
				vector<string> fechas;
				
			}break;
			case 4:{
				seguir=false;
			}break;
		}
	}


return 0;
}

string fechas(string fecha){
	string d="",m="";

	string nueva_fecha="";
	string mes="";
		mes+=fecha.at(4);
		mes+=fecha.at(5);
	string dia="";
		dia+=fecha.at(6);
		dia+=fecha.at(7);

	if(dia.compare("01")){
		d="lunes";		
	}else if(dia.compare("02")){
		d="martes";
	}else if(dia.compare("03")){
		d="miercoles";
	}else if(dia.compare("04")){
		d="jueves";
	}else if(dia.compare("05")){
		d="viernes";
	}else if(dia.compare("06")){
		d="sabado";
	}else if(dia.compare("07")){
		d="domingo";
	}
//---------------------------------------------
	string year="";
	        year=fecha.at(0);
		year+=fecha.at(1);
		year+=fecha.at(2);
		year+=fecha.at(3);
	if(mes.compare("01")){
		m="enero";	
	}else if(mes.compare("02")){
		m="febrero;
	}else if(mes.compare("03")){
		m="marzo";
	}else if(mes.compare("04")){
		m="abril";
	}else if(mes.compare("05")){
		m="mayo";
	}else if(mes.compare("06")){
		m="junio";
	}else if(mes.compare("07")){
		m="julio";
	}else if(mes.compare("08")){
		m="agosto";
	}else if(mes.compare("09")){
		m="septiembre";
	}else if(mes.compare("10")){
		m="octubre";
	}else if(mes.compare("11")){
		m="noviembre";
	}else if(mes.compare("12")){
		m="diciembre";
	}

return nueva_fecha;
}
