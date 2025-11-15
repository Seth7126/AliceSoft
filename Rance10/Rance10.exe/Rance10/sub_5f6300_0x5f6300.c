// 函数: sub_5f6300
// 地址: 0x5f6300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_3 = (*(*arg3 + 8))()
int32_t edi = 0

if (arg2 s>= 0)
    edi = arg2

int32_t i_1
int32_t i_2 = i_1

if (i_2 s> i_3)
    i_2 = i_3

for (int32_t i = i_2 - 1; i s>= edi; i -= 1)
    int32_t* ecx = *(arg4 + 0x24)
    i_1 = i
    
    if (ecx == 0)
        sub_6d090a()
        noreturn
    
    if ((*(*ecx + 8))(&i_1) != 0)
        return i

return 0xffffffff
