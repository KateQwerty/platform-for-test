#include <string>
#include <vector>
#include "TestModel.h"
#include <fstream>
#include <iostream>
#include <exception>
#include <algorithm>
#include <iomanip>

class Test {

private:
	std::vector<TestModel> testData;
	void getTestData(std::string);
	TestModel decodeQuestionString(std::string);
	int getNumber(int, int);
public:
	void chooseTest();
	void startTest(std::string);
};
