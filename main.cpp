#include <bits/stdc++.h>
#include <cstdio>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <cstring>
#include <ctime>
#define S(i) Sleep(i)
#define cls system("cls");
#define ei else if
using namespace std;
//项目名称
long long recentnum = 15, projectnum = 15, settingnum = 3;
string recentfilename[1010100]  = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
string projectfilename[1010100] = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
string settingfilename[1010100] = {" ", "声音", "亮度", "关于"};
//--------
HWND hwnd = GetConsoleWindow();
/*
HANDLE HOUT = GetStdHandle(STD_OUTPUT_HANDLE);    //获得控制台句柄
COORD NewSize = GetLargestConsoleWindowSize(HOUT);//获得控制台最大坐标，坐标以字符数为单位
NewSize.X -= 1;
NewSize.Y -= 1;    //可以不加，不加时显示滚动条
SetConsoleScreenBufferSize(HOUT, NewSize); //设置控制台缓冲区大小
SMALL_RECT DisplayArea={0,0,0,0};
DisplayArea.Right = NewSize.X;
DisplayArea.Bottom = NewSize.Y;
SetConsoleWindowInfo(HOUT, TRUE, &DisplayArea);    //设置控制台大小
//控制台已经最大化，但是初始位置不在屏幕左上角，添加如下代码
HWND hwnd = GetConsoleWindow();
ShowWindow(hwnd, SW_MAXIMIZE);    //窗体最大化
*/
void SetColorAndBackground(int ForgC, int BackC) {//单个字的颜色
//1深蓝，2深绿，3深青，4深红，5深紫，6深黄，7灰白（默认），8深灰
//9浅蓝，10浅绿，11浅青，12浅红，13浅紫，14浅黄，15白色，0黑色
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void gotoxy(long long x, long long y) {
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct CMDset {
	void setfont(int size) {//字体、大小、粗细
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof cfi;
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;
		cfi.dwFontSize.Y = size;//设置字体大小
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;//字体粗细 FW_BOLD,原始为FW_NORMAL
		wcscpy_s(cfi.FaceName, L"Minecraft AE");//设置字体，必须是控制台已有的
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_FONT_INFO consoleCurrentFont;
		GetCurrentConsoleFont(handle, FALSE, &consoleCurrentFont);
	}
} cmdset;
struct Start {
	void powerOn() {
		ShowWindow(hwnd, SW_MAXIMIZE);
		cmdset.setfont(30);
		cout << "\n  ";
		SetColorAndBackground(4, 12);
		cout << "W";
		SetColorAndBackground(6, 14);
		cout << "H";
		SetColorAndBackground(2, 10);
		cout << "S";
		SetColorAndBackground(1, 9);
		cout << "T";
		SetColorAndBackground(13, 5);
		cout << "U";
		SetColorAndBackground(0, 0);
		cout << " ";
		SetColorAndBackground(15, 8);
		cout << "Studio";
		SetColorAndBackground(7, 0);
		S(5000);
		cls
		gotoxy(13, 10);
		cout << "S";
		Sleep(1000);
		cout << "\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS \b";
		S(100);
		cout << "l";
		S(100);
		cout << "y";
		S(100);
		cout << "t";
		S(100);
		cout << "h";
		S(100);
		cout << "e";
		S(100);
		cout << "r";
		S(100);
		cout << "i";
		S(100);
		cout << "n";
		S(100);
		cout << "  O";
		S(100);
		cout << "S";
		S(4000);
		system("cls");
		cmdset.setfont(16);
		return;
	}
	void Lock(string pass) {
		while (true) {
			cout << "请输入密码:";
			string in;
			cin >> in;
			if (in == pass) {
				return;
			} else {
				cout << "再试一次";
				Sleep(1000);
				system("cls");
			}
		}
	}
	void prepareStart() {
		cout << "\n正在准备Slytherin OS";
		S(500);
		system("ipconfig /flushdns");
		S(100);
		system("ipconfig");
		S(100);
		cls
		cout << "欢迎...";
	}
} start;
//apps
struct Setting {
	void voice() {
		return;
	}
	void light() {
		return;
	}
	void about() {
		//初始化
		gotoxy(0, 3);
		SetColorAndBackground(7, 0);
		for (int i = 0; i < 15; i++) {
			cout << "                              \n";
		}
		gotoxy(0, 3);
		//--------
		cout << "\nPowered by\n\n ";
		S(1000);
		SetColorAndBackground(4, 12);
		cout << " W ";
		SetColorAndBackground(6, 14);
		cout << " H ";
		SetColorAndBackground(2, 10);
		cout << " S ";
		SetColorAndBackground(1, 9);
		cout << " T ";
		SetColorAndBackground(13, 5);
		cout << " U ";
		SetColorAndBackground(0, 0);
		cout << "   ";
		SetColorAndBackground(15, 8);
		cout << " S t u d i o ";
		SetColorAndBackground(7, 0);
		S(3000);
		cout << "\n";
		cout << "\nSlytherin OS 0.2_Build20240805152000 Developer Beta 2\n";
		cout << "\n版本代号000215\n";
		cout << "\nSlytherin OS\n";
		cout << "\n卓然第三帝国联合赞助\n";
		cout << "\n按b返回";
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case 'b': {
						//setting板块初始化
						gotoxy(0, 3);
						SetColorAndBackground(7, 0);
						for (int i = 0; i < 15; i++) {
							cout << "                                                                \n";
						}
						gotoxy(0, 3);
						SetColorAndBackground(0, 7);
						cout << settingfilename[1] << endl;
						SetColorAndBackground(7, 0);
						for (int i = 2; i <= settingnum; i++) {
							cout << settingfilename[i] << endl;
						}
						gotoxy(0, 3);
						//---------------
						return;
					}
				}
			}
		}
	}
} com_whstu_setting;

struct Launcher {
	void title() {
		gotoxy(0, 0);
		cout << "Slytherin OS    ";
		time_t now = time(0);
		tm* localTime = localtime(&now);
		char timeString[100];
		strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M", localTime);
		cout << timeString;
		return;
	}
	void home() { /*主页*/
		//初始化
		gotoxy(0, 3);
		SetColorAndBackground(7, 0);
		for (int i = 0; i < 15; i++) {
			cout << "                              \n";
		}
		//------
		gotoxy(2, 5);
		cout << "Slytherin OS 0";
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case 'b': {
						return;
					}
				}
			}
		}
		return;
	}
	void recent() { /*最近*/
		//初始化
		gotoxy(0, 3);
		SetColorAndBackground(7, 0);
		for (int i = 0; i < 15; i++) {
			cout << "                              \n";
		}
		gotoxy(0, 3);
		SetColorAndBackground(0, 7);
		cout << recentfilename[1] << endl;
		SetColorAndBackground(7, 0);
		for (int i = 2; i <= recentnum; i++) {
			cout << recentfilename[i] << endl;
		}
		int file = 1;
		//---------------
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case ' ': {
						/*运行*/
						break;
					}
					case 'a': {
						return;
					}
					case 'd': {
						return;
					}
					case 's': {
						if (file < recentnum) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << recentfilename[file];
							file++;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << recentfilename[file];
						}
						break;
					}
					case 'w' : {
						if (file > 1) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << recentfilename[file];
							file--;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << recentfilename[file];
						}
						break;
					}
					case 'b': {
						return;
					}
				}
			}
		}
		return;
	}
	void project() {/*文件*/
		//初始化
		gotoxy(0, 3);
		SetColorAndBackground(7, 0);
		for (int i = 0; i < 15; i++) {
			cout << "                              \n";
		}
		gotoxy(0, 3);
		SetColorAndBackground(0, 7);
		cout << projectfilename[1] << endl;
		SetColorAndBackground(7, 0);
		for (int i = 2; i <= projectnum; i++) {
			cout << projectfilename[i] << endl;
		}
		int file = 1;
		//---------------
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case ' ': {
						/*运行*/
						break;
					}
					case 'a': {
						return;
					}
					case 'd': {
						return;
					}
					case 'b': {
						return;
					}
					case 's': {
						if (file < projectnum) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << projectfilename[file];
							file++;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << projectfilename[file];
						}
						break;
					}
					case 'w' : {
						if (file > 1) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << projectfilename[file];
							file--;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << projectfilename[file];
						}
						break;
					}
				}
			}
		}
		return;
	}
	void settings() {/*设置*/
		//初始化
		gotoxy(0, 3);
		SetColorAndBackground(7, 0);
		for (int i = 0; i < 15; i++) {
			cout << "                              \n";
		}
		gotoxy(0, 3);
		SetColorAndBackground(0, 7);
		cout << settingfilename[1] << endl;
		SetColorAndBackground(7, 0);
		for (int i = 2; i <= settingnum; i++) {
			cout << settingfilename[i] << endl;
		}
		int file = 1;
		//---------------
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case ' ': {
						switch (file) {
							case 3: {
								com_whstu_setting.about();
								break;
							}
						}
						break;
					}
					case 'a': {
						return;
					}
					case 'd': {
						return;
					}
					case 'b': {
						return;
					}
					case 's': {
						if (file < settingnum) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << settingfilename[file];
							file++;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << settingfilename[file];
						}
						break;
					}
					case 'w' : {
						if (file > 1) {
							gotoxy(0, 2 + file);
							SetColorAndBackground(7, 0);
							cout << settingfilename[file];
							file--;
							gotoxy(0, 2 + file);
							SetColorAndBackground(0, 7);
							cout << settingfilename[file];
						}
						break;
					}
				}
			}
		}
		return;
	}
	void head() { /*标签栏*/
		//初始化
		title();
		gotoxy(0, 2);
		SetColorAndBackground(7, 0);
		cout << "                                                    ";
		gotoxy(0, 2);
		cout << "  |";
		SetColorAndBackground(0, 7);
		cout << "  主页  ";
		SetColorAndBackground(7, 0);
		cout << " |  最近  |  文件  |  设置  |";
		home();
		int channel = 1;
		//---------------
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case 'a' : {
						if (channel > 1) {
							channel--;
						}
						break;
					}
					case 'd': {
						if (channel < 4) {
							channel++;
						}
						break;
					}
					case 'b': {
						return;
					}
				}
				if (channel == 1) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |";
					SetColorAndBackground(0, 7);
					cout << "  主页  ";
					SetColorAndBackground(7, 0);
					cout << " |  最近  |  文件  |  设置  |";
					home();
				}
				if (channel == 2) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  主页  |";
					SetColorAndBackground(0, 7);
					cout << "  最近  ";
					SetColorAndBackground(7, 0);
					cout << " |  文件  |  设置  |";
					recent();
				}
				if (channel == 3) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  主页  |  最近  |";
					SetColorAndBackground(0, 7);
					cout << "  文件  ";
					SetColorAndBackground(7, 0);
					cout << " |  设置  |";
					project();
				}
				if (channel == 4) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  主页  |  最近  |  文件  |";
					SetColorAndBackground(0, 7);
					cout << "  设置  ";
					SetColorAndBackground(7, 0);
					cout << " |";
					settings();
				}
			}
		}
	}
} launcher;
void shutdownagreement() {
	cls
	cout << "确实要关闭吗？(y/n)";
	while (1) {
		if ( _kbhit() ) {
			char x = _getch();
			switch (x) {
				case 'y': {
					return;
				}
				case 'n':{
					launcher.head();
				}
			}
		}
	}
}

int main() {
	start.powerOn();
	cls
	start.Lock("123456");
	cls
	S(10);
	cout << "欢迎...";
	start.prepareStart();
	S(500);
	cls
	launcher.head();
	shutdownagreement();
	return 0;
}
