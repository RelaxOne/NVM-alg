/*
 * NVM.h
 *
 *  Created on: 2019��10��11��
 *      Author: zhoucw
 */

#ifndef NVM_H_
#define NVM_H_

#include "common.h"

class NVM {
private:
	Address start;				// ��ʼ��ַ
	long length;				// ����

public:
	NVM();
	virtual ~NVM();
};

#endif /* NVM_H_ */
