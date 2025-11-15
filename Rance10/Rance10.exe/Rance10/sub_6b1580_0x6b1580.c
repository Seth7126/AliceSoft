// 函数: sub_6b1580
// 地址: 0x6b1580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4_1 = arg1
sub_6a8cc0(arg1)
uint32_t eax = *(arg1 + 0x104)
int32_t ebp

if (*(arg1 + 0x154) == 0)
    ebp = *(arg1 + 0x100)
    *(arg1 + 0x108) = eax
    *(arg1 + 0x114) = ebp
else
    if ((*(arg1 + 0x7c) & 2) == 0)
        eax = (eax + 7) u>> 3
    
    ebp = *(arg1 + 0x100)
    *(arg1 + 0x108) = eax
    uint32_t eax_2 = zx.d(*(arg1 + 0x155))
    uint32_t esi_1 = zx.d(*(eax_2 + 0x7744a8))
    *(arg1 + 0x114) = divu.dp.d(0:(esi_1 - 1 + ebp - zx.d(*(eax_2 + 0x774440))), esi_1)

uint32_t eax_8 = *(arg1 + 0x7c)
uint32_t ebx = zx.d(*(arg1 + 0x15a))

if ((eax_8.b & 4) != 0 && *(arg1 + 0x158) u< 8)
    ebx = 8

int32_t esi_3 = eax_8 & 0x1000

if (esi_3 != 0)
    int32_t ecx
    ecx.b = *(arg1 + 0x157)
    
    if (ecx.b == 3)
        int32_t ebx_1
        ebx_1.b = *(arg1 + 0x150) != 0
        ebx = (ebx_1 << 3) + 0x18
    else if (ecx.b == 0)
        if (ebx s< 8)
            ebx = 8
        
        if (*(arg1 + 0x150) != 0)
            ebx *= 2
    else if (ecx.b == 2 && *(arg1 + 0x150) != 0)
        ebx = (ebx << 2) s/ 3

if ((eax_8 & 0x200) != 0)
    if (esi_3 == 0)
        *(arg1 + 0x7c) = eax_8 & 0xfffffdff
    else if (*(arg1 + 0x158) u< 0x10)
        ebx *= 2

int32_t edx_4 = *(arg1 + 0x7c)
uint32_t ecx_3 = 0x40
int32_t esi_5 = edx_4 & 0x8000

if (esi_5 != 0)
    eax_8.b = *(arg1 + 0x157)
    
    if (eax_8.b == 0)
        uint32_t var_4 = 0x10
        eax_8 = 0x20
        
        if (ebx s<= 8)
            eax_8 = 0x10
        
        ebx = eax_8
    else if (eax_8.b == 2 || eax_8.b == 3)
        eax_8 = 0x40
        
        if (ebx s<= 0x20)
            eax_8 = 0x20
        
        ebx = eax_8

if ((edx_4 & 0x4000) != 0)
    if ((*(arg1 + 0x150) == 0 || (edx_4 & 0x1000) == 0) && esi_5 == 0)
        eax_8.b = *(arg1 + 0x157)
    
    if ((*(arg1 + 0x150) != 0 && (edx_4 & 0x1000) != 0) || esi_5 != 0 || eax_8.b == 4)
        if (ebx s<= 0x10)
            ecx_3 = 0x20
        
        ebx = ecx_3
    else if (ebx s> 8)
        ebx = 0x30
        
        if (eax_8.b == 6)
            ebx = 0x40
    else
        int32_t ebx_4
        ebx_4.b = eax_8.b == 6
        ebx = (ebx_4 << 3) + 0x18

if ((edx_4 & 0x100000) != 0)
    uint32_t ecx_5 = zx.d(*(arg1 + 0x71)) * zx.d(*(arg1 + 0x70))
    
    if (ecx_5 s> ebx)
        ebx = ecx_5

*(arg1 + 0x15e) = ebx.b
int32_t eax_11 = (ebp + 7) & 0xfffffff8
*(arg1 + 0x15f) = 0
uint32_t ecx_8

if (ebx s< 8)
    ecx_8 = (eax_11 * ebx + 7) u>> 3
else
    ecx_8 = (ebx u>> 3) * eax_11

void* esi_7 = ecx_8 + 0x31 + ((ebx + 7) s>> 3)

if (esi_7 u> *(arg1 + 0x2b4))
    int32_t eax_14 = *(arg1 + 0x27c)
    
    if (eax_14 != 0)
        int32_t ecx_12 = *(arg1 + 0x278)
        
        if (ecx_12 == 0)
            _free(eax_14)
        else
            ecx_12(arg1, eax_14)
    
    int32_t eax_15 = *(arg1 + 0x2c8)
    
    if (eax_15 != 0)
        int32_t ecx_13 = *(arg1 + 0x278)
        
        if (ecx_13 == 0)
            _free(eax_15)
        else
            ecx_13(arg1, eax_15)
    
    uint32_t (* eax_16)[0x4]
    
    if (*(arg1 + 0x154) == 0)
        eax_16 = sub_6a7c70(arg1, esi_7)
    else
        eax_16 = sub_6a7b10(arg1, esi_7)
    
    *(arg1 + 0x27c) = eax_16
    int32_t eax_18
    
    if (esi_7 != 0)
        int32_t eax_17 = *(arg1 + 0x274)
        
        if (eax_17 == 0)
            eax_18 = sub_705e22()
        else
            eax_18 = eax_17(arg1, esi_7)
    
    if (esi_7 == 0 || eax_18 == 0)
        sub_6a7500(arg1, "Out of memory")
        noreturn
    
    int32_t eax_20 = *(arg1 + 0x27c) + 0x20
    *(arg1 + 0x2c8) = eax_18
    *(arg1 + 0x2b4) = esi_7
    *(arg1 + 0x124) = (eax_20 & 0xfffffff0) - 1
    *(arg1 + 0x120) = ((eax_18 + 0x20) & 0xfffffff0) - 1

void* eax_26 = *(arg1 + 0x110)

if (eax_26 u> 0xfffffffe)
    sub_6a7500(arg1, "Row has too many bytes to allocate in memory")
    noreturn

_memset(*(arg1 + 0x120), 0, eax_26 + 1)
int32_t eax_28 = *(arg1 + 0x2b8)

if (eax_28 != 0)
    *(arg1 + 0x2bc) = 0
    *(arg1 + 0x2b8) = 0
    int32_t ecx_16 = *(arg1 + 0x278)
    
    if (ecx_16 == 0)
        _free(eax_28)
    else
        ecx_16(arg1, eax_28)

void* result = sub_6acfe0(arg1, 0x49444154)

if (result != 0)
    sub_6a7500(arg1, *(arg1 + 0x9c))
    noreturn

*(arg1 + 0x78) |= 0x40
return result
