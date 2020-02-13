/*
 * Auto.h
 *
 *  Created on: 13-Feb-2020
 *      Author: user
 */

#ifndef AUTO_H_
#define AUTO_H_


class C11feauture
{
public:
	int var1;
	float var2;
	bool var3;

public :
	C11feauture()
	{
		var1 = 1;
		var2 = 1.0;
		var3 = 0;
	}

	void Modify()
		{
			C11feauture object;

			object.var1 = 10;
			object.var1 = 10.0;
			object.var1 = 12.2200;

			std::cout<<"function executed"<<std::endl;
		}

};

#endif /* AUTO_H_ */
