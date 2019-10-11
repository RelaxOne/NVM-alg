/*
 * DRAM.cpp
 *
 *  Created on: 2019年10月11日
 *      Author: zhoucw
 */

#include "DRAM.h"

DRAM::DRAM() {
	// start Address of DRAM memory
	start =  0;
	// the length of DRAM
	length = DRAM_SIZE;
	// page number
	page_num = DRAM_SIZE / PAGE_SIZE;

	used_count = 0;

	used_head = new page();
	used_tail = new page();
	free_head = new page();
	free_tail = new page();

	used_head->next = used_tail;
	used_head->page_no = -1;
	used_tail->prev = used_head;
	used_tail->page_no = -1;

	// 插入页面到空闲链表中
	for(int i = 0; i < page_num; ++i){
		page *temp = new page();
		temp->page_no = i ;
		temp->next = free_head->next;
		free_head->next->prev = temp;
		free_head->next = temp;
		temp->prev = free_head;
	}

}

/**
 * alloc page from dram
 */
bool DRAM::alloc_dram_page(int count){



	return false;
}

bool DRAM::alloc_one_dram_page(){
	return alloc_dram_page(1);
}

DRAM::~DRAM() {
	// TODO Auto-generated destructor stub
}

