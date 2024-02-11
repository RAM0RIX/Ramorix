#include <Ramorix.h>

class Sandbox : public Ramorix::Application
{
public:
	Sandbox()	
	{
		
	}

	~Sandbox()
	{
		
	}
};

Ramorix::Application* Ramorix::CreateApplication()
{
	return new Sandbox();
}