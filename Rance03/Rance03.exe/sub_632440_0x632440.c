// 函数: sub_632440
// 地址: 0x632440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg3 + 0x298)

if (eax != 0)
    if (eax == 1)
        return sub_62fcc0(arg3, arg4) __tailcall
    
    *(arg3 + 0x298) = eax - 1
    
    if (eax == 2)
        sub_62fcc0(arg3, arg4)
        return sub_62a7c0(arg3, "no space in chunk cache") __tailcall

int32_t eax_4 = *(arg3 + 0x74)

if ((eax_4.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_4.b & 4) != 0)
    eax_4 |= 8
    *(arg3 + 0x74) = eax_4

char* eax_5 = sub_62fe60(eax_4, arg4 + 1, arg3, 1)

if (eax_5 == 0)
    return sub_62a7c0(arg3, "out of memory") __tailcall

sub_62fc80(eax_5, eax_5, arg3, arg4)
int32_t result = sub_62fcc0(arg3, nullptr)

if (result == 0)
    void* eax_7 = eax_5 + arg4
    char* ecx_6 = eax_5
    *eax_7 = 0
    
    if (*eax_5 != 0)
        do
            ecx_6 = &ecx_6[1]
        while (*ecx_6 != 0)
    
    if (ecx_6 != eax_7)
        ecx_6 = &ecx_6[1]
    
    int32_t var_1c = 0xffffffff
    char* var_18_1 = eax_5
    int32_t var_8_1 = 0
    int32_t var_4_1 = 0
    int32_t var_c_1 = 0
    char* var_14_1 = ecx_6
    
    do
        eax_7.b = *ecx_6
        ecx_6 = &ecx_6[1]
    while (eax_7.b != 0)
    
    void* ecx_7 = ecx_6 - &ecx_6[1]
    void* var_30_1 = ecx_7
    void* var_10_1 = ecx_7
    result = sub_634590(&var_1c, arg2, arg3, &var_1c)
    
    if (result != 0)
        return sub_62a550(arg3, "Insufficient memory to process text chunk") __tailcall

return result
