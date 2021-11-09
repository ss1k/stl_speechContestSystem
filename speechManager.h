#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <ctime>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>

//管理类
class SpeechManager{
public:
    SpeechManager();

    //展示菜单
    void show_Menu();

    void exitSystem();

    //比赛选手 容器  12人
	vector<int>v1;//存放编号

	//第一轮晋级容器  6人
	vector<int>v2;

	//胜利前三名容器  3人
	vector<int>vVictory;

	//存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;  //存放编号和speaker对象（名字，分数数组）

	//比赛轮数
	int m_Index;

	//初始化属性和容器
	void initSpeech();

	//创建选手
	void createSpeaker();

	//开始比赛-比赛流程控制
	void startSpeech();

	void speechDraw();
	void speechContest();
	void showScore();
	void saveRecord();

	//读取记录
	void loadRecord();

	//文件为空的标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;//第几届，csv数据

	//显示往届得分
	void showRecord();

	//清空记录
	void clearRecord();
	
    ~SpeechManager();
};