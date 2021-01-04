#include "NortException.h"
#include <sstream>

NortException::NortException( int line, const char* file ) noexcept
	:
	line( line ),
	file( file )
{}

const char* NortException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* NortException::GetType() const noexcept
{
	return "Nort Exception";
}

int NortException::GetLine() const noexcept
{
	return line;
}

const std::string& NortException::GetFile() const noexcept
{
	return file;
}

std::string NortException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;
	return oss.str();
}