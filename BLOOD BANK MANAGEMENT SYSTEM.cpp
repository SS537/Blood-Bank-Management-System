#include<bits/stdc++.h>

using namespace std;

typedef struct blood_management{

    string name;
    string id;
    string birth_date;
    string phone_number;
    string address;
    string blood_group;

}blood_management;

int n = 0;
blood_management bm[101];

void insert_data(){

    char c;

    while(1){

        cout<<"\t\t\t\t\tEnter Donor Name : ";
        getline(cin,bm[n].name);
        cout<<"\t\t\t\t\tEnter Donor ID : ";
        getline(cin,bm[n].id);
        cout<<"\t\t\t\t\tEnter Donor Blood Group : ";
        getline(cin,bm[n].blood_group);
        cout<<"\t\t\t\t\tEnter Donor Date of Birth : ";
        getline(cin,bm[n].birth_date);
        cout<<"\t\t\t\t\tEnter Donor Phone Number : ";
        getline(cin,bm[n].phone_number);
        cout<<"\t\t\t\t\tEnter Donor Address : ";
        getline(cin,bm[n].address);

        n++;

        cout<<endl<<"\t\t\t\t\tEnter X for go back to menu, otherwise  y : ";
        cin>>c;

        getchar();

        if(c == 'x' || c == 'X')
            break;

        cout<<endl;

    }

    system("clear");


}

void display_data(){

    int i;

    for(i=0; i<n; i++){

        cout<<"\t\t\t\t\tName : "<<bm[i].name<<endl;
        cout<<"\t\t\t\t\tID : "<<bm[i].id<<endl;
        cout<<"\t\t\t\t\tBlood Group : "<<bm[i].blood_group<<endl;
        cout<<"\t\t\t\t\tDate of Birth : "<<bm[i].birth_date<<endl;
        cout<<"\t\t\t\t\tPhone Number : "<<bm[i].phone_number<<endl;
        cout<<"\t\t\t\t\tAddress : "<<bm[i].address<<endl;

        cout<<endl;

    }

    char c;

    cout<<endl<<"\t\t\t\t\tEnter X for go back to menu : ";
    cin>>c;

    if(c == 'x' || c == 'X')
        system("clear");

}

void search_donor(){

    string s;

    cout<<"\t\t\t\t\tEnter Blood Group for Find Donor : ";
    cin>>s;

    cout<<endl;

    for(int i=0; i<n; i++){

        if(s == bm[i].blood_group){

            cout<<"\t\t\t\t\tName : "<<bm[i].name<<endl;
            cout<<"\t\t\t\t\tID : "<<bm[i].id<<endl;
            cout<<"\t\t\t\t\tBlood Group : "<<bm[i].blood_group<<endl;
            cout<<"\t\t\t\t\tDate of Birth : "<<bm[i].birth_date<<endl;
            cout<<"\t\t\t\t\tPhone Number : "<<bm[i].phone_number<<endl;
            cout<<"\t\t\t\t\tAddress : "<<bm[i].address<<endl;

        }

        cout<<endl;

    }

    char c;

    cout<<endl<<"\t\t\t\t\tEnter X for go back to menu : ";
    cin>>c;

    if(c == 'x' || c == 'X')
        system("clear");


}

void delete_data(){

    string data;
    int pos,i,f;
    char c;

    while(1){

        f=0;

        cout<<"\t\t\t\t\tEnter ID : ";
        cin>>data;

        for(i=0; i<n; i++){

            if(data == bm[i].id){

                pos = i;
                f++;
                break;

            }

        }

        if(f > 0){

            for(i=pos; i<n-1; i++){

                bm[i] = bm[i+1];

            }

            n--;

        }

        else
            cout<<"\t\t\t\t\tData Couldn't Found"<<endl;

        cout<<endl<<"\t\t\t\t\tEnter X for go back to menu, otherwise  y : ";
        cin>>c;

        getchar();

        if(c == 'x' || c == 'X')
            break;

        cout<<endl;

    }

    system("clear");

}

void modify_data(){

    int pos,i;
    char c;
    string data;

    while(1){

        pos = 0;

        cout<<"\t\t\t\t\tEnter ID : ";
        cin>>data;

        getchar();

        cout<<endl;

        for(i=0; i<n; i++){

            if(data == bm[i].id){

                pos = i;

            }

        }

        cout<<"\t\t\t\t\tEnter Donor Name : ";
        getline(cin,bm[pos].name);
        cout<<"\t\t\t\t\tEnter Donor ID : ";
        getline(cin,bm[pos].id);
        cout<<"\t\t\t\t\tEnter Donor Blood Group : ";
        getline(cin,bm[pos].blood_group);
        cout<<"\t\t\t\t\tEnter Donor Date of Birth : ";
        getline(cin,bm[pos].birth_date);
        cout<<"\t\t\t\t\tEnter Donor Phone Number : ";
        getline(cin,bm[pos].phone_number);
        cout<<"\t\t\t\t\tEnter Donor Address : ";
        getline(cin,bm[pos].address);

        cout<<endl<<"\t\t\t\t\tEnter X for go back to menu, otherwise  y : ";
        cin>>c;

        getchar();

        if(c == 'x' || c == 'X')
            break;

        cout<<endl;

    }

    system("clear");

}

int main (){

    int k;

    while(1){

        cout<<endl<<endl<<"\t\t\t############## Blood Bank Management System ##############\t\t\t"<<endl<<endl<<endl;

        cout<<"\t\t\t\t\t1.Add New Data."<<endl;
        cout<<"\t\t\t\t\t2.List of Donor."<<endl;
        cout<<"\t\t\t\t\t3.Search for Donor."<<endl;
        cout<<"\t\t\t\t\t4.Delete Donor Data."<<endl;
        cout<<"\t\t\t\t\t5.Edit Donor Data."<<endl;
        cout<<"\t\t\t\t\t6.Exit."<<endl;

        cout<<endl<<"\t\t\t\t\tEnter Any Key-word : ";
        cin>>k;

        cout<<endl;

        getchar();

        if(k == 1) insert_data();

        else if(k == 2) display_data();

        else if(k == 3) search_donor();

        else if(k == 4) delete_data();

        else if(k == 5) modify_data();

        else if(k == 6) break;

        else cout<<"\t\t\t\t\tWrong Key-word !!!!!"<<endl;

    }

    cout<<endl<<endl<<"\t\t\t##########################################################\t\t\t"<<endl;

    return 0;

}
