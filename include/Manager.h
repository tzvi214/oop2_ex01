#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>


#include "Transpose.h"
#include "Scal.h"
#include "Id.h"

#include "Comp.h"
#include "Add.h"
#include "Sub.h"

#include "Eval.h"
#include "operation.h"
#include "SqrMatrix.h"

//----------------------
using std::cout;
using std::endl;
using std::cerr;



class Manager
{
public:
	Manager();
	void run();
private:
	std::vector<std::shared_ptr<Operation>> m_operations;
	void showMenu();
	void showHelp() const;
	void readCommand(std::string& command, int& num1, int& num2);
	void processCommand(std::string& command, int& num1, int& num2);
	bool m_need2exitFromLoop = false;
	Eval m_eval{};
};

