#include <error.hpp>
#include <iostream>

Error::Error(long unsigned int code, bool fatal, std::string what) {
	this->code=code;
	this->fatal=fatal;
	this->what=what;
}
void Error::Throw(int line){
	std::cout << "[MT-" << this->code << "] " << this->what << " en la linea: " << line << std::endl;
	if(this->fatal){exit(-1);}
}