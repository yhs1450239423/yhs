#include "chuangkou.h"

ditu *chuangkou::p_ditu = NULL;
chuangkou::chuangkou()
{

}

//指向第二个地图窗口
void chuangkou::init(){
    p_ditu = new ditu();
}
