#include <iostream>
#include <math.h>

using namespace std;
float klasyczneWzory(float a, float b, float c);
float signWzory(float a, float b, float c);

int main()
{
    cout << "Wprowadz a: " << endl;
    float a;
    cin>>a;
    cout<<"Wprowadz b: "<<endl;
    float b;
    cin>>b;
    cout<<"Wprowadz c: "<<endl;
    float c;
    cin>>c;
    cout<<"WYNIKI OTRZYMANE KLASYCZNYMI WZORAMI"<<endl;
    klasyczneWzory(a,b,c);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"WYNIKI OTRZYMANE SIGN WZORAMI"<<endl;
    signWzory(a,b,c);


    return 0;
}
float klasyczneWzory(float a, float b, float c)
{
    float delta;
    float x1;
    float x2;
    delta= pow(b,2) - (4*a*c);
    cout<<"delta: "<<delta<<endl;
    cout<<"pierwiastek z delta: "<<sqrt(delta)<<endl;
    if(delta<0)
    {
        cout<<"Brak rozwiazan pierwiastka, delta jest ujemna";
    }
    if(delta==0)
    {
        float x0=(-b)/(2*a);
        cout<<"Delta rowna 0, rownanie kwadratowe ma tylko jedno rozwiazanie"<<endl;
        cout<<"x0 :"<<x0<<endl;
    }
    if(delta > 0)
    {
        x1 = ((-b)-sqrt(delta))/(2*a);
        x2 = ((-b)+sqrt(delta))/(2*a);
        cout<<"x1: "<<x1<<endl;
        cout<<"x2: "<<x2<<endl;

    }

}
float signWzory(float a, float b, float c)
{
    float x1;
    float x2;
    if(((-b)/(2*a))<0)
    {
        float x1= ((-b)/(2*a)) + (-1)*(sqrt(pow(((b)/(2*a)),2) - (c/a)));
        float x2= (c/(a*x1));
       if(x1==x2)
        {
            cout<<"x0: "<<x1<<endl;
        }
        if (x1>x2 || x1<x2)
        {   cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
        }
    }
    if(((-b)/(2*a))==0)
    {
        float x1= ((-b)/(2*a)) + (0)*(sqrt(pow(((b)/(2*a)),2) - (c/a)));
        float x2= (c/(a*x1));
        if(x1==x2)
        {
            cout<<"x0: "<<x1<<endl;
        }
        if (x1>x2 || x1<x2)
        {   cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
        }
    }
    if(((-b)/(2*a))>0)
    {
        float x1= ((-b)/(2*a)) + (1)*(sqrt(pow(((b)/(2*a)),2) - (c/a)));
        float x2= (c/(a*x1));
        if(x1==x2)
        {
            cout<<"x0: "<<x1<<endl;
        }
        if (x1>x2 || x1<x2)
        {   cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
        }
    }

}
