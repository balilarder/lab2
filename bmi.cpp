#include<string>
#include "bmi.h"
void bmi::setHeight(float x)
{
    height=x/100;
}
void bmi::setMass(float x)
{
    mass=x;
}
void bmi::setResult()
{
    result=mass/(height*height);
}
void bmi::setStr(float x)
{
    if(x<15)
        str="Very severely underweight";
    if(x<15)
        str="Very severely underweight";
    if(x>=15&&x<16)
        str="Severely underweight";
    if(x>=16&&x<18.5)
        str="Underweight";
    if(x>=18.5&&x<25)
        str="Normal";
    if(x>=25&&x<30)
        str="Overweight";
    if(x>=30&&x<35)
        str="Obese Class I(Moderately obese)";
    if(x>=35&&x<40)
        str="Obese Class II(Severely obese)";
    if(x>=40)
        str="Obese Class III(Very Severely obese)";
}
float bmi::getResult()
{
    return result;
}
string bmi::getStr()
{
    return str;
}

