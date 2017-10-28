

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

void listar_todo(vector<string>);//ejercicio 3
void listar_ordenado(vector<string>);//ejericio 3
void listar_consulta(vector<string>);//ejericio 3
int  validar_dias(string);//ejercicio 3
string fechas (string);// ejericio 3
string dia_semana(string);//ejericio 3

int main(){
	bool seguir=true;
	int opcion;
	vector<string>date;//vector del ejercicio 3 para las fechas
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
				int op,o;
				cout<<"imgrese opcion 1.agregar 2.listar"<<endl;
				cin>>op;
				if(op==1){
					string fecha;	
					cout<<"Ingrese fecha"<<endl;
					cin>>fecha;
		
					while(validar_dias(fecha)==2){
						cout<<"fecha erronea vuelve a ingresarla"<<endl;
						cin>>fecha;
					}
					date.push_back (fechas(fecha));
				}else if(op==2){
					cout<<"Ingrese op 1.listar todo 2.listar por consulta";
					cin>>o;
					if(o==1){
						listar_todo(date);
					}else if(0==2){
					}
				}					
			}break;
			case 4:{
				seguir=false;
			}break;
		}
	}


return 0;
}


//realizar string con la fecha (ejercicio 3)
string fechas(string fecha){
	string d="",m="";

	string nueva_fecha="";

	string dia="";
		dia+=fecha.at(6);
		dia+=fecha.at(7);
	string year="";
	        year=fecha.at(0);
		year+=fecha.at(1);
		year+=fecha.at(2);
		year+=fecha.at(3);
	string mes="";
		mes+=fecha.at(4);
		mes+=fecha.at(5);
	if(mes.compare("01")==0){
		m="enero";	
	}else if(mes.compare("02")==0){
		m="febrero";
	}else if(mes.compare("03")==0){
		m="marzo";
	}else if(mes.compare("04")==0){
		m="abril";
	}else if(mes.compare("05")==0){
		m="mayo";
	}else if(mes.compare("06")==0){
		m="junio";
	}else if(mes.compare("07")==0){
		m="julio";
	}else if(mes.compare("08")==0){
		m="agosto";
	}else if(mes.compare("09")==0){
		m="septiembre";
	}else if(mes.compare("10")==0){
		m="octubre";
	}else if(mes.compare("11")==0){
		m="noviembre";
	}else if(mes.compare("12")==0){
		m="diciembre";
	}
	nueva_fecha+=dia_semana(fecha);
	nueva_fecha+=",";
	nueva_fecha+=dia;
	nueva_fecha+=" de ";
	nueva_fecha+=m;
	nueva_fecha+=" del ";
	nueva_fecha+=year; 

return nueva_fecha;
}
//listar todo(ejercicio 3)
void listar_todo(vector<string> date){
	for(int i=0;i<date.size();i++){
		cout<<date.at(i)<<endl;
	}
}

//listar consulta(ejercicio3)
void listar_consulta(vector<string> date){
	int opcion;
	cout<<"Ingrese opcion 1.por mes"<<endl<<" 2.por un año"<<endl;
	cin>> opcion;
	if(opcion==1){
		for(int i=0;i<date.size();i++){
			if(date.at(i).compare("enero")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("febrero")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("marzo")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("abril")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("mayo")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("junio")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("julio")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("agosto")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("septiembre")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("octubre")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("noviembre")){
				cout<<date.at(i)<<endl;
			}else if(date.at(i).compare("diciembre")){
				cout<<date.at(i)<<endl;
			}
		}		
	}else if(opcion==2){
		for(int i=0;i<date.size();i++){
			if(date.at(i).compare("")){
			}
		}
	}
}
//validar dias,mes(ejercicio 3)
int validar_dias(string fecha){
	int retorno=0;
	string mes="",dia="";
	mes+=fecha.at(4);
	mes+=fecha.at(5);
	dia+=fecha.at(6);
	dia+=fecha.at(7);
	int m,d;
	m=atoi(mes.c_str());
	d=atoi(dia.c_str());
	if(m<=12){
		if(m==1 && d<=31){
			retorno=1;
		}else if(m==2 && d<=28){
			retorno=1;
		}else if(m==3 && d<=31){
			retorno=1;
		}else if(m==4 && d<=30){
			retorno=1;
		}else if(m==5 && d<=31){
			retorno=1;
		}else if(m==6 && d<=30){
			retorno=1;
		}else if(m==7 && d<=31){
			retorno=1;
		}else if(m==8 && d<=31){
			retorno=1;
		}else if(m==9 && d<=30){
			retorno=1;
		}else if(m==10 && d<=31){
			retorno=1;
		}else if(m==11 && d<=30){
			retorno=1;
		}else if(m==12 && d<=31){
			retorno=1;
		}
	}else {
		retorno=2;
	}

return retorno;
}
//calcula el dia (ejericio3)
string dia_semana(string fecha){
	string nuevo_dia="algo"; 
        string dia="";
                dia+=fecha.at(6);
                dia+=fecha.at(7);
        string year="";
                year+=fecha.at(2);
                year+=fecha.at(3);
        string mes="";
                mes+=fecha.at(4);
                mes+=fecha.at(5);
	int d,m,a,month,e,s,number,day;
	d=atoi(dia.c_str());
	m=atoi(mes.c_str());
	a=atoi(year.c_str());
	if(m==1){
		month=0;
	}else if(m==2){
		month=3;
	}else if(m==3){
		month=3;
	}else if(m==4){
		month=6;
	}else if(m==5){
		month=1;
	}else if(m==6){
		month=4;
	}else if(m==7){
		month=6;
	}else if(m==8){
		month=2;
	}else if(m==9){
		month=3;
	}else if(m==10){
		month=0;
	}else if(m==11){
		month=3;
	}else if(m==12){
		month=5;
	}
	e=a/4;
	number=d+month+a+e+6;
	cout<<"n="<<d<<","<<month<<","<<a<<","<<e<<","<<6<<endl;
	day=number%7;
	if(day==1){
		nuevo_dia="lunes";
	}else if(day==2){
		nuevo_dia="martes";
	}else if(day==3){
		nuevo_dia="miercoles";
	}else if(day==4){
		nuevo_dia="jueves";
	}else if(day==5){
		nuevo_dia="viernes";
	}else if(day==6){
		nuevo_dia="sabado";
	}else if(day==0){
		nuevo_dia="domingo";
	}
	cout<<"number"<<day<<endl;	
return nuevo_dia;
}

