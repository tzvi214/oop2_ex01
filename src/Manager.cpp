#include "Manager.h"
#include "Manager.h"
#include "Manager.h"
#include "Manager.h"
#include "Manager.h"

Manager::Manager() {
	m_operations.push_back(std::make_shared<Id>());
	m_operations.push_back(std::make_shared<Transpose>());
}
//-------------------------------------------
void Manager::run()
{
	while(!m_need2exitFromLoop) {
		showMenu();
		std::string command;
		int num1, num2;
		readCommand(command, num1, num2);
		processCommand(command, num1, num2);
	}

}
//-------------------------------------------
void Manager::showMenu()
{
	cout << "List of available matrix operations :\n";
	for (int i = 0; i < m_operations.size(); i++) {
		cout << i << ". " << m_operations[i]->getName() << endl;
	}
	cout << "Enter command ('help' for the list of available commands) : \n";

}
//-------------------------------------------
void Manager::readCommand(std::string& command, int& num1, int& num2)
{
	cin >> command >> num1;
	if (std::cin.peek() != '\n')  // check if there is a second number
		std::cin >> num2;
}
//-------------------------------------------
void Manager::processCommand(std::string& command, int& num1, int& num2)
{
	
	 if (command == "exit") {
		m_need2exitFromLoop = true;
	    }
	 else if (command == "eval") {
	 
	 }
	
}
