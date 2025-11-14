// 函数: __control87
// 地址: 0x6ad256
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int32_t ecx = 0

if ((temp0.b & 1) != 0)
    ecx = 0x10

if ((temp0.b & 4) != 0)
    ecx |= 8

if ((temp0.b & 8) != 0)
    ecx |= 4

if ((temp0.b & 0x10) != 0)
    ecx |= 2

if ((temp0.b & 0x20) != 0)
    ecx |= 1

if ((temp0.b & 2) != 0)
    ecx |= 0x80000

uint32_t esi = zx.d(temp0)
int32_t edx_1 = esi & 0xc00

if (edx_1 != 0)
    if (edx_1 == 0x400)
        ecx |= 0x100
    else if (edx_1 == 0x800)
        ecx |= 0x200
    else if (edx_1 == 0xc00)
        ecx |= 0x300

int32_t esi_1 = esi & 0x300

if (esi_1 == 0)
    ecx |= 0x20000
else if (esi_1 == 0x200)
    ecx |= 0x10000

if ((0x1000 & zx.d(temp0)) != 0)
    ecx |= 0x40000

int32_t esi_5 = (not.d(arg4) & ecx) | (arg3 & arg4)

if (esi_5 != ecx)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(zx.w(__hw_cw(esi_5)))
    int16_t x87status_2
    int16_t temp0_1
    temp0_1, x87status_2 = __fnstcw_memmem16(x87control)
    uint32_t var_c_1
    var_c_1.w = temp0_1
    esi_5 = 0
    
    if ((var_c_1.b & 1) != 0)
        esi_5 = 0x10
    
    if ((var_c_1.b & 4) != 0)
        esi_5 |= 8
    
    if ((var_c_1.b & 8) != 0)
        esi_5 |= 4
    
    if ((var_c_1.b & 0x10) != 0)
        esi_5 |= 2
    
    if ((var_c_1.b & 0x20) != 0)
        esi_5 |= 1
    
    if ((var_c_1.b & 2) != 0)
        esi_5 |= 0x80000
    
    uint32_t edx_2 = zx.d(var_c_1.w)
    int32_t ecx_3 = edx_2 & 0xc00
    
    if (ecx_3 != 0)
        if (ecx_3 == 0x400)
            esi_5 |= 0x100
        else if (ecx_3 == 0x800)
            esi_5 |= 0x200
        else if (ecx_3 == 0xc00)
            esi_5 |= 0x300
    
    int32_t edx_3 = edx_2 & 0x300
    
    if (edx_3 == 0)
        esi_5 |= 0x20000
    else if (edx_3 == 0x200)
        esi_5 |= 0x10000
    
    if ((0x1000 & var_c_1) != 0)
        esi_5 |= 0x40000

if (data_75c958 s< 1)
    return esi_5

void* edi_1 = arg4 & 0x308031f
int32_t ecx_4 = 0

if (arg1.b s< 0)
    ecx_4 = 0x10

if ((arg1 & 0x200) != 0)
    ecx_4 |= 8

if ((arg1 & 0x400) != 0)
    ecx_4 |= 4

if ((arg1 & 0x800) != 0)
    ecx_4 |= 2

if ((0x1000 & arg1) != 0)
    ecx_4 |= 1

if ((arg1 & 0x100) != 0)
    ecx_4 |= 0x80000

int32_t edx_5 = arg1 & 0x6000

if (edx_5 != 0)
    if (edx_5 == 0x2000)
        ecx_4 |= 0x100
    else if (edx_5 == 0x4000)
        ecx_4 |= 0x200
    else if (edx_5 == 0x6000)
        ecx_4 |= 0x300

int32_t eax_8 = arg1 & 0x8040

if (eax_8 == 0x40)
    ecx_4 |= 0x2000000
else if (eax_8 == 0x8000)
    ecx_4 |= 0x3000000
else if (eax_8 == 0x8040)
    ecx_4 |= 0x1000000

int32_t eax_15 = (not.d(edi_1) & ecx_4) | (edi_1 & arg3)

if (eax_15 != ecx_4)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_16 = ___hw_cw_sse2(eax_15)
    arg4 = eax_16
    struct _EXCEPTION_REGISTRATION_RECORD** mxcsr = ___set_fpsr_sse2(eax_16)
    ecx_4 = 0
    
    if (mxcsr.b s< 0)
        ecx_4 = 0x10
    
    if ((mxcsr & 0x200) != 0)
        ecx_4 |= 8
    
    if ((mxcsr & 0x400) != 0)
        ecx_4 |= 4
    
    if ((mxcsr & 0x800) != 0)
        ecx_4 |= 2
    
    if ((mxcsr & 0x1000) != 0)
        ecx_4 |= 1
    
    if ((mxcsr & 0x100) != 0)
        ecx_4 |= 0x80000
    
    void* edx_7 = mxcsr & 0x6000
    
    if (edx_7 != 0)
        if (edx_7 == 0x2000)
            ecx_4 |= 0x100
        else if (edx_7 == 0x4000)
            ecx_4 |= 0x200
        else if (edx_7 == 0x6000)
            ecx_4 |= 0x300
    
    void* eax_18 = mxcsr & 0x8040
    
    if (eax_18 == 0x40)
        ecx_4 |= 0x2000000
    else if (eax_18 == 0x8000)
        ecx_4 |= 0x3000000
    else if (eax_18 == 0x8040)
        ecx_4 |= 0x1000000

int32_t ecx_5 = ecx_4 | esi_5

if (((ecx_4 ^ esi_5) & 0x8031f) == 0)
    return ecx_5

return ecx_5 | 0x80000000
