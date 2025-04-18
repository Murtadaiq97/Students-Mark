#include <iostream>
using namespace std;
void martastudents(int ary [10])
{
    for (int i = 0; i < 10; i++)
    {
     
        cout << "enter the marct the student [ " << "   " << i + 1 <<  "   " << "]" << endl;
        cin >> ary[i];
        if (ary[i] > 100 || ary[i] < 0) {
            cout << " invaled value" << endl;
            i--;
        }

    }
  
}
void printmactstudents(int ary[10]) {
    for (int i = 0; i < 10; i++) {
        cout << "marct student [ " << i + 1 << " ] =  " << ary[i] << endl;

    }


}
int  summarctastudents(int ary[10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += ary[i];
    }
    return sum;
}
float avergeastudents(int ary[10]) {
    
    float avrg = summarctastudents(ary) / 10.0;
    return avrg;
}
int maxmarctastudents(int ary[10]) {
    int max = ary[0];
    for (int i = 0; i < 10; i++) {
        if (ary[i] > max)
            max = ary[i];
    }
    return max;
}
int minmarctastudents(int ary[10]) {
    int min = ary[0];
    for (int i = 0; i < 10; i++) {
        if (ary[i] < min)
            min = ary[i];
    }
    return min;

}
void suscflystudents(int ary[10]) {
    for (int i = 0; i < 10; i++) {
        if (ary[i] >= 50)
            cout << "THE STUDENT IS SUSCFLY  = " << ary[i] << endl;
    }
}
void falusestudents(int ary[10]) { 
    for (int i = 0; i < 10; i++) {
        if (ary[i] < 50)
            cout << "THE STUDENT IS FALUE  = " << ary[i] << endl;
    }

    }
    
int main()
{
    int ary[10]; 
    martastudents(ary);
    printmactstudents(ary);
    suscflystudents(ary);
    falusestudents(ary);
    int sum = summarctastudents(ary) ;
    float avarge = avergeastudents(ary);
    int max = maxmarctastudents(ary);
    int min = minmarctastudents(ary);
    
    cout << "THE SUM MARCT A STUDENTS  = " << sum << endl;
    cout << "THE AVERGE MARCT A STUDENTS  = " << avarge << endl;
    cout << "THE MAX MARCT A STUDENTS  = " << max << endl;
    cout << "THE MIN MARCT A STUDENTS  = " << min << endl;



}

