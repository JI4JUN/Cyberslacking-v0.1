#include "globalsignaltable.h"

// 私有静态成员变量在使用前必须初始化
GlobalSignalTable* GlobalSignalTable::instance = nullptr;

GlobalSignalTable::GlobalSignalTable(QObject* parent)
	: QObject(parent)
{
}

GlobalSignalTable::~GlobalSignalTable()
{
}

GlobalSignalTable* GlobalSignalTable::getInstance()
{
	if (!GlobalSignalTable::instance)
		GlobalSignalTable::instance = new GlobalSignalTable;

	return GlobalSignalTable::instance;
}