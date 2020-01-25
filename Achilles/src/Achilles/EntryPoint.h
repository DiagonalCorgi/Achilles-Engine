#pragma once

#ifdef AC_PLATFORM_WINDOWS

extern Achilles::Application* Achilles::CreateApplication();

int main(int argc, char** argv) {

	auto app = Achilles::CreateApplication();
	app->Run();
	delete app;
}
#endif 
