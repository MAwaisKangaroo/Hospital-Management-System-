#include <iostream>
using namespace std;

struct Doctor{
    int id;
    string name;
    char gender;
    string specialization;
    
};
struct Patient{
    int id;
    string name;
    int age;
    string gender;
    string bloodgroup;
    string address;
    string disease;
    
};
struct Appoinment{
    int appoinmentid;
    int patientid;
    int doctorid;
    string date;
    
};
struct Bill{
    int billid;
    int patientid;
    float medicineCharges;
    float treatmentcharges;
    float totalammount;
    bool paid;
    
};
Doctor doctor[50];
Patient patient[200];
Appoinment appoinment[200];
Bill bill[200];
int Dcount=0;
int Pcount=0;
int Bcount=0;
int Acount=0;

void Addoctor(){
    cin.ignore(1000,'\n');
    cout<<"Enter the information of Doctor to add."<<endl;
    cout<<"Enter Doctor Name :";
    getline(cin, doctor[Dcount].name);
    cout<<"Enter Doctor Gender :";
    cin.get(doctor[Dcount].gender);
    cin.ignore(1000,'\n');
    cout<<"Enter Doctor Specialization :";
    getline(cin, doctor[Dcount].specialization);
    doctor[Dcount].id=Dcount+1;
    Dcount++;
    cout<<"\nDoctor Add Successfully.";
    
}
void Rmdoctor(){
    int id;
    cout <<"Enter Doctor ID to Remove :";
    cin>>id;
    for (int i=0; i<Dcount; i++) {
        if(doctor[i].id==id){
            for(int j=i;j<Dcount-1;j++){
                doctor[j]=doctor[j+1];
            }
            Dcount--;
            cout<<"Doctor Remove Successfully"<<endl;
            break;
        }
    }
}
void Vdocotor(){
    cout<< "\nID\t\tDoctor Name\t\tSpecialization\n";
    for(int i=0;i<Dcount;i++){
        cout<<doctor[i].id<<"\t\t"<<doctor[i].name<<"\t\t"<<doctor[i].specialization<<endl;
    }
}
void Vpatient(){
    cout<< "\nID\t\tPatient Name\t\tAge\t\tBlood Group\t\tDisease";
    for(int i=0;i<Pcount;i++){
        cout<<patient[i].id<<"\t\t"<<patient[i].name<<"\t\t"<<patient[i].age<<"\t\t"<<patient[i].bloodgroup<<"\t\t"<<patient[i].disease<<endl;
    }
}
void Vbill(){
    cout<<"\n\tBill ID\t\tPatient ID\t\tTotal Bill\t\tStatus"<<endl;
    for(int i=0;i<Bcount;i++){
        cout<<"\t"<<bill[i].billid<<"\t\t"<<bill[i].patientid<<"\t\t"<<bill[i].totalammount<<"\t\t"<<bill[i].paid<<endl;
    }
}

int main(){
    
   
    
    cout << "welcome to Hospital Manegment  Sytem "<< endl;
    string Username,Password;
    int n,a,b,c,d;
    cout<<"Enter Your Username :";
    getline(cin, Username);
    cout<<"Enter Password :";
    getline(cin, Password);
    if(Username=="Kangaroo Dev" && Password =="A2M1H1")
    {cout<<"Login Successful";
        do {
            cout<< "Select a option to perform task."<<endl;
            cout<<"1.\t Admin Panel."<<endl;
            cout<<"2.\t Patient Panel."<<endl;
            cout<<"3.\t Docotor Appoinment."<<endl;
            cout<<"4.\t Billing section."<<endl;
            cout<<"0.\t Exit."<<endl;
            cin>>n;
            switch (n) {
                case 1:
                    cout<<"Welcome to the Admin Panel."<<endl;
                    do {
                    cout<< "\nSelect an option."<<endl;
                    cout<<"1.\t Add Doctor."<<endl;
                    cout<<"2.\t Remove Doctor."<<endl;
                    cout<<"3.\t View All Doctors."<<endl;
                    cout<<"4.\t View All Patients."<<endl;
                    cout<<"5.\t View All Bills."<<endl;
                    cout<<"0.\t Exit."<<endl;
                    cin>>a;
                        switch (a) {
                            case 1:
                                Addoctor();
                                break;
                            case 2:
                                Rmdoctor();
                                break;
                            case 3:
                                Vdocotor();
                                break;
                            case 4:
                                Vpatient();
                                break;
                            case 5:
                                Vbill();
                                break;
                            case 6:
                                cout <<"Back to main Menu"<<endl;
                                break;
                            default:
                                cout<< "Invalide Input";
                            break;}
                        } while (a!=0);
                    break;
                case 2:
                    cout<<"Welcome to the Patient Panel."<<endl;
                    break;
                case 3:
                    cout<<"Welcome to the Docotr Appoinment Section."<<endl;
                    break;
                case 4:
                    cout<<"Welcome to the Billing section."<<endl;
                    break;
                case 0:
                    cout<<"System Logout."<<endl;
                    break;
                
                default:
                    cout<<"Invalid Input";
                    break;
            }
        } while (n!=0);
    }
    else
        cout<< "Username or Password is Incorrect";
    return 0;
}

