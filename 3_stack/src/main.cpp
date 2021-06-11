#include <iostream>
#include "Stack.h"


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
int main()
{
	std::string parenthesis_check = "(a+b)(a+b))";
	Stack<char> stack(parenthesis_check.length());

	std::cout << paranthesisMatch(stack,parenthesis_check) << std::endl;

	return 0;
}
