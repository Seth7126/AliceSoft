// 函数: sub_51ec50
// 地址: 0x51ec50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2

if (arg1[0x42] + edi s< 0)
    arg1[0x42] = 3 - edi

if ((*(*arg1 + 0x24))(1) - 6 s< arg1[0x42] + 1 + edi)
    arg1[0x42] = (*(*arg1 + 0x24))(1) + 0xfffffff9 - edi

bool cond:0 = arg1[0x42] s< 0
void* eax_11 = &arg2
arg2 = 0

if (cond:0)
    eax_11 = &arg1[0x42]

int32_t result = *eax_11
arg1[0x42] = result
return result
