#include <Windows.h>

#include <string>
#include <sstream>
using namespace std;

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nShowCmd)
{
	stringstream ss;
	ss << "_MSC_VER" << ":" << _MSC_VER << std::endl;

	MessageBox(NULL, ss.str().c_str(), "showvcvarsw", MB_ICONINFORMATION);
	return 0;
}



