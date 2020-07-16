#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	//Sandbox* sandbox = new Sandbox();
	//Hazel::Log::Init();
	/*Hazel::Log::GetCoreLogger()->warn("Initialized log!");
	Hazel::Log::GetClientLogger()->info("Hello~");*/

	//HZ_CORE_WARN("Initialized log!");
	//int a = 5;
	//HZ_INFO("Hello,var = {0}", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif //  HZ_PLATFORM
