/*
 * DRAM.h
 *
 *  Created on: 2019��10��11��
 *      Author: zhoucw
 */

#ifndef DRAM_H_
#define DRAM_H_

#include "common.h"

class DRAM {
private:
	Address start;		// ��ʼ��ַ
	long length;		// ����
	int page_num;		// ҳ������
	int used_count;		// ����ҳ������
	page *used_head;	// ��������ͷָ��
	page *used_tail;	// ��������βָ��
	page *free_head;	// δ������ͷָ��
	page *free_tail;	// δ������βָ��

public:
	DRAM();
	bool alloc_one_dram_page();
	bool alloc_dram_page(int count);
	virtual ~DRAM();
};

#endif /* DRAM_H_ */
