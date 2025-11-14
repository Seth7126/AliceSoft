// 函数: sub_5c86f0
// 地址: 0x5c86f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t* eax = arg1[0x8d]

if (*eax != 1)
    int32_t edx
    return sub_5c24e0(eax, edx, arg1, arg1, 0x6e8228)

arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* var_4
int32_t eax_5
int32_t* ecx_2
int32_t edx_1
eax_5, ecx_2, edx_1 = sub_5d73d0(&arg1[0x5b], *arg1[0x8d], ecx, &var_4)

if (eax_5.b == 0)
    char const* const var_18_1 = "A_REALLOC"
    return sub_5c24e0(eax_5, edx_1, ecx_2, arg1, 0x6e8288)

int32_t* ecx_3 = var_4
int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx_3 u< eax_9)
    eax_9 = *(arg1[0x5d] + (ecx_3 << 2))
    
    if (eax_9 != 0)
        int32_t* result
        int32_t* ecx_4
        int32_t edx_2
        result, ecx_4, edx_2 = sub_5d7310(eax_9, ebx)
        
        if (result.b != 0)
            return result
        
        char const* const var_18_3 = "A_REALLOC"
        return sub_5c24e0(result, edx_2, ecx_4, arg1, 0x6e7e90)

char const* const var_18_4 = "A_REALLOC"
return sub_5c24e0(eax_9, edx_1, ecx_3, arg1, 0x6e7e58)
