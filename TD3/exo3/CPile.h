#ifndef _CPile_h
#define _CPile_h
#include "CList.h"
class CPile : public List {
	public:
		CPile() {};
		~CPile() {};

		CPile& operator>(int& value);
};
#endif
