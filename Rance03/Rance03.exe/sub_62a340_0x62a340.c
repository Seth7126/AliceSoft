// 函数: sub_62a340
// 地址: 0x62a340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi = arg1
uint32_t ebx = arg2

if (*(esi + 0x190) != 0 || *(esi + 0x194) != 0)
    sub_62a550(arg1, "gamma table being rebuilt")
    arg1, arg2 = sub_62a110(esi)

char* result

if (ebx s> 8)
    if ((*(esi + 0x157) & 2) == 0)
        ebx.b = *(esi + 0x1ab)
    else
        arg2.b = *(esi + 0x1a8)
        arg1.b = *(esi + 0x1a9)
        ebx = zx.d(arg2.b)
        
        if (arg1.b u> arg2.b)
            ebx = zx.d(arg1.b)
        
        uint32_t eax_5
        eax_5.b = *(esi + 0x1aa)
        
        if (eax_5.b u> ebx.b)
            ebx.b = eax_5.b
    
    char eax_6
    
    if (ebx.b - 1 u> 0xe)
        eax_6 = 0
    else
        eax_6 = 0x10 - ebx.b
    
    int32_t edx_5 = *(esi + 0x7c) & 0x4000400
    
    if (edx_5 == 0 || eax_6 u>= 5)
        arg1 = zx.d(eax_6)
        
        if (eax_6 u> 8)
            arg1 = 8
    else
        arg1.b = 5
    
    uint32_t edi_1 = zx.d(arg1.b)
    int32_t edx_6 = *(esi + 0x18c)
    *(esi + 0x188) = edi_1
    
    if (edx_5 == 0)
        int32_t eax_8
        
        if (edx_6 s<= 0)
            eax_8 = 0x186a0
        else
            eax_8 = sub_629970(*(esi + 0x2dc), edx_6)
        
        result = sub_629b80(eax_8, esi + 0x194, esi, edi_1, eax_8)
    else if (edx_6 s<= 0)
        result = sub_629da0(0x186a0, esi + 0x194, esi, edi_1.b, 0x186a0)
    else
        int32_t eax_7 = sub_6298d0(*(esi + 0x2dc), edx_6)
        result = sub_629da0(eax_7, esi + 0x194, esi, edi_1.b, eax_7)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        int32_t eax_9 = sub_629830(*(esi + 0x2dc))
        sub_629b80(eax_9, esi + 0x1a4, esi, edi_1, eax_9)
        int32_t ecx_14 = *(esi + 0x18c)
        int32_t eax_10
        
        if (ecx_14 s<= 0)
            eax_10 = *(esi + 0x2dc)
        else
            eax_10 = sub_629830(ecx_14)
        
        return sub_629b80(eax_10, esi + 0x1a0, esi, edi_1, eax_10)
else
    int32_t edx = *(esi + 0x18c)
    int32_t eax_1
    
    if (edx s<= 0)
        eax_1 = 0x186a0
    else
        eax_1 = sub_629970(*(esi + 0x2dc), edx)
    
    result = sub_629fc0(eax_1, esi + 0x190, esi, eax_1)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        int32_t eax_2 = sub_629830(*(esi + 0x2dc))
        sub_629fc0(eax_2, esi + 0x19c, esi, eax_2)
        int32_t ecx_5 = *(esi + 0x18c)
        int32_t eax_3
        
        if (ecx_5 s<= 0)
            eax_3 = *(esi + 0x2dc)
        else
            eax_3 = sub_629830(ecx_5)
        
        return sub_629fc0(eax_3, esi + 0x198, esi, eax_3)

return result
