// Sandbox.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <ace.h>

class Sandbox : public ace::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

ace::Application* ace::CreateApplication() {
	return new Sandbox();
}