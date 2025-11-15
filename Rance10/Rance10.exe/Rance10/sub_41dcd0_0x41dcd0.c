// 函数: sub_41dcd0
// 地址: 0x41dcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = (*(**(*(arg1 + 4) + 8) + 4))(*arg2)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

uint32_t eax_4 = (*(*eax_1 + 0x14))() u>> 2
int32_t ecx_2 = *arg3

if (ecx_2 s>= 0 && ecx_2 s< eax_4)
    eax_4 = (*(*eax_1 + 0x18))()
    
    if (eax_4 != 0)
        *arg2 = *(eax_4 + (*arg3 << 2))
        int32_t eax_7
        eax_7.b = 1
        *arg3 = 0xffffffff
        return eax_7

eax_4.b = 0
return eax_4
