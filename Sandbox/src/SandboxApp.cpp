#include <Achilles.h>


class Sandbox : public Achilles::Application
{
public: 
	Sandbox()
	{
	}

	~Sandbox()
	{
	} 
};

Achilles::Application* Achilles::CreateApplication()
{
	return new Sandbox();
}