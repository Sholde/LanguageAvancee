#ifndef _List_h
#define _List_h
typedef struct node {
	int number;
	struct node* next;
}* nodePtr;

class List {
	private:
		nodePtr current;
		int size;
	
	public:
		List();
		List(const int number);
		List(List const& aList);
		~List();

		const int getSize();
		List& add(int indice, int number);
		List& remove(int indice);
		List& operator =(List const& aList);
		List operator +(List const& aList);
		List operator -(List const& aList);
		int& operator [](const int number);
		bool operator ==(List const& aList);
		bool operator !=(List const& aList);
		friend ostream& operator<<(ostream& o, List const& l);
		friend istream& operator>>(istream& in, List const& aList);
		
};
#endif
