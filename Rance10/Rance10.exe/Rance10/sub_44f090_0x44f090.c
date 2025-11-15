// 函数: sub_44f090
// 地址: 0x44f090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x15) == 0)
    return 

if ((***(arg1 + 8))() - *(arg1 + 0x10) u< 0xbb8)
    Sleep(*(arg1 + 0x18))
    return 

int32_t eax_5 = *(arg1 + 0xc) * 0x3e8

if (eax_5 s>= 0x42a68)
    *(arg1 + 0x18) += 1
else if (eax_5 s< 0x2bf20)
    int32_t eax_6 = *(arg1 + 0x18)
    
    if (eax_6 != 0)
        *(arg1 + 0x18) = eax_6 - 1

Sleep(*(arg1 + 0x18))
int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = (**ecx_1)()
