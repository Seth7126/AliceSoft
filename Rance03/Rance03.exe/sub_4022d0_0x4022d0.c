// 函数: sub_4022d0
// 地址: 0x4022d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg1

if (arg2 u> 0xfffffffe)
    sub_69a551("string too long")
    noreturn

int32_t eax = *(esi + 0x14)

if (eax u< arg2)
    sub_4023a0(arg1, arg2, *(esi + 0x10))
    return neg.d(sbb.d(0, 0, 0 u< arg2))

if (arg3 == 0 || arg2 u>= 0x10)
    if (arg2 == 0)
        *(esi + 0x10) = arg2
        
        if (eax u>= 0x10)
            esi = *esi
        
        *esi = 0
    
    return neg.d(sbb.d(0, 0, 0 u< arg2))

char* ebx = *(esi + 0x10)

if (arg2 u< ebx)
    ebx = arg2

if (eax u>= 0x10)
    int32_t* ebp_1 = *esi
    
    if (ebx != 0)
        sub_69d850(esi, ebp_1, ebx)
    
    j__free(ebp_1)

*(esi + 0x10) = ebx
*(esi + 0x14) = 0xf
*(ebx + esi) = 0
return neg.d(sbb.d(0, 0, 0 u< arg2))
