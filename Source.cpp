#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double Ball_Area_in_N_dimension(int Dimension, int Numb_of_point) {
	
	int Numb_of_point_inside = 0;
	int Point;
	int Spesial_to_summ = 0;

	for (int j = 1; j <= Numb_of_point; ++j) {                    //Цикл, который проверяет каждую точку 
		
		cout << "Point " << j << " : ";
		
		for(int i = 1; i <= Dimension; ++i) {                     //Цикл, который находит сумму квадратов координат точки
			
			Point = rand();
			cout << Point << '\t';
			Spesial_to_summ += (Point * Point);
		
		}
		
		cout << '\n';

		if (Spesial_to_summ <= RAND_MAX * RAND_MAX)               //Условие на то, лежит ли точка внутри шара или нет
			Numb_of_point_inside += 1;
	
	}
	
	return Numb_of_point_inside / Numb_of_point;
}

int main() {

	srand(time(nullptr));
	cout << '\n' << "Ball Area : "
		 << Ball_Area_in_N_dimension(2, 5) << '\n'
		 << '\n' << RAND_MAX*RAND_MAX << '\n' << RAND_MAX * RAND_MAX << '\n';

	system("PAUSE");
	return 0;
}