#include <Hazel.h>//Hazel/src-> new item Hazel.h only intended for client

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
protected:
private:
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}