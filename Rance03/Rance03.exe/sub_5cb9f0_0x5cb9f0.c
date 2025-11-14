// 函数: sub_5cb9f0
// 地址: 0x5cb9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t* ecx = arg1[0xb]
int32_t edi = *arg1[0x8d]

if (ecx != 0)
    char eax_3
    int32_t* ecx_1
    int32_t edx_1
    eax_3, edx_1, ecx_1 = (**ecx)()
    
    if (eax_3 != 0)
        int32_t eax_6 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        int32_t var_10_2
        
        if (edi u>= eax_6)
            var_10_2 = edi
            return sub_5c24e0(eax_6, edx_1, ecx_1, arg1, 0x6e8f94)
        
        eax_6 = *(arg1[0x5d] + (edi << 2))
        
        if (eax_6 == 0)
            var_10_2 = edi
            return sub_5c24e0(eax_6, edx_1, ecx_1, arg1, 0x6e8f94)
        
        char* ecx_2
        
        if (*(eax_6 + 0xc) != 0)
            ecx_2 = *(eax_6 + 8)
        else
            ecx_2 = nullptr
        
        sub_4559c0(ecx_2)

int32_t ecx_3 = arg1[0x8b]
int32_t ebx_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (ebx_2 + 1 u>= ecx_3)
    sub_64ad90(&arg1[0x89], ecx_3 * 2)
    arg1[0x8d] = arg1[0x8a] + (ebx_2 << 2)

int32_t* result = arg1[0x8d]
*result = edi
arg1[0x8d] += 4
return result
