#include <iostream>
using namespace std;

int main(){
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
    int s = 0; count1++;
    int i = 1; count2++;
    count3++;
    while(i<=10){
        count3++;
        int t =0; count4++;
        int j =1;count5++;
        count6++;
        while(j<=10){
            count6++;
            t =t+1; count7++;
            j=j+1; count8++;
        }
        s=s+t; count9++;
        i=i+1; count10++;
    }
    cout<< count1<<endl;
    cout<< count2<<endl;
    cout<< count3<<endl;
    cout<< count4<<endl;
    cout<< count5<<endl;
    cout<< count6<<endl;
    cout<< count7<<endl;
    cout<< count8<<endl;
    cout<< count9<<endl;
    cout<< count10<<endl;
    cout<<"Total Lineas = "<<count1+count2+count3+count4+count5+count6+count7+count8+count9+count10<<endl;
}
