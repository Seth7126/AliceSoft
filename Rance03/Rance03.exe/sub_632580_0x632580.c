// 函数: sub_632580
// 地址: 0x632580
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

void* eax_5 = sub_62fe60(eax_4, arg4, arg3, 2)

if (eax_5 == 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of memory") __tailcall

sub_62fc80(eax_5, eax_5, arg3, arg4)
void* result
int32_t ecx_7
result, ecx_7 = sub_62fcc0(arg3, nullptr)

if (result == 0)
    char* esi_1 = nullptr
    
    if (arg4 != 0)
        while (*(esi_1 + eax_5) != 0)
            esi_1 = &esi_1[1]
            
            if (esi_1 u>= arg4)
                break
    
    if (arg4 == 0 || esi_1 u> 0x4f || esi_1 u< 1)
        return sub_62a7c0(arg3, "bad keyword") __tailcall
    
    if (&esi_1[3] u> arg4)
        return sub_62a7c0(arg3, "truncated") __tailcall
    
    if (*(esi_1 + eax_5 + 1) != 0)
        return sub_62a7c0(arg3, "unknown compression type") __tailcall
    
    int32_t var_38_1 = ecx_7
    int32_t var_24 = 0xffffffff
    result = sub_6301b0(&esi_1[2], arg4, arg3, &esi_1[2], &var_24)
    
    if (result != 1)
        char* edx_14 = *(arg3 + 0x9c)
        
        if (edx_14 != 0)
            return sub_62a7c0(arg3, edx_14) __tailcall
    else
        void* ecx_13 = *(arg3 + 0x2b8)
        int32_t edx_11 = var_24
        void* var_38_2 = ecx_13
        void* var_18_1 = ecx_13
        int32_t var_10_1 = edx_11
        int32_t var_1c = 0
        *(&esi_1[edx_11] + ecx_13 + 2) = 0
        int32_t var_c_1 = 0
        void* var_14_1 = ecx_13 + 2 + esi_1
        int32_t var_8_1 = 0
        int32_t var_4_1 = 0
        result = sub_634590(&var_1c, arg2, arg3, &var_1c)
        
        if (result != 0)
            return sub_62a7c0(arg3, "insufficient memory") __tailcall

return result
