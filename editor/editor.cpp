#include "editor.h"
#include "engine.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include <bgfx/bgfx.h>
#include <bgfx/embedded_shader.h>
#include <bx/allocator.h>
#include <vector>
#include "imgui_impl_opengl3.h"

ImGuiIO io;

void Editor::init(GLFWwindow* window) {
  ImGui::CreateContext();
  io = ImGui::GetIO();
  ImGui::StyleColorsDark();
  ImGui_ImplOpenGL3_Init();
  ImGui_ImplGlfw_InitForOther(window, true);

}

void Editor::shutdown() { 
	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext(); 
}

void Editor::frame() {
	ImGui_ImplOpenGL3_NewFrame();
	ImGui_ImplGlfw_NewFrame();
	ImGui::NewFrame();

	if (ImGui::Button("Set as default camera")) {
	}

  ImGui::Render();
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

int main(int argc, char **argv) {
  std::vector<Plugin*> plugins;
  auto plugin = new Editor();
  plugins.push_back(plugin);
  (new Engine())->init(plugins);
  return 0;
}
