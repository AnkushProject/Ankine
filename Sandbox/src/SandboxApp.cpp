#include<Ankine.h>

class Sandbox : public Ankine::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}

};

Ankine::Application* Ankine::CreateApplication()
{
	return new Sandbox();
}