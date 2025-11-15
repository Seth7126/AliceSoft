// 函数: ??4?$shared_ptr@V__ExceptionPtr@@@std@@QAEAAV01@$$QAV01@@Z
// 地址: 0x6d501a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *arg2
int32_t edx = arg2[1]
*arg2 = 0
arg2[1] = 0
int32_t* ecx = arg1[1]
arg1[1] = edx
*arg1 = esi

if (ecx != 0)
    sub_563db0(ecx)

return arg1
