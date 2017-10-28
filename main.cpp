

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

void listar_todo(vector<string>);//ejercicio 2
void listar_ordenado(vector<string>);//ejericio 2
int  validar_dias(string);//ejercicio 2
string fechas (string);// ejericio 2
string dia_semana(string);//ejericio 2
void orden_vector(vector<int>,int);//ejericio1
int*crear_arreglo(int);//elercicio1
void liberar_memoria(int*,int);//ejercicio1
int main(){
	bool seguir=true;
	int opcion;
	vector<string>date;//vector del ejercicio 2 para las fechas
	while(seguir){
		cout<<"ingrese la opcion 1.medianas  2.fecha 3.salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				vector <int>lista;
				int tam;
				cout<<"Ingrese numero de elementos"<<endl;
				cin>>tam;
				srand(time(NULL));
				int ran;
				for(int i=0;i<tam;i++){
					ran=rand()%30;
					lista.push_back(ran);
				}
				for(int j=0;j<lista.size();j++){
					cout<<" "<<lista.at(j);
				}
				cout<<""<<endl;
				if(tam<=5){
					orden_vector(lista,tam);
				}else if(tam>5){
			
				}								
					
			}break;
			case 2:{
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
					cout<<"Ingrese op 1.listar todo 2.listar ordenado";
					cin>>o;
					if(o==1){
						listar_todo(date);
					}else if(o==2){
						listar_ordenado(date);
					}
				}					
			}break;
			case 3:{
				seguir=false;
			}break;
			
		}
	}


return 0;
}


//realizar string con la fecha (ejercicio 2)
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
//listar todo(ejercicio 2)
void listar_todo(vector<string> date){
	for(int i=0;i<date.size();i++){
		cout<<date.at(i)<<endl;
	}
}

//validar dias,mes(ejercicio 2)
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
//calcula el dia (ejericio2)
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
	string anio="";
		anio+=fecha.at(0);
		anio+=fecha.at(1);
		anio+=fecha.at(2);
		anio+=fecha.at(3);
	int d,m,a,month,e,number,day,old,s;
	d=atoi(dia.c_str());
	m=atoi(mes.c_str());
	a=atoi(year.c_str());
	old=atoi(anio.c_str());
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
	if(old>=2000){
		s=6;
	}else if(old<2000){
		s=0;
	}
	number=d+month+a+e+s;
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
	
return nuevo_dia;
}
///listar ordenado
void listar_ordenado(vector<string> date){
	for(int i=0;i<date.size();i++){
		size_t aguja1=date.at(i).find(",");
		if(date.at(i).substr(0,aguja1).compare("lunes")==0){
			cout<<date.at(i)<<endl;
		}
	} 	
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("martes")==0){
                        cout<<date.at(i)<<endl;
                }
        }
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("miercoles")==0){
                        cout<<date.at(i)<<endl;
                }
        }
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("jueves")==0){
                        cout<<date.at(i)<<endl;
                }
        }
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("viernes")==0){
                        cout<<date.at(i)<<endl;
                }
        }
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("sabado")==0){
                        cout<<date.at(i)<<endl;
                }
        }
        for(int i=0;i<date.size();i++){
                size_t aguja1=date.at(i).find(",");
                if(date.at(i).substr(0,aguja1).compare("domingo")==0){
                        cout<<date.at(i)<<endl;
                }
        }

}

//ordenar vector

void orden_vector(vector<int> vector1,int tam){
	int temp=0;
	for(int i=0;i<vector1.size()-1;i++){
		for(int j=0;j<vector1.size();j++){
			if(vector1.at(i) < vector1.at(j)){
				temp=vector1.at(i);
				vector1.at(i)=vector1.at(j);
				vector1.at(j)=temp;
				
			}
		}
	}
	
	for(int t=0;t<vector1.size();t++){
		cout<<vector1.at(t)<<endl;
	}
}

