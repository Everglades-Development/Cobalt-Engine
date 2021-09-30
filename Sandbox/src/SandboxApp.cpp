#include <Cobalt.h>


class Sandbox : public Cobalt::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{

	}
};

Cobalt::Application* Cobalt::CreateApplication()
{
	return new Sandbox();
}