#include "Serializer.hpp"

int main()
{
	Data ptr2;
	ptr2.name = "Michaela Mustermann";
	ptr2.sexe = "W";
	ptr2.next = NULL;

	Data ptr;
	ptr.name = "Max Mustermann";
	ptr.sexe = "M";
	ptr.next = &ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << &ptr <<
				"\n\tname: " << ptr.name <<
				"\n\tage: " << ptr.sexe <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.sexe <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Serializer a;

	Data *reserialized_struct = a.deserialize(a.serialize(&ptr));

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << reserialized_struct <<
				"\n\tname: " << reserialized_struct->name <<
				"\n\tage: " << reserialized_struct->sexe <<
				"\n\taddress next: " << reserialized_struct->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.sexe <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	return (0);
}