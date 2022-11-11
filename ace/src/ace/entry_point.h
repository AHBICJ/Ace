#pragma once

#ifdef ACE_PLATFORM_WINDOWS

extern ace::Application* ace::CreateApplication();

int main(int argc, char** argv) {
	auto app = ace::CreateApplication();
	app->Run();
	delete app;
}

#endif