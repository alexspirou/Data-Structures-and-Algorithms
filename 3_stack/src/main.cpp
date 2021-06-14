#include <iostream>
#include "Stack.h"
#include <string>



bool paranthesisMatch(Stack<char>& stack, std::string parenthesis_check);
std::string infixToPostfix(Stack<char> stack, std::string operation);

int main()
{
	std::string parenthesis_check = "a+b*c+b";
	Stack<char> stack(parenthesis_check.length());
	std::cout << infixToPostfix(stack,parenthesis_check) << std::endl;
	return 0;


}


std::string infixToPostfix(Stack<char> stack, std::string operation)
{
	std::string postfix{};
	//Check if is an operand
	auto isOperand = [] (char c)
	{
		bool flag = (c == '+' || c == '-' || c == '*' || c == '/') ? 0: 1;
		return flag;
	};
	//Return the presidential of each symbol
	auto presidential = [](char c)
	{
		int flag = -1;
		flag = (c == '*' || c == '/') ? 2 : flag;
		flag = (c == '+' || c == '-') ? 1 : flag;
		return flag;

	};

	//Postfix
	for (auto element : operation)
	{

		//Check is an operand
		if(isOperand(element))
		{
			postfix.push_back(element);
	
		}
		if(!isOperand(element))
		{
			//Check is the stack is empty or the symbol has lower presidential
			if(stack.isEmpty() || presidential(element) >= presidential(stack.peek(0)) )
			{

				stack.pushElement(element);

			}

			//Chech if the sympol is lower than the top of the stack
			if(presidential(element) < presidential(stack.peek(0)))
			{
				std::cout << stack.top << std::endl;
				for(int i{0}; i <= stack.top+1; i++)
				{
					//push back in string and then pop the element from the stack
					postfix.push_back(stack.peek(0));
					stack.popElement();
				}

				//Push the element
				stack.pushElement(element);
				std::cout << stack.peek(0) << std::endl;
				
			}
		}
	}
	//Add to string the rest of the stack
	for(int i{0}; i <= stack.top+1; i++)
	{
		//push back in string and then pop the element from the stack
		postfix.push_back(stack.peek(0));
		stack.popElement();
	}
	//rE
	return postfix;
}











bool paranthesisMatch(Stack<char>& stack, std::string parenthesis_check)
{
	bool m_flag = true;

	for(auto index : parenthesis_check)
	{
		
		if(index == '(')
		{
			stack.pushElement(index);
		}
		else if(index == ')')
		{
			if(stack.isEmpty())
			{
				m_flag = false;

			}
			stack.popElement();

		}
		
	}
	if(stack.isEmpty() && m_flag){return true;}
	if(!stack.isEmpty()){return false;}
	if(stack.isEmpty() && !m_flag){return false;}

}