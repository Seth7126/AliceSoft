// 函数: sub_5872c0
// 地址: 0x5872c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (*(arg1 + 0x23d) == 0)
    int32_t ecx
    int32_t edx_1
    eax, ecx, edx_1 = sub_587260(arg1)
    
    if (eax.b != 0)
        sub_59f4e0(eax, edx_1, ecx, 0x6e5750, arg2)
        enum MESSAGEBOX_RESULT eax_1
        eax_1.b = 0
        return eax_1
    
    int32_t* ecx_1 = *(arg1 + 0x214)
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
        *(arg1 + 0x214) = 0
    
    *(arg1 + 0x23d) = 1

eax.b = 1
return eax
