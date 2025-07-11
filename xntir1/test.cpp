#include <iostream>
#include<string>
#include<fstream>
int  main(){
std::ofstream file("text.txt");
for(int i=0;i<5;i++){
    std::string a;
    std::cout<<"\nmutqag8eq bar-";
    std::cin>>a;
    file<<a<<"\n";
}
file.close();
std::ifstream file1("text.txt");
std::string a;
std::string k[5]={};
int w=0;
while(getline(file1,a)){
k[w]=a;
w++;
}

std::cout<<"ezaki en\n";
for(int i=0;i<5;i++){
    int o=0;
for (int j=0;j<5;j++){
if(k[i]==k[j])
{
    o++;
//   std::cout<<o<<"\n";
}
}
if(o==1){
    std::cout<<k[i]<<"\n";
}

}
    return 0;
}