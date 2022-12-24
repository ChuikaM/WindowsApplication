#include<iostream>

#define _WIN32_WINNT 0x0A00
#include<Windows.h>
int main() {
	HWND window = GetConsoleWindow();

	HDC dc = GetDC(window);
	char c[1024] = "Hello world";
	do {
		SelectObject(dc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(dc, RGB(255, 0, 0));
		Rectangle(dc, 100, 100, 200, 200);

		Ellipse(dc, 10, 10, 100, 100);
		TextOutA(dc,20,50,c,strlen(c)+1);
	} while (GetKeyState(VK_ESCAPE) >= 0);

	return 0;
}