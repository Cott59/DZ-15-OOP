#include<iostream>
#include<string>
#include<vector>

static int Number_Worker = 0000;



class Worker {
public:
	Worker() {
		Number_Worker++;
		int num = Number_Worker;
		Id_ = num;
		Name_ = "Name_" + std::to_string(num);
		num = rand() % 2;
		Shift_ = Shift(num);
		Salary_ = rand() % 10000 + 40000;
	};
	
	void Info_Worker() {
		std::cout << " Id: " << Id_ << " Name: " << Name_ << " Shift : " << Shift_ << " Salary: " << Salary_ << '\n';
	}
	
private:
	int Id_;
	std::string Name_;
	std::string Shift_;
	long int Salary_;

	std::string Shift(int vol) {
		switch (vol)
		{
		case 0: return "Day"; break;
		case 1: return "Night"; break;
		case 2: return "Day_off"; break;
		}
	}
};


class Workers
{
public:
	Workers(int counter) {
		Wk.reserve(counter);
		for (auto p : Wk) {
			p = (*New_Worker());
		}
	}
	void Workers_Info() {
		for (auto p : Wk) {
			p.Info_Worker();
		}
	}

private:
	//std::vector<Worker> ::iterator p;
	std::vector<Worker> Wk;
	Worker* New_Worker() {
		auto tmp = new Worker();
		return tmp;
	}
};

int main() {
	srand(time(NULL));

	/*Worker q,w;
	q.Info_Worker();
	w.Info_Worker();*/
	Workers wer(14);
	wer.Workers_Info();

	return 0;
}