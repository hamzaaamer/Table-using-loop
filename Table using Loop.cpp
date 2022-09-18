#include <iostream>
using namespace std;
int main()
{
        int value1,value2;
        
        cout<<"Enter the number of the table \n";
        cin>>value1;
        
        cout<<endl;
        
        for(value2 = 1; value2<=10; value2++){
        cout<<" "<< value1 <<" x "<< value2 <<" = "<< value1*value2<<endl;
        }

        return 0;
}