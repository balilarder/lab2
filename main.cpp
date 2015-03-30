#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include"bmi.h"
using namespace std;
int main()
{
    ifstream inFile("file.in.txt",ios::in);
    if(!inFile)
    {
        cerr<<"failed!"<<endl;
        exit(1);
    }

    ofstream outFile("file.out.txt",ios::out);
    bmi family;
    float a,b;

    while(inFile>>a>>b)
    {
        if(a!=0)
        {
            family.setHeight(a);
            family.setMass(b);
            family.setResult();
            family.setStr(family.getResult());
            outFile<<family.getResult()<<"  "<<family.getStr()<<endl;
        }

    }
}
