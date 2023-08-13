#include "Book.h"
#include "Owner.h"
#include <iostream>
using namespace std;
int main()
{
start:
	int who;
	string difficulty;

	cout << endl;

	cout << "If you are a customer press '1' If you are the owner press '2'" << endl;
	cin >> who;
	if (who == 1) {

	askgrade:
		cout << "What grade are you looking for?" << endl;
		int gr;
		cin >> gr;
		if (gr == 9 || gr == 10) {
			cout << "Here are TYT books for you" << endl;
			Tyt tyt1("Apotemi Publising", "Math", 145.75, 9);
			Tyt tyt2("Sarmal Publishing", "physics", 114.90, 9);
			Tyt tyt3("Aydin Publishing", "Math", 138.75, 9);
			Tyt tyt4("KR Publishing", "Physics", 100, 9);
			Tyt tyt5("Acil Publishing", "Math", 129.99, 10);
			Tyt tyt6("Endemik Publishing", "Physics", 159.99, 10);
			Tyt tyt7("Hiz Publishing", "Math", 169.90, 10);
			Tyt tyt8("Renk Publishing", "Physics", 113.50, 10);

			cout << endl;

			tyt1.getGrade();
			tyt1.getInfo();

			cout << endl;

			tyt2.getGrade();
			tyt2.getInfo();

			cout << endl;

			tyt3.getGrade();
			tyt3.getInfo();

			cout << endl;

			tyt4.getGrade();
			tyt4.getInfo();

			cout << endl;

			tyt5.getGrade();
			tyt5.getInfo();

			cout << endl;

			tyt6.getGrade();
			tyt6.getInfo();

			cout << endl;

			tyt7.getGrade();
			tyt7.getInfo();

			cout << endl;

			tyt8.getGrade();
			tyt8.getInfo();

			cout << "What difficulty are you looking for? ( Type easy or hard )\n";
			cin >> difficulty;
			if (difficulty == "easy")
			{
				cout << "Here are easy level TYT books\n ";
				cout << endl;
				tyt1.getGrade();
				tyt1.getInfo();

				cout << endl;

				tyt2.getGrade();
				tyt2.getInfo();

				cout << endl;

				tyt3.getGrade();
				tyt3.getInfo();

				cout << endl;

				tyt4.getGrade();
				tyt4.getInfo();
			}
			else if (difficulty == "hard")
			{
				cout << "Here are hard level TYT books\n ";
				cout << endl;
				tyt5.getGrade();
				tyt5.getInfo();

				cout << endl;

				tyt6.getGrade();
				tyt6.getInfo();

				cout << endl;

				tyt7.getGrade();
				tyt7.getInfo();

				cout << endl;

				tyt8.getGrade();
				tyt8.getInfo();
			}
		}


		else if (gr == 11 || gr == 12) {
			cout << "Here are AYT books for you" << endl;
			Ayt ayt1("Apotemi Publising", "Math", 145.75, 11);
			Ayt ayt2("Sarmal Publishing", "physics", 114.90, 11);
			Ayt ayt3("Aydin Publishing", "Math", 120.75, 11);
			Ayt ayt4("KR Publishing", "Physics", 155, 11);
			Ayt ayt5("Acil Publishing", "Math", 129.99, 12);
			Ayt ayt6("Endemik Publishing", "Physics", 159.99, 12);
			Ayt ayt7("Hiz Publishing", "Math", 179.90, 12);
			Ayt ayt8("Renk Publishing", "Physics", 140.50, 12);

			cout << endl;

			ayt1.getGrade();
			ayt1.getInfo();

			cout << endl;

			ayt2.getGrade();
			ayt2.getInfo();

			cout << endl;

			ayt3.getGrade();
			ayt3.getInfo();
			cout << endl;

			ayt4.getGrade();
			ayt4.getInfo();

			cout << endl;

			ayt5.getGrade();
			ayt5.getInfo();

			cout << endl;

			ayt6.getGrade();
			ayt6.getInfo();
			cout << endl;

			ayt7.getGrade();
			ayt7.getInfo();
			cout << endl;

			ayt8.getGrade();
			ayt8.getInfo();

			cout << "What difficulty are you looking for? ( Type easy or hard )\n";
			cin >> difficulty;
			if (difficulty == "easy")
			{
				cout << "Here are easy level AYT books\n ";
				cout << endl;

				ayt1.getGrade();
				ayt1.getInfo();

				cout << endl;

				ayt2.getGrade();
				ayt2.getInfo();

				cout << endl;

				ayt3.getGrade();
				ayt3.getInfo();
				cout << endl;

				ayt4.getGrade();
				ayt4.getInfo();

			}
			else if (difficulty == "hard") {
				cout << "Here are hard level AYT books\n";
				cout << endl;

				ayt5.getGrade();
				ayt5.getInfo();

				cout << endl;

				ayt6.getGrade();
				ayt6.getInfo();
				cout << endl;

				ayt7.getGrade();
				ayt7.getInfo();
				cout << endl;

				ayt8.getGrade();
				ayt8.getInfo();

			}
		}
		else
		{
			cout << "PLease enter grades 9,10,11 or 12 ";
			goto askgrade;
		}

	}

	else if (who == 2) {
		int enterattempt = 0;
		int password;

		while (enterattempt < 3)
		{
			cout << "Enter the password" << endl;
			cin >> password;



			if (password == 12345) {

				Own own1("Apotemi Publising", "Math", 145.75, 9, 100);
				Own own2("Sarmal Publishing", "physics", 114.90, 9, 200);
				Own own3("Aydin Publishing", "Math", 138.75, 9, 300);
				Own own4("KR Publishing", "Physics", 100, 9, 400);
				Own own5("Acil Publishing", "Math", 129.99, 10, 500);
				Own own6("Endemik Publishing", "Physics", 159.99, 10, 600);
				Own own7("Hiz Publishing", "Math", 169.90, 10, 700);
				Own own8("Renk Publishing", "Physics", 113.50, 10, 800);
				Own own9("Apotemi Publising", "Math", 145.75, 11, 150);
				Own own10("Sarmal Publishing", "physics", 114.90, 11, 250);
				Own own11("Aydin Publishing", "Math", 120.75, 11, 350);
				Own own12("KR Publishing", "Physics", 155, 11, 450);
				Own own13("Acil Publishing", "Math", 129.99, 12, 550);
				Own own14("Endemik Publishing", "Physics", 159.99, 12, 650);
				Own own15("Hiz Publishing", "Math", 179.90, 12, 750);
				Own own16("Renk Publishing", "Physics", 140.50, 12, 850);


				cout << " Correct password, WELCOME!!\n" << endl;

				own1.getGrade();
				own1.getInfo();
				own1.getStock();

				cout << endl;

				own2.getGrade();
				own2.getInfo();
				own2.getStock();
				cout << endl;
				own3.getGrade();
				own3.getInfo();
				own3.getStock();
				cout << endl;
				own4.getGrade();
				own4.getInfo();
				own4.getStock();
				cout << endl;
				own5.getGrade();
				own5.getInfo();
				own5.getStock();
				cout << endl;
				own6.getGrade();
				own6.getInfo();
				own6.getStock();
				cout << endl;
				own7.getGrade();
				own7.getInfo();
				own7.getStock();
				cout << endl;
				own8.getGrade();
				own8.getInfo();
				own8.getStock();
				cout << endl;
				own9.getGrade();
				own9.getInfo();
				own9.getStock();
				cout << endl;
				own10.getGrade();
				own10.getInfo();
				own10.getStock();
				cout << endl;
				own11.getGrade();
				own11.getInfo();
				own11.getStock();
				cout << endl;
				own12.getGrade();
				own12.getInfo();
				own12.getStock();
				cout << endl;
				own13.getGrade();
				own13.getInfo();
				own13.getStock();
				cout << endl;
				own14.getGrade();
				own14.getInfo();
				own14.getStock();
				cout << endl;
				own15.getGrade();
				own15.getInfo();
				own15.getStock();
				cout << endl;
				own16.getGrade();
				own16.getInfo();
				own16.getStock();
				cout << endl;
				break;
			}

			else {
				cout << "Wrong password, please try again! You have " << 2 - enterattempt << " attempts left." << endl;
			}
			enterattempt++;

			if (enterattempt == 3) {
				cout << "You entered it wrong three times, Returning to main menu. " << endl;
				goto start;
			}

		}

	}

	else {
		cout << "Please enter 1 or 2" << endl;
		goto start;
	}


	return 0;
}