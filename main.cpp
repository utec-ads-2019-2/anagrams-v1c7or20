#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

string minuscula(string palabra){
    for (int i = 0; i < palabra.size(); i++) {
        palabra[i]= tolower(palabra[i]);
    }
    sort(palabra.begin(),palabra.end());
    return palabra;
}

int main() {
    vector<string> data;
    map<string,unsigned int> repeticiones;
    string dato;
    cin>>dato;
    while (dato[0] != '#'){
        data.push_back(dato);
        repeticiones[minuscula(dato)];
        repeticiones[minuscula(dato)]++;
        cin>>dato;
    }
    sort(data.begin(),data.end());
    for (int j = 0; j < data.size(); j++) {
        if ((repeticiones)[minuscula((data)[j])]==1){
            cout<<data[j]<<endl;
        }
    }
	return EXIT_SUCCESS;
}

