// 函数: sub_6ae800
// 地址: 0x6ae800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x298)

if (eax != 0)
    if (eax == 1)
        return sub_6ace40(arg3, arg4)
    
    *(arg3 + 0x298) = eax - 1
    
    if (eax == 2)
        sub_6a7530(arg3, "No space in chunk cache for sPLT")
        return sub_6ace40(arg3, arg4)

char eax_4 = (*(arg3 + 0x74)).b

if ((eax_4 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_4 & 4) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "out of place")

char* ebx = *(arg3 + 0x2b8)
char* var_24 = ebx
void* eax_6 = arg4 + 1

if (ebx == 0)
label_6ae8d5:
    
    if (eax_6 != 0)
        int32_t ecx_2 = *(arg3 + 0x274)
        
        if (ecx_2 == 0)
            char* eax_9 = sub_705e22()
            var_24 = eax_9
            ebx = eax_9
        else
            ebx = ecx_2(arg3, eax_6)
            var_24 = ebx
    
    if (eax_6 == 0 || ebx == 0)
        sub_6ace40(arg3, arg4)
        return sub_6a77d0(arg3, "out of memory")
    
    *(arg3 + 0x2b8) = ebx
    *(arg3 + 0x2bc) = arg4 + 1
else if (eax_6 u> *(arg3 + 0x2bc))
    int32_t eax_7 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_7 == 0)
        _free(ebx)
    else
        eax_7(arg3, ebx)
    
    eax_6 = arg4 + 1
    goto label_6ae8d5

int32_t eax_11 = *(arg3 + 0x5c)

if (eax_11 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_11(arg3, ebx, arg4), ebx, arg3, arg4)
int32_t result = sub_6ace40(arg3, nullptr)

if (result != 0)
    return result

void* eax_13 = ebx + arg4
char* esi_1 = ebx
*eax_13 = 0

if (*ebx != 0)
    do
        esi_1 = &esi_1[1]
    while (*esi_1 != 0)

if (&esi_1[1] u> eax_13 - 2)
    return sub_6a7530(arg3, "malformed sPLT chunk")

void* eax_14
eax_14.b = esi_1[1]
void* esi_3 = &esi_1[2]
char var_14 = eax_14.b
int32_t ecx_6
ecx_6.b = eax_14.b != 8
void* eax_18 = ebx - esi_3 + arg4
int32_t edx_4 = 0
uint32_t i_2 = divu.dp.d(edx_4:eax_18, (ecx_6 << 2) + 6)
uint32_t i_1 = i_2

if (modu.dp.d(edx_4:eax_18, (ecx_6 << 2) + 6) != 0)
    return sub_6a7530(arg3, "sPLT chunk has bad length")

if (i_2 u> 0x19999999)
    return sub_6a7530(arg3, "sPLT chunk too long")

uint32_t i_3 = i_2
void* eax_22
int32_t ecx_9
eax_22, ecx_9 = sub_6a7cb0(arg3, i_2 * 0xa)

if (eax_22 == 0)
    return sub_6a7530(arg3, "sPLT chunk requires too much memory")

if (i_1 s> 0)
    ebx.b = eax_14.b
    void* edx_8 = eax_22 + 4
    uint32_t i
    
    do
        void* esi_4
        
        if (ebx.b != 8)
            *(edx_8 - 4) = zx.w(*esi_3) * 0x100 + zx.w(*(esi_3 + 1))
            *(edx_8 - 2) = zx.w(*(esi_3 + 2)) * 0x100 + zx.w(*(esi_3 + 3))
            *edx_8 = zx.w(*(esi_3 + 4)) * 0x100 + zx.w(*(esi_3 + 5))
            esi_4 = esi_3 + 8
            *(edx_8 + 2) = zx.w(*(esi_3 + 6)) * 0x100 + zx.w(*(esi_3 + 7))
        else
            *(edx_8 - 4) = zx.w(*esi_3)
            *(edx_8 - 2) = zx.w(*(esi_3 + 1))
            *edx_8 = zx.w(*(esi_3 + 2))
            esi_4 = esi_3 + 4
            *(edx_8 + 2) = zx.w(*(esi_3 + 3))
        
        esi_3 = esi_4 + 2
        ecx_9.w = (zx.d(*esi_4) * 0x100).w + zx.w(*(esi_4 + 1))
        *(edx_8 + 4) = ecx_9.w
        edx_8 += 0xa
        i = i_1
        i_1 -= 1
    while (i != 1)
    ebx = var_24

int32_t var_3c_5 = ecx_9
char* var_18 = ebx
sub_6b2480(&var_18, arg2, arg3, &var_18)
return sub_6a7cf0(arg3, eax_22)
