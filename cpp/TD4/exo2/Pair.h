#ifndef _Pair_h
#define _Pair_h
#include <type_traits> // static_assert
template<typename T>
class Pair {
	private:
		static_assert(std::is_same<T, int>::value || std::is_same<T, float>::value,
                "fonction pas encore implémentée pour le type donné");
		T first;
		T second;
	public:
		Pair() {
			first = 0;
			second = 0;
		};
		Pair(T& f, T&s) {
			first = f;
			second = s;
		};
		~Pair() {};

		T& getMax() {
			if(first < second)
				return second;
			else
				return first;
		};
};
#endif
