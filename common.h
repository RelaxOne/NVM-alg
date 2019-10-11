/*
 * common.h
 *
 *  Created on: 2019��10��11��
 *      Author: zhoucw
 */

#ifndef COMMON_H_
#define COMMON_H_

#define Address long

#define PAGE_SIZE 1024 * 4;					// 4 KB
#define DRAM_SIZE 1024 * 1024 * 256			// 256 MB
#define NVM_SIZE  1024 * 1024 * 1024 * 4	// 4G


struct page{
	int page_no;			// ҳ��
	int read_count;			// ������
	int write_count;		// д����
	struct page *prev;		// ��һ���ڵ�ָ��
	struct page *next;		// ��һ���ڵ�ָ��
	page(){
		page_no  = 0;
		read_count = 0;
		write_count = 0;
		prev = nullptr;
		next = nullptr;
	}
};


#endif /* COMMON_H_ */
