#pragma once
#include<vector>
using namespace std;
class player
{
public:
	player();
	~player();
	bool isdizhu() { return dizhu; }
	void setdizhu(int i) { dizhu = i; }
	bool isme() { return me; }
	void setme(int i) { dizhu = i; }
private :
	int dizhu;
	int me;
	std::vector<int> playercard;
};

