/*
 * common.h
 *
 *  Created on: 2019年10月11日
 *      Author: zhoucw
 */

#ifndef COMMON_H_
#define COMMON_H_

#define Address long

#define PAGE_SIZE 1024 * 4;					// 4 KB
#define DRAM_SIZE 1024 * 1024 * 256			// 256 MB
#define NVM_SIZE  1024 * 1024 * 1024 * 4	// 4G


struct page{
	int page_no;			// 页号
	int read_count;			// 读次数
	int write_count;		// 写次数
	struct page *prev;		// 上一个节点指针
	struct page *next;		// 下一个节点指针
	page(){
		page_no  = 0;
		read_count = 0;
		write_count = 0;
		prev = nullptr;
		next = nullptr;
	}
};


#endif /* COMMON_H_ */
