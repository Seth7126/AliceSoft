// 函数: sub_592690
// 地址: 0x592690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5928e0(arg1)
int32_t eax = 0x1000 s>> arg3.b
*(arg1 + 0x18) = arg3

if (eax s< 1)
    eax = 1

*(arg1 + 0x10) = eax
*(arg1 + 0x14) = eax
int32_t* eax_1
int32_t edx
eax_1, edx = sub_592860(arg1)
enum MESSAGEBOX_RESULT eax_2

if (eax_1.b != 0)
    float xmm3_1 = 0.5f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
    *(arg1 + 0x14c) = 0x3f000000
    *(arg1 + 0x150) = 0
    *(arg1 + 0x154) = 0
    *(arg1 + 0x158) = 0
    *(arg1 + 0x15c) = 0
    *(arg1 + 0x160) = 0xbf000000
    *(arg1 + 0x164) = 0
    *(arg1 + 0x168) = 0
    *(arg1 + 0x16c) = 0
    *(arg1 + 0x170) = 0
    *(arg1 + 0x174) = 0x3f800000
    *(arg1 + 0x178) = 0
    *(arg1 + 0x184) = 0
    *(arg1 + 0x188) = 0x3f800000
    *(arg1 + 0x17c) = xmm3_1 + 0.5f
    *(arg1 + 0x180) = 0.5f / xmm0_4 + 0.5f
    int32_t* ecx_3 = *(arg1 + 0x28c)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(arg2, arg1)
        *(arg1 + 0x28c) = 0
    
    eax_2 = (*(**(arg1 + 4) + 0x58))(arg2, arg1)
    *(arg1 + 0x28c) = eax_2
    
    if (eax_2 != 0 && sub_5929a0(arg1).b != 0)
        int32_t eax_5
        int32_t ecx_7
        int32_t edx_1
        eax_5, ecx_7, edx_1 = sub_592810(arg1)
        
        if (eax_5.b != 0)
            *(arg1 + 8) = 1
            eax_5.b = 1
            return eax_5
        
        sub_59f4e0(eax_5, edx_1, ecx_7, 0x6e5cc0)
        enum MESSAGEBOX_RESULT eax_6
        eax_6.b = 0
        return eax_6
else
    sub_59f4e0(eax_1, edx, arg1, 0x6e5c90, arg2)

eax_2.b = 0
return eax_2
