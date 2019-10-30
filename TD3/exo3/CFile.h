#ifndef _CFile_h
#define _CFile_h
#include "CList.h"

class CFile : public List {
	public:
		CFile() {};
		~CFile() {};

		CFile& operator>(int& value);
		
};
#endif
