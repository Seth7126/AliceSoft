// 函数: sub_450940
// 地址: 0x450940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x118)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x118) = 0

*(arg1 + 0x118) = arg2

if (arg2 != 0)
    (**arg2)()

int32_t* ecx_2 = *(arg1 + 0x120)

if (ecx_2 == 0)
    return 

int32_t esi_1 = ecx_2[1]
ecx_2[1] -= 1
(**ecx_2)(esi_1 - 1)
*(arg1 + 0x120) = 0
