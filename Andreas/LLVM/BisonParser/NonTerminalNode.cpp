#include "NonTerminalNode.h"

#include <iostream>

NonTerminalNode::NonTerminalNode(std::string givenValue):name(givenValue)
{
}

NonTerminalNode::~NonTerminalNode()
{
//	for(int i=0; i<children.size(); i++)
//		delete(children.at(i));
}

/*void NonTerminalNode::incrementLevelCounter()
{
} */

int NonTerminalNode::isTerminalNode()
{
	return 0;
}

void NonTerminalNode::printNodeValue()
{
	if(this->name.size())
	{	
		std::cout << "NonTerminal Value " << this->name << std::endl;
	}
	else
		std::cout << "This node has no value" << std::endl;
}

Value* NonTerminalNode::codegen()
{
	for(AbstractNode* i: this->children)
	{
		std::cout << "Hello From NonTerminalNode::codegen() NodeName is "<< this->name << std::endl;
		Value* valueP = i->codegen();
		if(valueP)
			return valueP;
	}
	std::cout << "NonTerminalNode " << this->name << std::endl;
	return NULL;
}
