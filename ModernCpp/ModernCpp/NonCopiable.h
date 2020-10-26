#pragma once

class NonCopyable
{
protected:
	NonCopyable() = default;
	~NonCopyable() = default;

	// Disable default copy-constructor
	NonCopyable(const NonCopyable&) = delete;
	// Disable default copy assignment operator
	const NonCopyable& operator=(const NonCopyable&) = delete;
};

class SocketWrapper : private NonCopyable
{
public:
	// Constructor
	SocketWrapper();
	// Destructor 
	~SocketWrapper();

	// Move consttructor [OPTIONAL]
	SocketWrapper(SocketWrapper&& rhs);
	// Move-assignment operator  [OPTIONAL]
	SocketWrapper& operator=(SocketWrapper&& rhs);

private:
	// Resource - socket file descriptor 
	int m_sockfd;
};
