#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}

string status(double c){
    if (c >=60)
        return "lulus";
    else
        return "gagal";
}

string status2(double rata,double nil) {
    if (rata >= 60 || nil >=70)
        return "Lulus";
    else
        return "Gagal";    
}

int main() {
    double nilM,nilB;
    //double rata;
    //string st;
    cout << "Masukan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Indonesia ";
    cin >> nilB;
    //rata = rerata(nilM,nilB);
    //st = status(rata);
    //cout << "Status kelulusan = " << st;
    //cout << "Status kelulusan = " << status(rata);
    cout << "Status kelulusan = " << status (rerata(nilM,nilB));
    cout << "\nStatus kelulusan ke 2 = " << status2 (rerata(nilM,nilB),nilM);
    return 0;
}