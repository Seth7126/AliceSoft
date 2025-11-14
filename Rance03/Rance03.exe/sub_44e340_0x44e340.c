// 函数: sub_44e340
// 地址: 0x44e340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x2f5) == 0)
    return 

if ((***(arg1 + 0x1c))() - *(arg1 + 0x2f0) u< 0xbb8)
    Sleep(*(arg1 + 0x2f8))
    return 

int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x57619f1, *(arg1 + 0x2ec) * 0x3e8)
int32_t edx_2 = edx_1 s>> 6
int32_t eax_8 = (edx_2 u>> 0x1f) + edx_2

if (eax_8 s> 0x5a)
    *(arg1 + 0x2f8) += 1
else if (eax_8 s< 0x3c)
    int32_t eax_9 = *(arg1 + 0x2f8)
    
    if (eax_9 != 0)
        *(arg1 + 0x2f8) = eax_9 - 1

Sleep(*(arg1 + 0x2f8))
int32_t* ecx_2 = *(arg1 + 0x1c)
*(arg1 + 0x2ec) = 0
*(arg1 + 0x2f0) = (**ecx_2)()
