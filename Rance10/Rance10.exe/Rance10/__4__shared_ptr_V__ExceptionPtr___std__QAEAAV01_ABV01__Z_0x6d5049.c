// 函数: ??4?$shared_ptr@V__ExceptionPtr@@@std@@QAEAAV01@ABV01@@Z
// 地址: 0x6d5049
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg2[1]
int32_t eax_1 = *arg2

if (edx != 0)
    *(edx + 4) += 1

int32_t* ecx = arg1[1]
arg1[1] = edx
*arg1 = eax_1

if (ecx != 0)
    sub_563db0(ecx, edx)

return arg1
