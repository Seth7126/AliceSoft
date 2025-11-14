// 函数: sub_5ea3e0
// 地址: 0x5ea3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_6
int32_t* esi

if (*(arg1 + 0x5c) != 0 || *(arg1 + 0xc) == 0)
    esi = arg2
    int32_t eax_9
    int32_t edx_1
    edx_1:eax_9 = sx.q(*(arg1 + 0x68) - *(arg1 + 0x60))
    *esi = (eax_9 - edx_1) s>> 1
    eax_6 = *(arg1 + 0x6c) - *(arg1 + 0x64)
else
    esi = arg2
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(arg1 + 0x68) - *(arg1 + 0x30))
    *esi = (eax_2 - edx) s>> 1
    eax_6 = *(arg1 + 0x6c) - *(arg1 + 0x34)

int32_t eax_13
int32_t edx_2
edx_2:eax_13 = sx.q(eax_6)
int32_t result = (eax_13 - edx_2) s>> 1
bool cond:2 = *esi s>= 0
*arg3 = result

if (not(cond:2))
    *esi = 0

if (*arg3 s< 0)
    *arg3 = 0

return result
