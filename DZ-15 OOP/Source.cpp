#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>



class Worker {
public:
	Worker() {
		Number_Worker++;
		int num = Number_Worker;
		Id_ = num;
		Name_ = "Name_" + std::to_string(num);
		num = rand() % 3;
		Shift_ = Shift(num);
		Salary_ = rand() % 5000 + 70000;
	};
	
	/*void Info_Worker() {
		std::cout << " Id: " << Id_ << "\t Name: " << Name_ << "\t Shift : " << Shift_ << "\t Salary: " << Salary_ << '\n';
	}*/

	int Get_Id() { return Id_; }
	std::string Get_Name() { return Name_; }
	std::string Get_Shift() { return Shift_; }
	long long int Get_Salary() { return Salary_; }

private:
	static int Number_Worker;
	int Id_;
	std::string Name_;
	std::string Shift_;
	long long int Salary_;

	std::string Shift(int vol) {
		switch (vol)
		{
		case 0: return "Day"; break;
		case 1: return "Night"; break;
		case 2: return "DayOff"; break;
		}
	}
};

int Worker::Number_Worker = 0;

class Workers
{
public:
	Workers(int counter) {
		for (int i = 0; i < counter; i++)
			Wk.push_back(*New_Worker());
	}
	std::vector<Worker> Wk;
	
private:
	Worker* New_Worker() {
		Worker* tmp = new Worker();
		return tmp;
	}
	
};

class PrintWorkersData
{
public:
	static void Workers_Info(Workers& Works, std::ostream& out = std::cout) {
		for (auto p : Works.Wk) {
			out << " Id: " << p.Get_Id() << "\t Name: " <<p.Get_Name() << "\t Shift : " << p.Get_Shift() << "\t Salary: " << p.Get_Salary() << '\n';
		}
	}



	/*static void Get_Worker_Max_Salary(Workers& Works,int num, std::string shift,std::ostream & out =std::cout) {
		std::vector<Worker> tmp;
		std::for_each(Wk.begin(), Wk.end(), [&tmp, &shift](Worker& worker) {
			if (worker.Get_Shift() == shift)
				tmp.push_back(worker);
			});
		std::sort(tmp.begin(), tmp.end(), [](Worker& obj1, Worker& obj2)-> bool { return obj1.Get_Salary() > obj2.Get_Salary(); });
		if (tmp.size() < num) {
			num = tmp.size();
			std::cout << " zzzzzzz\n";
		}
		for (auto i = tmp.begin(); i != tmp.begin() + num; i++)
			i->Info_Worker();
	}
	void Get_Worker_Max_Salary(int num) {
		std::sort(Wk.begin(), Wk.end(), [](Worker& obj1, Worker& obj2)-> bool { return obj1.Get_Salary() > obj2.Get_Salary(); });
		for (auto i = Wk.begin(); i != Wk.begin() + num; i++)
			i->Info_Worker();
	}
	void Get_Worker_Min_Salary(int num, std::string shift) {
		std::vector<Worker> tmp;
		std::for_each(Wk.begin(), Wk.end(), [&tmp, &shift](Worker& worker) {
			if (worker.Get_Shift() == shift)
				tmp.push_back(worker);
			});
		std::sort(tmp.begin(), tmp.end(), [](Worker& obj1, Worker& obj2)-> bool { return obj1.Get_Salary() < obj2.Get_Salary(); });
		if (tmp.size() < num) {
			num = tmp.size();
			std::cout << " zzzzzzz\n";
		}
		for (auto i = tmp.begin(); i != tmp.begin() + num; i++)
			i->Info_Worker();
	}
	void Get_Worker_Min_Salary(int num) {
		std::sort(Wk.begin(), Wk.end(), [](Worker& obj1, Worker& obj2)-> bool { return obj1.Get_Salary() < obj2.Get_Salary(); });
		for (auto i = Wk.begin(); i != Wk.begin() + num; i++)
			i->Info_Worker();
	}*/


	

};







int main() {
	srand(time(NULL));

	
	Workers wer(14);
	PrintWorkersData::Workers_Info(wer);







	/*wer.Workers_Info();
	std::cout << "==================================\n";
	wer.Worker_Shift("Day");
	std::cout << "==================================\n";
	wer.Worker_Shift("Night");
	std::cout << "==================================\n";
	wer.Get_Worker_Max_Salary(3, "Day");
	std::cout << "==================================\n";
	wer.Get_Worker_Max_Salary(3, "Night");
	std::cout << "==================================\n";
	wer.Get_Worker_Max_Salary(5);
	std::cout << "==================================\n";
	wer.Get_Worker_Min_Salary(3, "Day");
	std::cout << "==================================\n";
	wer.Get_Worker_Min_Salary(3, "Night");
	std::cout << "==================================\n";
	wer.Get_Worker_Min_Salary(4);*/

	return 0;
}