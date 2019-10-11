/*
 * DRAM.h
 *
 *  Created on: 2019年10月11日
 *      Author: zhoucw
 */

#ifndef DRAM_H_
#define DRAM_H_

#include "common.h"

class DRAM {
private:
	Address start;		// 起始地址
	long length;		// 长度
	int page_num;		// 页面数量
	int used_count;		// 已用页面数量
	page *used_head;	// 已用链表头指针
	page *used_tail;	// 已用链表尾指针
	page *free_head;	// 未用链表头指针
	page *free_tail;	// 未用链表尾指针

public:
	DRAM();
	bool alloc_one_dram_page();
	bool alloc_dram_page(int count);
	virtual ~DRAM();
};

#endif /* DRAM_H_ */
