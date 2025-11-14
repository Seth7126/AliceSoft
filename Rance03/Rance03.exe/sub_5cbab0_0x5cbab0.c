// 函数: sub_5cbab0
// 地址: 0x5cbab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
int32_t eax_3 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ebx u< eax_3)
    eax_3 = *(arg1[0x5d] + (ebx << 2))
    
    if (eax_3 != 0)
        int32_t eax_5
        
        if (*(eax_3 + 0xc) != 0)
            eax_5 = *(eax_3 + 8)
        else
            eax_5 = 0
        
        sub_64b530(eax_5)
        int32_t ecx = arg1[0x8b]
        int32_t edi_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2
        
        if (edi_2 + 1 u>= ecx)
            sub_64ad90(&arg1[0x89], ecx * 2)
            arg1[0x8d] = arg1[0x8a] + (edi_2 << 2)
        
        int32_t* result = arg1[0x8d]
        *result = ebx
        arg1[0x8d] += 4
        return result

int32_t var_10_2 = ebx
int32_t edx
return sub_5c24e0(eax_3, edx, arg1, arg1, 0x6e8f5c)
