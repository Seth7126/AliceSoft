// 函数: sub_631290
// 地址: 0x631290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg3 + 0x298)

if (eax != 0)
    if (eax == 1)
        return sub_62fcc0(arg3, arg4) __tailcall
    
    *(arg3 + 0x298) = eax - 1
    
    if (eax == 2)
        sub_62a550(arg3, "No space in chunk cache for sPLT")
        return sub_62fcc0(arg3, arg4) __tailcall

int32_t eax_4 = *(arg3 + 0x74)

if ((eax_4.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_4.b & 4) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of place") __tailcall

void* eax_6 = sub_62fe60(eax_4, arg4 + 1, arg3, 2)

if (eax_6 == 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of memory") __tailcall

sub_62fc80(eax_6, eax_6, arg3, arg4)
int32_t result = sub_62fcc0(arg3, nullptr)

if (result != 0)
    return result

*(arg4 + eax_6) = result.b
void* esi = eax_6

if (*eax_6 != result.b)
    do
        esi += 1
    while (*esi != 0)

if (esi + 1 u> arg4 - 2 + eax_6)
    return sub_62a550(arg3, "malformed sPLT chunk") __tailcall

int32_t eax_9
eax_9.b = *(esi + 1)
void* esi_2 = esi + 2
char var_c = eax_9.b
int32_t ecx_11
ecx_11.b = eax_9.b != 8
void* eax_13 = eax_6 - esi_2 + arg4
int32_t edx_11 = 0
uint32_t i_1 = divu.dp.d(edx_11:eax_13, (ecx_11 << 2) + 6)

if (modu.dp.d(edx_11:eax_13, (ecx_11 << 2) + 6) != 0)
    return sub_62a550(arg3, "sPLT chunk has bad length") __tailcall

if (i_1 u> 0x19999999)
    return sub_62a550(arg3, "sPLT chunk too long") __tailcall

uint32_t i_2 = i_1
void* eax_17
uint32_t ecx_16
eax_17, ecx_16 = sub_62aca0(arg3, i_1 * 0xa)

if (eax_17 == 0)
    return sub_62a550(arg3, "sPLT chunk requires too much memory") __tailcall

if (i_1 s> 0)
    void* edx_18 = eax_17 + 4
    uint32_t i
    
    do
        void* esi_3
        
        if (eax_9.b != 8)
            *(edx_18 - 4) = zx.w(*esi_2) * 0x100 + zx.w(*(esi_2 + 1))
            *(edx_18 - 2) = zx.w(*(esi_2 + 2)) * 0x100 + zx.w(*(esi_2 + 3))
            *edx_18 = zx.w(*(esi_2 + 4)) * 0x100 + zx.w(*(esi_2 + 5))
            esi_3 = esi_2 + 8
            *(edx_18 + 2) = zx.w(*(esi_2 + 6)) * 0x100 + zx.w(*(esi_2 + 7))
        else
            *(edx_18 - 4) = zx.w(*esi_2)
            *(edx_18 - 2) = zx.w(*(esi_2 + 1))
            *edx_18 = zx.w(*(esi_2 + 2))
            esi_3 = esi_2 + 4
            *(edx_18 + 2) = zx.w(*(esi_2 + 3))
        
        esi_2 = esi_3 + 2
        ecx_16.w = zx.w(*esi_3) * 0x100
        ecx_16.w += zx.w(*(esi_3 + 1))
        *(edx_18 + 4) = ecx_16.w
        edx_18 += 0xa
        i = i_1
        i_1 -= 1
    while (i != 1)

uint32_t var_34_1 = ecx_16
void* var_10 = eax_6
sub_634aa0(&var_10, arg2, arg3, &var_10)
return sub_62ace0(arg3, eax_17) __tailcall
