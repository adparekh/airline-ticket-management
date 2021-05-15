#include<iostream>
#include<fstream>
#include<Windows.h>
#include<string>
using namespace std;
int glob = 0;
int global = 10;
char Domestic[4][20] = {
 "MUMBAI"
  ,"DELHI","KOLKATA", "CHENNAI"
};

char International[4][20] = {
"DUBAI"
,"LONDON","MELBOURNE"
};

class DomesticBooking {
  protected: int pnr;
  char flight[10], toja[10], tojd[10], dest[10];
	long int doj;
	int choice, src;
public: void Domesticpnr()
	{
		++glob;
  pnr = glob;
}

int Journeydetails() {
  cout << "\n Enter the date of departure (DDMMYYYY): ";
		cin >> doj;
		cout << "\nDEPARTURE\tARRIVAL" << endl;
		int k=0;
		for (int i = 0; i < 3; i++)
			for (int j = i + 1; j < 3; j++)
			{
				cout << ++k << Domestic[i] << "\t\t" << Domestic[j] << endl;
}

cout << "\n Enter your choice";
		int l;
		cin >>l;
		strcpy(dest, Domestic[l]);
		if (l == 1) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
			cout << "\2.Spicejet\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
			cout << "\3.Jet Airways\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
}

else if (l == 2) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
			cout << "\2.Spicejet\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
			cout << "\3.Jet Airways\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
}

else if (l == 3) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
			cout << "\2.Spicejet\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
			cout << "\3.Jet Airways\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
}

else {
  cout << "\n Wrong Input \n Please Try Again";
			return Journeydetails();
}
	}

int SelectFlight() {
  cout << "\n Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "\nFlight selected:" << endl;
  cout << "Air India" << endl;
			strcpy(flight, "Air India");
			cout << "Departure Time : 08:00" << endl;
			cout << "Arrival Time: 11:05" << endl;
			strcpy(tojd, "8:00");
			strcpy(toja, "11:05");
			break;
		case 2: cout << "\nFlight selected:" << endl;
  cout << "Spicejet" << endl;
			strcpy(flight, "Spicejet");
			cout << "Departure Time : 14:00" << endl;
			cout << "Arrival Time: 17:05" << endl;
			strcpy(tojd, "14:00");
			strcpy(toja, "17:05");
			break;
		case 3: cout << "\nFlight selected:" << endl;
  cout << "Jet Airways" << endl;
			strcpy(flight, "Jet Airways");
			cout << "Departure Time : 19:00" << endl;
			cout << "Arrival Time: 22:05" << endl;
			strcpy(tojd, "19:00");
			strcpy(toja, "22:05");
			break;
		default: cout << "\n Incorrect Input\n Please Try Again";
  return SelectFlight();
}
	}
};

class InternationalBooking {
  protected: int pnri;
  char Flighti[10], tojai[10], tojdi[10], desti[10];
	long int doji;
	int srci, choicei;
public: void pnr_i()
	{
		++global;
  pnri = global;
}

int Journeydetaili() {
  cout << "\n Enter the date of journey (DDMMYYYY): " << endl;
		cin >> doji;
		int k = 0;
		for (int i = 0; i < 3; i++)
			for (int j = i + 1; j < 3; j++)
			{
				cout << ++k << International[i] << "\t\t" << International[j] << endl;
}
cout << "\n Enter your choice: ";
		int p;
		cin >>p;
		strcpy(desti, International[p]);

if (p == 1) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\t\tDeparture:\t\tArrival:\t\tPrice:\t\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t        11:05\t\t        Rs.15000     \t\tRefundable\n";
			cout << "\2.Emirates\t\t14:00\t\t\t17:05\t\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t\t19:00\t\t\t22:05\t\t\tRs.16000\t\tRefundable\n";
}

else if (p == 2) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t11:05\t\tRs.15000\t\tRefundable\n";
			cout << "\2.Emirates\t14:00\t\t17:05\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t19:00\t\t22:05\t\tRs.16000\t\tRefundable\n";
}

else if (p == 3) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t11:05\t\tRs.15000\t\tRefundable\n";
			cout << "\2.Emirates\t14:00\t\t17:05\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t19:00\t\t22:05\t\tRs.16000\t\tRefundable\n";
}

else if (p == 4) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t11:05\t\tRs.15000\t\tRefundable\n";
			cout << "\2.Emirates\t14:00\t\t17:05\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t19:00\t\t22:05\t\tRs.16000\t\tRefundable\n";
}

else if (p == 5) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t11:05\t\tRs.15000\t\tRefundable\n";
			cout << "\2.Emirates\t14:00\t\t17:05\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t19:00\t\t22:05\t\tRs.16000\t\tRefundable\n";
}

else if (p == 6) {
  cout << "\t \t \tFlights Found" << endl << endl;
			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\1.Air India\t\t08:00\t\t11:05\t\tRs.15000\t\tRefundable\n";
			cout << "\2.Emirates\t14:00\t\t17:05\t\tRs.15500\t\tRefundable\n";
			cout << "\3.Qatar Airways\t19:00\t\t22:05\t\tRs.16000\t\tRefundable\n";
}

else {
  cout << "\n Wrong input entered";
			return Journeydetaili();
}
	}

int SelectFlighti() {
  cout << "\n Enter your choice: ";
		cin >> choicei;
		switch (choicei)
		{
		case 1: cout << "\nFlight selected:" << endl;
  cout << "Air India" << endl;
			strcpy(Flighti, "Air India");
			cout << "Departure Time: 08:00" << endl;
			cout << "Arrival Time: 11:05" << endl;
			strcpy(tojdi, "08:00");
			strcpy(tojai, "11:05");
			break;
		case 2: cout << "\nFlight selected:" << endl;
  cout << "Fly Dubai" << endl;
			strcpy(Flighti, "Fly Dubai");
			cout << "Departure Time: 14:00" << endl;
			cout << "Arrival Time: 17:05" << endl;
			strcpy(tojdi, "14:00");
			strcpy(tojai, "17:05");
			break;
		case 3: cout << "\nFlight selected:" << endl;
  cout << "Emirates" << endl;
			strcpy(Flighti, "Emirates");
			cout << "Departure Time : 19:00" << endl;
			cout << "Arrival Time: 22:05" << endl;
			strcpy(tojdi, "19:00");
			strcpy(tojai, "22:05");
			break;
		default: cout << "\n Wrong input entered";
  return SelectFlighti();
}
	}
};

class passenger : public DomesticBooking, public InternationalBooking {
  protected: char Fname[20], Mi, Lname[20], email[20];
  int age, gender;
	long double Contact;
public: void PassengerDetail(int x)
	{
		if (x == 1)
		{
			Journeydetails();
  SelectFlight();
}

else {
  Journeydetaili();
			SelectFlighti();
}

cout << "\n Enter the passenger details: ";
		cout << "\n First Name: ";
		cin >> Fname;
		cout << "\n MIddle Initial: ";
		cin >> Mi;
		cout << "\n Last Name: ";
		cin >> Lname;
}

int Gender() {
cout << "\n Gender\n (1) MALE\n (2) FEMALE\n (3)UNSPECIFIED" << endl;
		cin >> gender;
		if (gender > 3)
		{
			cout << "\n Wrong input entered";
			return Gender();
}
	}

void MoreDetails() {
cout << "Age";
		cin >> age;
		cout << "\n Email ID: ";
		cin >> email;
		cout << "\n Contact Number: ";
		cin >> Contact;
		cout << "\n Details Entered: ";
		cout << "\n Name: " << Fname << Mi << " " << Lname<<endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "Email id: " << email << endl;
		cout << "Contact No.: " << Contact << endl;
}

int getpnr() {
return pnr;
}

int getpnri() {
return pnri;
}

void DisplayDomestic() {
cout << "PNR:" << pnr << endl;
		cout << "Flight: " << flight << endl;
		cout << "Name: " << Fname << " " << Mi << " " << Lname << endl;
		cout << "Date of Journey: " << doj << endl;
		cout << "Departure Time: " << tojd << endl;
		cout << "Arrival Time:" << toja << endl;
}

void DisplayInternation() {
cout << "PNR:" << pnri << endl;
		cout << "Flight:" <<Flighti << endl;
		cout << "Name:" << Fname << " " << Mi << " " << Lname << endl;
		cout << "DOJ:" << doji << endl;
		cout << "Departure Time:" << tojdi << endl;
		cout << "Arrival Time:" << tojai << endl;
}
};

class payment {
protected: long int choice1, bank, card, date, cvv, user_id;
char Password[20];
public: void PaymentDetails()
	{
		cout << "\n Select your payment method:";
cout << "\n (1) DEBIT CARD\n (2) CREDIT CARD\n (3) NET BANKING";
		cout << "\n Enter your choice: ";
		cin >> choice1;
		switch (choice1)
		{
		case 1: cout << "\nEnter card no.: ";
cin >> card;
			cout << "\nEnter expiry date: ";
			cin >> date;
			cout << "\nEnter CVV no.: ";
			cin >> cvv;
			cout << "\n Transaction in Progress";
			Sleep(3000);
			cout << "\n Transaction in Progress";
			Sleep(3000);
			cout << "\nTransaction Successful\n";
			break;
		case 2: cout << "\nEnter card no.: ";
cin >> card;
			cout << "\nEnter expiry date: ";
			cin >> date;
			cout << "\nEnter CVV no.: ";
			cin >> cvv;
			cout << "\n Transaction in Progress";
			Sleep(3000);
			cout << "\n Transaction in Progress";
			Sleep(3000);
			cout << "\nTransaction Successful\n";
			break;
		case 3: cout << "Banks Available: \1.West Pac Bank(1) \2.Nabil Bank(2) \3.Standard Chartered Bank(3) \4.AMP Bank(4) \5.Others(5)";
cout << "\nSelect your bank: ";
			cin >> bank;
			cout << "\nYou have selected: " << bank;
			cout << "\nEnter user id: ";
			cin >> user_id;
			cout << "\nEnter password: ";
			cin >> Password;
			cout << "\nTransaction Successful\n";
			break;
		default: cout << "\nWrong input entered";
return PaymentDetails();
}

	}
};

void CreateDomestic(passenger p) {
ofstream fin("Domestic.dat" , ios::binary | ios::app);
fin.write((char*)& p, sizeof(p));
	fin.close();
}

void CancelTicket(int x) {
passenger p;
	int f = 0;
	ifstream fout("Domestic.dat", ios::binary | ios::app);
ofstream fin("Domestic1.dat", ios::binary | ios::app);
fout.read((char*)& p, sizeof(p));
	while (fout)
	{
		if(p.getpnr()!=x)
			fin.write((char*)& p, sizeof(p));
		else
		{
			p.DisplayDomestic();
			cout << "\n The Following ticket is being cancelled\n An amount of Rs1000 will be refunded";
			f++;
}

fout.read((char*)& p, sizeof(p));
}

if (f == 0) {
cout << "\n Ticket not found";
		fout.close();
		fin.close();
		remove("Domestic.dat");
		rename("Domestic1.dat", "Domestic.dat");
}
}

void Update() {
passenger p;
	fstream fin("Domestic.dat", ios::binary | ios::in | ios::out);
int pnr, found = 0;
	cout << "\n Enter the registration number to be updated: ";
	cin >> pnr;
	while (fin.read((char*)& p, sizeof(p)))
	{
		if (p.getpnr() == pnr)
		{
			p.Journeydetails();
			p.SelectFlight();
			found = 1;
}

if (found == 0)
			cout << "\n No such ticket";
		fin.close();
}
}

void CheckTicket(int x) {
passenger p;
	int f = 0;
	ifstream fout("Domestic.dat", ios::binary);
fout.read((char*)& p, sizeof(p));
	while (fout)
	{
		if (p.getpnr() == x)
		{
			p.DisplayDomestic();
			cout << "\nYour ticket" << endl;
			f++;
			break;
}

fout.read((char*)& p, sizeof(p));
}

fout.close();
	if (f == 0)
		cout << "Ticket not found" << endl;
}

void CreateInternational(passenger p) {
ofstream fin("international.dat", ios::binary | ios::app);
fin.write((char*)& p, sizeof(p));
	fin.close();
}

void CancelTicketi(int x) {
passenger p;
	int f = 0;
	ifstream fout("International.dat", ios::binary | ios::app);
ofstream fin("international1.dat", ios::binary | ios::app);
fout.read((char*)& p, sizeof(p));
	while (fout)
	{
		if (p.getpnri() != x)
			fin.write((char*)& p, sizeof(p));
		else
		{
			p.DisplayInternation();
			cout << "Your Above ticket is being deleted:\n" << "Amount refunded: Rs 1000\n";
			f++;
}

fout.read((char*)& p, sizeof(p));
}

if (f == 0)
		cout << "\nTicket not found\n";
	fout.close();
	fin.close();
	remove("International.dat");
	rename("international1.dat", "International.dat");
}

void Updatei() {
passenger p;
	fstream fin("International.dat", ios::binary | ios::in | ios::out);
int pnri, found = 0;
	cout << "\n Enter the registration number to be updated: ";
	cin >> pnri;
	while (fin.read((char*)& p, sizeof(p)))
	{
		if (p.getpnri() == pnri)
		{
			p.Journeydetaili();
			p.SelectFlighti();
			found = 1;
}

if (found == 0)
			cout << "\n No such ticket";
		fin.close();
}
}

void CheckTicketi(int x) {
passenger p;
	int f = 0;
	ifstream fout("International.dat", ios::binary);
fout.read((char*)& p, sizeof(p));
	while (fout)
	{
		if (p.getpnri() == x)
		{
			p.DisplayInternation();
			cout << "\nYour ticket" << endl;
			f++;
			break;
}

fout.read((char*)& p, sizeof(p));
}

fout.close();
	if (f == 0)
		cout << "Ticket not found" << endl;
}

void DisplayAll() {
char password[10];
			passenger p;
		fstream fdom("Domestic.dat", ios::binary | ios::in);
fstream fint("International.dat", ios::binary | ios::in);
cout << "\n Enter the password: ";
		cin >> password;
		if (strcmp(password, "ADISAUH") == 0)
		{
			cout << "\n DOMESTIC BOOKING DATA\n\n"<<endl;
			while (fdom.read((char*)& p, sizeof(p)))
				p.DisplayDomestic();
			cout << "\n\n\n INTERNATIONAL BOOKING DATA\n\n" << endl;
			while (fint.read((char*)& p, sizeof(p)))
				p.DisplayInternation();
}
	}

int main() {
class DomesticBooking d1;
	class InternationalBooking i1;
	class passenger p1;
	class payment p2;
	int ch, ch1, n;
	char input;
	do
	{
		system("CLS");
		cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
		cout << "\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
		cout << "\t   Book your Flight tickets at affordable prices!" << endl;
		cout << "\t   <><><><><><><><><><><><><><><><><><><><><><><>";

		cout << "\n\n\t\t\t(1)Book Flight \n\t\t\t(2)Cancel Fight \n\t\t\t(3)Check Ticket \n\t\t\t(4)Update Information \n\t\t\t(5)Display \n\t\t\t(6)Exit" << endl;
		cout << "\n\t\t Please enter your choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1: system("CLS");
cout << "\n(1) Domestic Fights \n(2) International Flights" << endl;
			cout << "\nPlease enter your option: ";
			cin >> ch1;
			switch (ch1)
			{
			case 1: p1.Domesticpnr();
p1.PassengerDetail(1);
				p1.Gender();
				p1.MoreDetails();
				p2.PaymentDetails();
				p1.DisplayDomestic();
				CreateDomestic(p1);
				break;
			case 2: p1.pnr_i();
p1.PassengerDetail(2);
				p1.Gender();
				p1.MoreDetails();
				p2.PaymentDetails();
				p1.DisplayInternation();
				CreateInternational(p1);
				break;
			default: cout << "Wrong input entered" << endl;
return main();
}

break;
		case 2:
			system("CLS");
			cout << "\n(1)Domestic Fights\n(2) International Flights" << endl;
			cout << "\nPlease enter your option: ";
			cin >> ch1;
			if (ch1 == 1) {
cout << "Please enter your PNR no.: ";
				cin >> n;
				CancelTicket(n);
}

else if (ch1 == 2) {
cout << "Please enter your PNR no.: ";
				cin >> n;
				CancelTicketi(n);
}

else {
cout << "Wrong input entered\nTry again\n\n\n";
				return main();
}

break;
		case 3:
			system("CLS");
			cout << "\n(1)Domestic Fights \n(2)International Flights" << endl;
			cout << "\nPlease enter your option: ";
			cin >> ch1;
			if (ch1 == 1) {
cout << "Please enter your PNR no.: ";
				cin >> n;
				CheckTicket(n);
}

else if (ch1 == 2) {
cout << "Please enter your PNR no.: ";
				cin >> n;
				CheckTicketi(n);
}

else {
cout << "Wrong input entered";
				return main();
}

break;
		case 4:Update();
			break;
		case 5:DisplayAll();
			break;
		case 6:
			system("CLS");
			cout << "\n\n\nBrought to you by Aditya Parekh";
			return 0;
			break;
		default:
			cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
			return main();
}

cout << "\n\n\nDo you wish to continue:(y/Y)" << endl;
		cin >> input;
}

while (input == 'Y' || input == 'y');
	return 0;
}
