#include<iostream>

#include<fstream>

#include<string.h>

using namespace std;
class String

{
        char str[100];
        public:

                String() {}
        String(char * p) {
                strcpy(str, p);

        }
        void display() {
                cout << "String: " << str;
        }
        String operator + (String s) {
                String obj;
                strcat(str, s.str);
                strcpy(obj.str, str);
                return obj;
        }
        char * getstr() {
                return str;
        }
};
main() {
        cout << "Welcome to the COVID-19 Ward Management System" << endl;
        a:
                string pass;
        cout << "Enter password to continue: ";
        cin >> pass;
        if (pass == "pass") {
                b: cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "Access Granted!" << endl;
                cout << "Press 1 to view the Staff information" << endl;
                cout << "Press 2 to view the Patient Information" << endl;
                cout << "Press 3 to Add a patient record" << endl;
                cout << "Press 4 to access the equipment database" << endl << endl << endl << endl;
                int x;
                cin >> x;
                if (x == 1) {
                        staff: fstream infile;
                        String pathstaff("staff\\"),
                        doc("doctors.txt"),
                        clean("cleaners.txt"),
                        nurse("nurses.txt"),
                        use;
                        int t;
                        cout << "Press 1 for Doctors' information" << endl << "Press 2 for Cleaners' information" << endl << "Press 3 for Nurses' information" << endl << "Press 4 to go to the main menu" << endl;
                        cin >> t;
                        if (t == 1) {

                                use = pathstaff + doc;
                                infile.open(use.getstr(), ios:: in );
                                cout << infile.rdbuf();
                        } else if (t == 2) {
                                use = pathstaff + clean;
                                infile.open(use.getstr(), ios:: in );
                                cout << infile.rdbuf();
                        } else if (t == 3) {
                                use = pathstaff + nurse;
                                infile.open(use.getstr(), ios:: in );
                                cout << infile.rdbuf();
                        } else if (t == 4) {
                                goto b;
                        } else {
                                cout << "invalid option";
                                cout << endl << "Do you want to go to the previous menu?Y/N: ";
                                char y;
                                cin >> y;
                                if (y == 'y' || y == 'Y')
                                        goto staff;
                        }

                        cout << endl << "Do you want to go back to the main menu? Y/N: ";
                        char p;
                        cin >> p;
                        if (p == 'y' || p == 'Y') {
                                goto b;
                        }
                }
                else if (x == 2) {
                        ifstream dfile;
                        dfile.open("patients//admitted.txt");
                        cout<<"Names of admitted patients:"<<endl<<endl<<dfile.rdbuf();

                        char name[60];
                        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                        cout << "Enter the name of the patient: ";
                        cin.ignore();
                        gets(name);
                        fstream cfile;
                        String pathpat("patients//"),patname(name),txt(".txt"),use;
                        use=pathpat+patname;
                        use=pathpat+txt;

                        cfile.open(use.getstr());
                        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                        cout << cfile.rdbuf();
                        cout << endl << "Do you want to go back to the main menu? Y/N: ";
                        char p;
                        cin >> p;
                        if (p == 'y' || p == 'Y') {
                                goto b;
                        }
                } else if (x == 3) {

                        struct patient {
                                char name1[30];
                                int age;
                                char gender[7];
                                char doa[20];
                                char symptoms[200];
                                char bedno[10];

                        };
                        String pathpatients("patients\\"), txt(".txt"), joint;

                        patient p;
                        cout << "Enter Name: ";
                        char name1[30];
                        cin.ignore();
                        gets(p.name1);
                        String name(p.name1);
                        cout << endl;
                        cout << "Age: ";
                        cin >> p.age;
                        cout << endl;
                        cout << "Gender: ";
                        cin >> p.gender;
                        cout << endl;
                        cout << "Date Of Admission: ";
                        cin.ignore();
                        gets(p.doa);
                        cout << endl;
                        cout << "Symptoms: ";
                        fflush(stdin);
                        gets(p.symptoms);
                        cout << endl;
                        cout << "Bed Number: ";
                        cin >> p.bedno;
                        cout << endl;
                        joint = pathpatients + name;
                        joint = pathpatients + txt;

                        fstream dfile,admitted;
                        admitted.open("patients//admitted.txt",ios::app);
                        admitted<<endl<<p.name1;
                        dfile.open(joint.getstr(), ios::app);
                        dfile << "NAME: " << p.name1;
                        dfile << endl;
                        dfile << "AGE: " << p.age;
                        dfile << endl;
                        dfile << "GENDER: " << p.gender;
                        dfile << endl;
                        dfile << "Date Of Admission: " << p.doa;
                        dfile << endl;
                        dfile << "Symptoms: " << p.symptoms;
                        dfile << endl;
                        dfile << "Bed Number: " << p.bedno;
                        dfile << endl;

                        cout << endl << "Do you want to go back to the main menu? Y/N: ";
                        char q;
                        cin >> q;
                        if (q == 'y' || q == 'Y') {
                                goto b;
                        }

                }
                else if (x == 4) {
                        c:
                                cout<<endl<<endl<<endl;
                                cout << "Welcome to the Equipment database!" << endl;
                        cout << "Press 1 to check the beds and ventilators" << endl;
                        cout << "Press 2 to check the medicine stock" << endl;
                        cout << "Press 3 to check the PPE stock" << endl;
                        cout << "Press 4 to go to the main menu" << endl;

                        int y;
                        cin >> y;
                        if (y == 1) {
                                fstream pfile;
                                pfile.open("equipment//beds.txt", ios:: in );
                                cout << pfile.rdbuf();

                                cout << endl << "Do you want to go back to the main menu? Y/N: ";
                                char p;
                                cin >> p;
                                if (p == 'y' || p == 'Y') {
                                        goto b;
                                }
                        }
                        else if (y == 2) {
                                fstream pfile;
                                pfile.open("equipment//medicines.txt", ios:: in );
                                cout << pfile.rdbuf();

                                cout << "Do you want to update the medicine stock? Y/N: ";
                                char p;
                                cin >> p;
                                if (p == 'y' || p == 'Y') {
                                        int b, c, d;
                                        ofstream ofs("equipment//medicines.txt", ios::trunc);
                                        cout << "Enter the stock of hydrochloroquine:";
                                        cin >> b;
                                        cout << "Enter the stock of paracetamol:";
                                        cin >> c;
                                        cout << "Enter the stock of anti malarial drugs:";
                                        cin >> d;
                                        ofs << "Hydroxychloroquine: " << b << endl;
                                        ofs << "Paracetamol: " << c << endl;
                                        ofs << "Anti malarial drugs: " << d << endl;
                                        cout << endl << "Medicine stock has been successfully updated";

                                        cout<<endl<<endl<<"Do you want to go back to the previous menu?Y/N: ";
                                        char z;
                                        cin>>z;
                                        if(z=='y'||z=='Y')
                                        {
                                            goto c;
                                        }






                        }
                        }
                        else if (y == 3) {
                                fstream pfile;
                                pfile.open("equipment\\ppe.txt", ios:: in );
                                cout << pfile.rdbuf();
                                cout << endl << "Do you want to update the PPE stock? Y/N: ";
                                char p;
                                cin >> p;
                                if (p == 'y' || p == 'Y') {
                                        int b, c, d;
                                        ofstream ofs("equipment//ppe.txt", ios::trunc);
                                        cout << "Enter the stock of masks:";
                                        cin >> b;
                                        cout << "Enter the stock of sanitizer:";
                                        cin >> c;
                                        cout << "Enter the stock of gloves:";
                                        cin >> d;
                                        ofs << "Masks: " << b << endl;
                                        ofs << "Sanitizer:" << c << endl;
                                        ofs << "Gloves: " << d;
                                        cout << endl << "You have successfully updated the PPE stock!";

                                        cout<<endl<<endl<<"Do you want to go back to the previous menu?Y/N: ";
                                        char z;
                                        cin>>z;
                                        if(z=='y'||z=='Y')
                                        {
                                            goto c;
                                        }

                                }
                        }
                        else if(y==4)
                        {
                            goto b;
                        }
                        else {
                                char waste;
                                cout << "Invalid Input";
                                cin >> waste;
                                goto c;

                        }

                }

        }

        else {

                cout << "Access Denied!";
                cout << endl << "Do you want to try again?Y/N: ";
                char p;
                cin >> p;
                if (p == 'y' || p == 'Y') {
                        goto a;
                }

        }

}


