#include <bits/stdc++.h>
#include <cstdio>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#define S(i) Sleep(i)
#define cls system("cls");
#define ei else if
using namespace std;
bool agreedshutdown = false; //�ж��Ƿ�ر�
//��Ŀ����
long long recentnum = 15, projectnum = 15, settingnum = 3;
string recentfilename[1010100]  = {};
string projectfilename[1010100] = {};
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
	struct Fileinput { /*ע���ļ���*/
		void recentfileinput() {
			CreateDirectory("./files",NULL );
			ifstream recent("./files/recent.whstu");
			if (!recent.is_open()) {
				ofstream recent_create("./files/recent.whstu");//����ļ������ھʹ����ļ�
				recent_create.close();
			}
			string line;
			recentfilename[0] = {" "};
			long long i = 1;
			while (getline(recent, line)) {
				recentfilename[i] = line;
				i++;
			}
			recentnum = i - 1;
		}
		void projectfileinput() {
			CreateDirectory("./files",NULL );
			ifstream project("./files/project.whstu");
			if (!project.is_open()) {
				ofstream project_create("./files/project.whstu");//����ļ������ھʹ����ļ�
				project_create.close();
			}
			string line;
			projectfilename[0] = {" "};
			long long i = 1;
			while (getline(project, line)) {
				projectfilename[i] = line;
				i++;
			}
			projectnum = i - 1;
		}
	} fileinput;

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
		cout << "���ڵ����ļ�...";
		fileinput.projectfileinput();
		fileinput.recentfileinput();
		cout << "\n��ɡ�\n";
		S(100);
		cout << "��ӭ...";
	}
} start;
//apps
struct Filemanager { /*�ļ�����*/
	void createfile(string name) {
		return;
	}
	void deletefile(string name) {
		return;
	}
	void fileinfo(string name) {
		return;
	}
	void editfile(string name) {
		return;
	}
} filemanager;
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
		//д��汾�� 
		CreateDirectory("./info",NULL );
		ofstream info("./info/info.txt");
		info<<"Slytherin OS 0.2_Build20240807152900_DeveloperBeta3"<<endl;
		info<<"�汾����:000217"<<endl;
		info<<"ע�⣺�벻Ҫ�ڴ˴�������Ҫ��Ϣ����Ϊ���ļ��ᱻSlytherinOS���ǣ�";
		info.close();
		//----------
		cout << "\nSlytherin OS 0.2_Build20240807152900_DeveloperBeta3\n";
		cout << "\n�汾����000217\n";
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
					case 'a': {
						return;
					}
					case 'd': {
						return;
					}
					case 'w': {
						return;
					}
					case 's': {
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
		for (int i = 0; i < projectnum + 3; i++) {
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
		for (int i = 0; i < max(recentnum, settingnum) + 3; i++) {
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
		for (int i = 0; i < projectnum + 3; i++) {
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
void shutdownagreement() {//�ر���ʾ
	cls
	cout << "ȷʵҪ�ر���(y/n)";
	while (1) {
		if ( _kbhit() ) {
			char x = _getch();
			switch (x) {
				case 'y': {
					agreedshutdown = true;
					return;
				}
				case 'n': {
					agreedshutdown = false;
					return;
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
	while (agreedshutdown == false) {
		ShowWindow(hwnd, SW_MAXIMIZE);
		cmdset.setfont(16);
		launcher.head();
		shutdownagreement();
	}
	return 0;
}
/*
Slytherin OS �汾0.2
������:20240807

������־
20240807
�޸���ȡ���˳����޷�����UI�����⣻��������Ŀ���ƶ�ȡ���� 
20240805
UI��д
*/
