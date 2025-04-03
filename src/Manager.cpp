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
	cout << "Enter command ('help' for the list of available commands) : ";
}
#include <filesystem>
#include <iostream>

void Manager::showHelp() const
{
    std::ifstream file("help.txt");

    if (!file) {
        cerr << "Error opening help.txt from:" << std::filesystem::current_path().string() << "\n";
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        cout << line << endl;
    }
}
//-------------------------------------------
void Manager::readCommand(std::string& command, int& num1, int& num2)
{
	cin >> command;
	if (command != "exit" && command != "help")	// if its exit or help, no need to read num1
		cin >> num1;

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
		 m_eval.calculate(m_operations.at(num1), num2);
	 }
	 else if (command == "scal") {
		 m_operations.push_back(std::make_shared<Scal>(num1));
	 }

	 else if (command == "comp") {
		 m_operations.push_back(std::make_shared<Comp>(m_operations.at(num1), m_operations.at(num2)));
	 }
	 else if (command == "add") {
		 m_operations.push_back(std::make_shared<Add>(m_operations.at(num1), m_operations.at(num2)));
	 }
	 else if (command == "sub") {
		 m_operations.push_back(std::make_shared<Sub>(m_operations.at(num1), m_operations.at(num2)));
	 }
	 else if (command == "del") {
		 m_operations.erase(m_operations.begin() + num1);
	 }
	 else if (command == "help") {
		 showHelp();
	 }
	 else 
		 cout << "Unknown command\n";
	
}
