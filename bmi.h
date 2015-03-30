using namespace std;
class bmi
{
public:
    void setHeight(float x);
    void setMass(float x);
    void setResult();
    void setStr(float x);
    float getResult();
    string getStr();
private:
    float height,mass,result;
    string str;
};
