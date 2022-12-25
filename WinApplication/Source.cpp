#include<iostream>

#define _WIN32_WINNT 0x0A00
#include<Windows.h>
int main() {
	//std::unique_ptr<LPPOINT> lpp_ptr = std::make_unique<LPPOINT>();
	LPPOINT* lpp = new LPPOINT;

	HWND window = GetConsoleWindow();

	HDC dc = GetDC(window);

	
	char c[1024];
	do {
		//system("cls");
		SelectObject(dc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(dc, RGB(255, 0, 0));
		Rectangle(dc, 100, 100, 200, 200);

		//Ellipse(dc, 10, 10, 100, 100);
		//TextOutA(dc,20,50,c,strlen(c)+1);
		//GetCursorPos(*lpp);
		//std::cout << "x: " << lpp[0]->x << " y: " << lpp[0]->y;
		//Sleep(100);
	} while (GetKeyState(VK_ESCAPE) >= 0);

	delete lpp;
	return 0;
}