#include <iostream>
#include<string>
#include<fstream>
int  main(){
    std::ofstream file("text.txt");
    std::string  naxadasutyun;
    std::cout<<"mutqagreq naxadasutyun-";
    std::getline(std::cin,naxadasutyun);
    for(int i=0;i<naxadasutyun.size();i++){
        if(naxadasutyun[i]==' '){
             file<<"\n";
        }
        else{
              file<<naxadasutyun[i];
        }
    }
file.close();
std::ifstream file1("text.txt");
std::string k;

int j=0;
std::string o[];
 while (std::getline(file1, k)) {
     o[j]=k;
    }
    file1.close();
    
return 0;
}