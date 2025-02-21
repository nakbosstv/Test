#include <bits/stdc++.h>
using namespace std; 
typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct abc{
    int id;
    string name;
    date birthday;
    double mark;
} student;
string tachTen(const string &s){
	size_t t=s.find_last_of(" ");
	if(t!=string::npos){
		return s.substr(t+1);
	}
	else{
		return s;
	}
}
int main(){
	int n;
	cin>>n;	
	vector<student>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].id;
		cin.ignore();
		getline(cin,v[i].name);
		cin>>v[i].birthday.day>>v[i].birthday.month>>v[i].birthday.year;
		cin>>v[i].mark;
	}
	for(auto &s:v){
		if(s.mark>=5){
			cout<<s.id<<", ";
			cout<<s.name<<", ";
			cout<<s.birthday.day<<"/"<<s.birthday.month<<"/"<<s.birthday.year<<", ";
			cout<<s.mark<<endl;
		}
	}
		cout<<"**********"<<endl;	
	for(auto &s:v){
		if(s.birthday.year==2003){
			cout<<s.id<<", ";
			cout<<s.name<<", ";
			cout<<s.birthday.day<<"/"<<s.birthday.month<<"/"<<s.birthday.year<<", ";
			cout<<s.mark<<endl;
		}
	}
	cout<<"**********"<<endl;
	for(auto &s:v){
		if(tachTen(s.name)=="Tuan"){
			cout<<s.id<<", ";
			cout<<s.name<<", ";
			cout<<s.birthday.day<<"/"<<s.birthday.month<<"/"<<s.birthday.year<<", ";
			cout<<s.mark<<endl;
		}
	}
	return 0;
}