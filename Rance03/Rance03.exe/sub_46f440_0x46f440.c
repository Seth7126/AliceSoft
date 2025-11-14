// 函数: sub_46f440
// 地址: 0x46f440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x4ec4ec4f, arg1[2] - *arg1)
int32_t edx_2 = edx_1 s>> 4
int32_t esi_2 = (edx_2 u>> 0x1f) + edx_2
uint32_t ecx_1 = esi_2 u>> 1

if (0x4ec4ec4 - ecx_1 u>= esi_2)
    int32_t esi_4 = esi_2 + ecx_1
    
    if (esi_4 u< arg2)
        return arg2
    
    return esi_4

if (0 u< arg2)
    return arg2

return 0
