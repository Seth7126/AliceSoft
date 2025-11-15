// 函数: sub_649fd0
// 地址: 0x649fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    __builtin_memset(arg1 + 4, 0, 0x14)

int32_t* eax_3 = (*(*arg2 + 0x58))()
*(arg1 + 4) = eax_3

if (eax_3 == 0)
    eax_3.b = 0
    return eax_3

int32_t ecx_2 = *arg3
char eax_9 = (*(*eax_3 + 8))(arg4, ecx_2, (arg3[1] - ecx_2) s>> 2, 1)

if (eax_9 == 0)
    return eax_9

*(arg1 + 8) = arg4
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = sx.q(arg4)
*(arg1 + 0xc) = arg4 s/ 3
*(arg1 + 0x14) = (eax_12 - edx_2) s>> 1
int32_t eax_14
eax_14.b = 1
*(arg1 + 0x10) = arg4 - 2
return eax_14
