#pragma once

#include "Person.h"

enum class Operation
{
	Exit,

	AddPerson,
	RemovePerson,
	SearchPerson,
	Something
};

Operation getOperation();
void AddPerson(Person* people, int index);
void DoSomething();
