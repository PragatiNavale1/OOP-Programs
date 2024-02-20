#include<iostream>
using namespace std;
class Engineering_college
{
private:
 string c_name;
 string c_code;
public:
 Engineering_college (string m =
"Sanjivani College of Engineering, Kopargaon",
string n = "5160")
 {
 c_name = m;
 c_code = n;
 }
 void display ()
 {
 cout << "\nName of Engineering College:" << c_name << endl <<
 "Code of College:" << c_code << endl;
 }
};
class Comp_Tech:public Engineering_college
{
public:
 int ch1, fycma_girls = 50, fycmb_girls = 24, fycma_boys = 33, fycmb_boys =
 32, sycma_girls = 77, sycmb_girls = 28, sycma_boys = 33, sycmb_boys =
 32, tycma_girls = 37, tycmb_girls = 28, tycma_boys = 33, tycmb_boys = 32;
 void display_ct ()
 {
 cout << "\n ---Computer Engineering---\n";
 cout << "\t\t 1.FYCM\n\t\t 2.SYCM\n\t\t 3.TYCM\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch1;
 switch (ch1)
 {
    case 1:
 cout << "\n \t Information about FYCM \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYCM-A = " << fycma_girls << " \t" << fycma_boys << " \t=" <<
 fycma_girls +
 fycma_boys << " \n" << "\t FYCM-B = " << fycmb_girls << " \t" <<
 fycmb_boys << " \t=" << fycmb_girls +
 fycmb_boys << " \n" << "\t \t \t Total = " << fycma_girls +
 fycma_boys + fycmb_girls + fycmb_boys << " \n";
break;
case 2:
 cout << "\n \t Information about SYCM \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYCM-A = " << sycma_girls << " \t" << sycma_boys << " \t=" <<
 sycma_girls +
 sycma_boys << " \n" << "\t SYCM-B = " << sycmb_girls << " \t" <<
 sycmb_boys << " \t=" << sycmb_girls +
 sycmb_boys << " \n" << "\t \t \t Total = " << sycma_girls +
 sycma_boys + sycmb_girls + sycmb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYCM \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYCM-A = " << tycma_girls << " \t" << tycma_boys << " \t=" <<
 tycma_girls +
 tycma_boys << " \n" << "\t TYCM-B = " << tycmb_girls << " \t" <<
 tycmb_boys << " \t=" << tycmb_girls +
 tycmb_boys << " \n" << "\t \t \t Total = " << tycma_girls +
 tycma_boys + tycmb_girls + tycmb_boys << " \n";
break;
 }
 }
};
class Civil:public Engineering_college
{
public:
 int ch2, fycea_girls = 27, fyceb_girls = 28, fycea_boys = 24, fyceb_boys =32, 
 sycea_girls = 38, syceb_girls = 28, sycea_boys = 33, syceb_boys = 32, 
 tycea_girls = 37, tyceb_girls = 28, tycea_boys = 33, tyceb_boys = 32;
 void display_c ()
 {
 cout << "\n \t ---Civil---\n";
 cout << "\t\t 1.FYCE\n\t\t 2.SYCE\n\t\t 3.TYCE\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch2;
 switch (ch2)
 {
 case 1:
 cout << "\n \t Information about FYCE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYCE-A = " << fycea_girls << " \t" << fycea_boys << " \t=" <<
 fycea_girls +
 fycea_boys << " \n" << "\t FYCE-B = " << fyceb_girls << " \t" <<
 fyceb_boys << " \t=" << fyceb_girls +
 fyceb_boys << " \n" << "\t \t \t Total = " << fycea_girls +
 fycea_boys + fyceb_girls + fyceb_boys << " \n";
break;
case 2:
 cout << "\n \t Information about SYCE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYCE-A = " << sycea_girls << " \t" << sycea_boys << " \t=" <<
 sycea_girls +
 sycea_boys << " \n" << "\t SYCE-B = " << syceb_girls << " \t" <<
 syceb_boys << " \t=" << syceb_girls +
 syceb_boys << " \n" << "\t \t \t Total = " << sycea_girls +
 sycea_boys + syceb_girls + syceb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYCE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYCE-A = " << tycea_girls << " \t" << tycea_boys << " \t=" <<
 tycea_girls +
 tycea_boys << " \n" << "\t TYCE-B = " << tyceb_girls << " \t" <<
 tyceb_boys << " \t=" << tyceb_girls +
 tyceb_boys << " \n" << "\t \t \t Total = " << tycea_girls +
 tycea_boys + tyceb_girls + tyceb_boys << " \n";
 break;
 }
 }
};
class IT:public Engineering_college
{
public:
 int ch3, fyita_girls = 37, fyitb_girls = 28, fyita_boys = 33, fyitb_boys =
 32, syita_girls = 37, syitb_girls = 28, syita_boys = 33, syitb_boys =
 32, tyita_girls = 37, tyitb_girls = 28, tyita_boys = 33, tyitb_boys = 32;
 void display_i ()
 {
 cout << "\n ---Information Engineering(IT)---\n";
 cout << "\t\t 1.FYIT\n\t\t 2.SYIT\n\t\t 3.TYIT\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch3;
 switch (ch3)
 {
 case 1:
 cout << "\n \t Information about FYIT \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYIT-A = " << fyita_girls << " \t" << fyita_boys << " \t=" <<
 fyita_girls +
 fyita_boys << " \n" << "\t FYIT-B = " << fyitb_girls << " \t" <<
 fyitb_boys << " \t=" << fyitb_girls +
 fyitb_boys << " \n" << "\t \t \t Total = " << fyita_girls +
 fyita_boys + fyitb_girls + fyitb_boys << " \n";
break;
case 2:
 cout << "\n \t Information about SYIT \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYIT-A = " << syita_girls << " \t" << syita_boys << " \t=" <<
 syita_girls +
 syita_boys << " \n" << "\t SYIT-B = " << syitb_girls << " \t" <<
 syitb_boys << " \t=" << syitb_girls +
 syitb_boys << " \n" << "\t \t \t Total = " << syita_girls +
 syita_boys + syitb_girls + syitb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYIT \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYIT-A = " << tyita_girls << " \t" << tyita_boys << " \t=" <<
 tyita_girls +
 tyita_boys << " \n" << "\t TYIT-B = " << tyitb_girls << " \t" <<
 tyitb_boys << " \t=" << tyitb_girls +
 tyitb_boys << " \n" << "\t \t \t Total = " << tyita_girls +
 tyita_boys + tyitb_girls + tyitb_boys << " \n";
break;
 }
 }
};
class Mech:public Engineering_college
{
public:
 int ch4, fymea_girls = 87, fymeb_girls = 36, fymea_boys = 33, fymeb_boys =
 32, symea_girls = 24, symeb_girls = 28, symea_boys = 33, symeb_boys =
 32, tymea_girls = 37, tymeb_girls = 28, tymea_boys = 33, tymeb_boys = 32;
 void display_m ()
 {
 cout << "\n ---Mechanical---\n";
 cout << "\t\t 1.FYME\n\t\t 2.SYME\n\t\t 3.TYME\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch4;
 switch (ch4)
 {
 case 1:
 cout << "\n \t Information about FYME \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYME-A = " << fymea_girls << " \t" << fymea_boys << " \t=" <<
 fymea_girls +
 fymea_boys << " \n" << "\t FYME-B = " << fymeb_girls << " \t" <<
 fymeb_boys << " \t=" << fymeb_girls +
 fymeb_boys << " \n" << "\t \t \t Total = " << fymea_girls +
 fymea_boys + fymeb_girls + fymeb_boys << " \n";
break;
case 2: 
cout << "\n \t Information about SYME \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYME-A = " << symea_girls << " \t" << symea_boys << " \t=" <<
 symea_girls +
 symea_boys << " \n" << "\t SYME-B = " << symeb_girls << " \t" <<
 symeb_boys << " \t=" << symeb_girls +
 symeb_boys << " \n" << "\t \t \t Total = " << symea_girls +
 symea_boys + symeb_girls + symeb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYME \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYME-A = " << tymea_girls << " \t" << tymea_boys << " \t=" <<
 tymea_girls +
 tymea_boys << " \n" << "\t TYME-B = " << tymeb_girls << " \t" <<
 tymeb_boys << " \t=" << tymeb_girls +
 tymeb_boys << " \n" << "\t \t \t Total = " << tymea_girls +
 tymea_boys + tymeb_girls + tymeb_boys << " \n";
break;
 }
 }
};
class Electrical:public Engineering_college
{
public:
 int ch5, fyeea_girls = 26, fyeeb_girls = 54, fyeea_boys = 33, fyeeb_boys =
 32, syeea_girls = 24, syeeb_girls = 28, syeea_boys = 33, syeeb_boys =
 32, tyeea_girls = 37, tyeeb_girls = 28, tyeea_boys = 33, tyeeb_boys = 32;
 void display_e ()
 {
 cout << "\n ---Electrical---\n";
 cout << "\t\t 1.FYEE\n\t\t 2.SYEE\n\t\t 3.TYEE\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch5;
 switch (ch5)
 {
 case 1:
 cout << "\n \t Information about FYEE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYEE-A = " << fyeea_girls << " \t" << fyeea_boys << " \t=" <<
 fyeea_girls +
 fyeea_boys << " \n" << "\t FYEE-B = " << fyeeb_girls << " \t" <<
 fyeeb_boys << " \t=" << fyeeb_girls +
 fyeeb_boys << " \n" << "\t \t \t Total = " << fyeea_girls +
 fyeea_boys + fyeeb_girls + fyeeb_boys << " \n";
break;
case 2:
 cout << "\n \t Information about SYEE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYEE-A = " << syeea_girls << " \t" << syeea_boys << " \t=" <<
 syeea_girls +
 syeea_boys << " \n" << "\t SYEE-B = " << syeeb_girls << " \t" <<
 syeeb_boys << " \t=" << syeeb_girls +
 syeeb_boys << " \n" << "\t \t \t Total = " << syeea_girls +
 syeea_boys + syeeb_girls + syeeb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYEE \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYEE-A = " << tyeea_girls << " \t" << tyeea_boys << " \t=" <<
 tyeea_girls +
 tyeea_boys << " \n" << "\t TYEE-B = " << tyeeb_girls << " \t" <<
 tyeeb_boys << " \t=" << tyeeb_girls +
 tyeeb_boys << " \n" << "\t \t \t Total = " << tyeea_girls +
 tyeea_boys + tyeeb_girls + tyeeb_boys << " \n";
break;
 }
 }
};
class Electronics:public Engineering_college
{
public:
 int ch6, fyeja_girls = 22, fyejb_girls = 22, fyeja_boys = 56, fyejb_boys =
 45, syeja_girls = 54, syejb_girls = 28, syeja_boys = 33, syejb_boys =
 32, tyeja_girls = 37, tyejb_girls = 28, tyeja_boys = 33, tyejb_boys = 32;
 void display_j ()
 {
 cout << "\n ---Electronics---\n";
 cout << "\t\t 1.FYEJ\n\t\t 2.SYEJ\n\t\t 3.TYEJ\n";
 cout << "\tEnter choice from above options\n\t";
 cin >> ch6;
 switch (ch6)
 {
 case 1:
 cout << "\n \t Information about FYEJ \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t FYEJ-A = " << fyeja_girls << " \t" << fyeja_boys << " \t=" <<
 fyeja_girls +
 fyeja_boys << " \n" << "\t FYEJ-B = " << fyejb_girls << " \t" <<
 fyejb_boys << " \t=" << fyejb_girls +
 fyejb_boys << " \n" << "\t \t \t Total = " << fyeja_girls +
 fyeja_boys + fyejb_girls + fyejb_boys << " \n";
break;
case 2:
 cout << "\n \t Information about SYEJ \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t SYEJ-A = " << syeja_girls << " \t" << syeja_boys << " \t=" << syeja_girls +
 syeja_boys << " \n" << "\t SYEJ-B = " << syejb_girls << " \t" <<
 syejb_boys << " \t=" << syejb_girls +
 syejb_boys << " \n" << "\t \t \t Total = " << syeja_girls +
 syeja_boys + syejb_girls + syejb_boys << " \n";
break;
case 3:
 cout << "\n \t Information about TYEJ \n"
 << "\t\tGirls \tBoys \t\n"
 << "\t TYEJ-A = " << tyeja_girls << " \t" << tyeja_boys << " \t=" <<
 tyeja_girls +
 tyeja_boys << " \n" << "\t TYEJ-B = " << tyejb_girls << " \t" <<
 tyejb_boys << " \t=" << tyejb_girls +
 tyejb_boys << " \n" << "\t \t \t Total = " << tyeja_girls +
 tyeja_boys + tyejb_girls + tyejb_boys << " \n";
break;
 }
 }

};
class student:public Comp_Tech, public Civil, public IT, public Mech,
 public Electrical, public Electronics
 {
 private:
 int student_count =
 fycma_girls + fycmb_girls + fycma_boys + fycmb_boys + sycma_girls +
 sycmb_girls + sycma_boys + sycmb_boys + tycma_girls + tycmb_girls +
 tycma_boys + tycmb_boys + fycea_girls + fyceb_girls + fycea_boys +
 fyceb_boys + sycea_girls + syceb_girls + sycea_boys + syceb_boys +
 tycea_girls + tyceb_girls + tycea_boys + tyceb_boys + fyita_girls +
 fyitb_girls + fyita_boys + fyitb_boys + syita_girls + syitb_girls +
 syita_boys + syitb_boys + tyita_girls + tyitb_girls + tyita_boys +
 tyitb_boys + fymea_girls + fymeb_girls + fymeb_boys + symea_girls +
 symeb_girls + symea_boys + symeb_boys + tymea_girls + tymeb_girls +
 tymea_boys + tymeb_boys + fyeea_girls + fyeeb_girls + fyeea_boys +
 fyeeb_boys + syeea_girls + syeeb_girls + syeea_boys + syeeb_boys +
 tyeea_girls + tyeeb_girls + tyeea_boys + tyeeb_boys + fyeja_girls +
 fyejb_girls + fyeja_boys + fyejb_boys + syeja_girls + syejb_girls +
 syeja_boys + syejb_boys + tyeja_girls + tyejb_girls + tyeja_boys +
 tyejb_boys;
 public:
 void display ()
 {
 cout << "Total number of students in Collge: " << student_count;
 }
};
int main ()
{
 Comp_Tech ct1;
 Civil c1;
 IT i1;
 Mech m1;
 Electrical e1;
 Electronics j1;
 int ch;
 ct1.display ();
 student s1;
s1.display ();
 while (1)
 {
 cout << "\n****Departments of Engineering College***" << endl;
 cout << "1.Computer Engineering\n2.Civil Engineering\n"
<< "3.IT Engineering\n4.Mechanical Engineering\n"
<< "5.Electrical Engineering\n6.Electronics Engineering\n7.Exit" <<
endl;
 cout << "Enter Department whose detail do you want:" << endl;
 cin >> ch;
 switch (ch)
{
case 1:
 ct1.display_ct ();
 break;
case 2:
 c1.display_c ();
 break;
case 3:
 i1.display_i ();
 break;
case 4:
 m1.display_m ();
 break;
case 5:
 e1.display_e ();
 break;
case 6:
 j1.display_j ();
 break;
case 7:
 exit (0);
 break;
}
 }
 cout << "Thank You";
 return 0;
}

