/*
 * NVM.h
 *
 *  Created on: 2019年10月11日
 *      Author: zhoucw
 */

#ifndef NVM_H_
#define NVM_H_

#include "common.h"

class NVM {
private:
	Address start;				// 起始地址
	long length;				// 长度

public:
	NVM();
	virtual ~NVM();
};

#endif /* NVM_H_ */
