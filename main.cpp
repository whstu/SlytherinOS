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
//��Ŀ����
long long recentnum = 15, projectnum = 15, settingnum = 3;
string recentfilename[1010100]  = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
string projectfilename[1010100] = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
string settingfilename[1010100] = {" ", "����", "����", "����"};
//--------
HWND hwnd = GetConsoleWindow();
/*
HANDLE HOUT = GetStdHandle(STD_OUTPUT_HANDLE);    //��ÿ���̨���
COORD NewSize = GetLargestConsoleWindowSize(HOUT);//��ÿ���̨������꣬�������ַ���Ϊ��λ
NewSize.X -= 1;
NewSize.Y -= 1;    //���Բ��ӣ�����ʱ��ʾ������
SetConsoleScreenBufferSize(HOUT, NewSize); //���ÿ���̨��������С
SMALL_RECT DisplayArea={0,0,0,0};
DisplayArea.Right = NewSize.X;
DisplayArea.Bottom = NewSize.Y;
SetConsoleWindowInfo(HOUT, TRUE, &DisplayArea);    //���ÿ���̨��С
//����̨�Ѿ���󻯣����ǳ�ʼλ�ò�����Ļ���Ͻǣ�������´���
HWND hwnd = GetConsoleWindow();
ShowWindow(hwnd, SW_MAXIMIZE);    //�������
*/
void SetColorAndBackground(int ForgC, int BackC) {//�����ֵ���ɫ
//1������2���̣�3���࣬4��죬5���ϣ�6��ƣ�7�Ұף�Ĭ�ϣ���8���
//9ǳ����10ǳ�̣�11ǳ�࣬12ǳ�죬13ǳ�ϣ�14ǳ�ƣ�15��ɫ��0��ɫ
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
	void setfont(int size) {//���塢��С����ϸ
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof cfi;
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;
		cfi.dwFontSize.Y = size;//���������С
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;//�����ϸ FW_BOLD,ԭʼΪFW_NORMAL
		wcscpy_s(cfi.FaceName, L"Minecraft AE");//�������壬�����ǿ���̨���е�
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
			cout << "����������:";
			string in;
			cin >> in;
			if (in == pass) {
				return;
			} else {
				cout << "����һ��";
				Sleep(1000);
				system("cls");
			}
		}
	}
	void prepareStart() {
		cout << "\n����׼��Slytherin OS";
		S(500);
		system("ipconfig /flushdns");
		S(100);
		system("ipconfig");
		S(100);
		cls
		cout << "��ӭ...";
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
		//��ʼ��
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
		cout << "\n�汾����000215\n";
		cout << "\nSlytherin OS\n";
		cout << "\n׿Ȼ�����۹���������\n";
		cout << "\n��b����";
		while (1) {
			if ( _kbhit() ) {
				char x = _getch();
				switch (x) {
					case 'b': {
						//setting����ʼ��
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
	void home() { /*��ҳ*/
		//��ʼ��
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
	void recent() { /*���*/
		//��ʼ��
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
						/*����*/
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
	void project() {/*�ļ�*/
		//��ʼ��
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
						/*����*/
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
	void settings() {/*����*/
		//��ʼ��
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
	void head() { /*��ǩ��*/
		//��ʼ��
		title();
		gotoxy(0, 2);
		SetColorAndBackground(7, 0);
		cout << "                                                    ";
		gotoxy(0, 2);
		cout << "  |";
		SetColorAndBackground(0, 7);
		cout << "  ��ҳ  ";
		SetColorAndBackground(7, 0);
		cout << " |  ���  |  �ļ�  |  ����  |";
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
					cout << "  ��ҳ  ";
					SetColorAndBackground(7, 0);
					cout << " |  ���  |  �ļ�  |  ����  |";
					home();
				}
				if (channel == 2) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  ��ҳ  |";
					SetColorAndBackground(0, 7);
					cout << "  ���  ";
					SetColorAndBackground(7, 0);
					cout << " |  �ļ�  |  ����  |";
					recent();
				}
				if (channel == 3) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  ��ҳ  |  ���  |";
					SetColorAndBackground(0, 7);
					cout << "  �ļ�  ";
					SetColorAndBackground(7, 0);
					cout << " |  ����  |";
					project();
				}
				if (channel == 4) {
					gotoxy(0, 2);
					SetColorAndBackground(7, 0);
					cout << "                                                    ";
					gotoxy(0, 2);
					cout << "  |  ��ҳ  |  ���  |  �ļ�  |";
					SetColorAndBackground(0, 7);
					cout << "  ����  ";
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
	cout << "ȷʵҪ�ر���(y/n)";
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
	cout << "��ӭ...";
	start.prepareStart();
	S(500);
	cls
	launcher.head();
	shutdownagreement();
	return 0;
}
