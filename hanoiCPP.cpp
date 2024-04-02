#include<iostream>
#include<vector>
using namespace std;

void pato(int& n,int& t){ //n = cantidad discos / t = donde termina
	int cont=0;
	bool k=false;
	vector<vector<int>> hanoi(3);
	for(int i=n-1;i>=0;i--){ //Empieza en el palo 1 / rellena la pila
        hanoi[0].push_back(i+1);
    }
	if((n%2==0 && t==3)||(n%2!=0 && t==2)){ //sentido horario //Termina en 3 y discos par
		while(hanoi[t-1].size()-1!=n){
			for(int i=0;i<3;i++){
				if(hanoi[i].empty()){
					i++;
				}
				for(int j=i;j<3;j++){
					cout<<j<<" "<<i<<endl;
					if( (hanoi[j].empty() || hanoi[i].back()<hanoi[j].back()) && (i!=j)){
						hanoi[j].push_back(hanoi[i].back());
						hanoi[i].pop_back();
						i--;
						k=true;
						break;
					}else k=false;
					if(((j==2 && i==2)&& k==false) && !hanoi[j].empty()){
						j=-1;
						cout<<"b"<<endl;
						system("PAUSE");
					}
					
				}
				if((hanoi[i].empty())){
					cout<<"a "<<i<<endl;
					i=-1;
				}
				
				for(int l=0;l<3;l++){
					if(!hanoi[l].empty()){
						cout<<"Pila "<<l<<": ";
						for(int& a : hanoi[l]){
							cout<<a<<" ";
						}
					}else cout<<"Pila "<<l<<": "<<0;
					cout<<endl;
				}
				
				cout<<"-------------------------"<<endl;
				system("PAUSE");
			}
		}
		for(int& a : hanoi[t-1]){
			cout<<a<<" ";
		}
		
	}/*else{ //Antihorario
		cont=0;
		while(hanoi[t-1].size()!=n){
			if(cont<0){
				cont=3;
			}
			for(int i=;i<3;i--){
				for(int j=; j ; j--){
					
					break;
				}
			}
		}
	}*/
}

int main(){
    
    /*for(int i=4;i>=0;i--){
        cout<<p1[i]<<endl;
    }*/
    int empieza,termina,n;
    cout<<"Ingresa en que palo termina: ";
    cin>>termina;
	cout<<"Ingresa la cantidad de discos a organizar: ";
	cin>>n;
	if(n>=2){
		pato(n,termina);
	}


	return 0;
}