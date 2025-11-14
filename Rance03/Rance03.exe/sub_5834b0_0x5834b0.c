// 函数: sub_5834b0
// 地址: 0x5834b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg2
void* var_14 = arg2
sub_583580(arg1 + 0x28, *(arg1 + 0x2c), *(ebx + 0x28), *(ebx + 0x2c))

for (int32_t* i = *(ebx + 0x34); i != *(ebx + 0x38); i = &i[1])
    int32_t ecx_1 = *(arg1 + 0x38)
    int32_t* eax_1 = *(arg1 + 0x34)
    
    if (eax_1 == ecx_1)
    label_5834f6:
        int32_t ecx_2
        
        if (i u< ecx_1)
            ecx_2 = *(arg1 + 0x34)
        
        if (i u>= ecx_1 || ecx_2 u> i)
            if (ecx_1 == *(arg1 + 0x3c))
                sub_415950(arg1 + 0x34, 1)
            
            int32_t* ecx_6 = *(arg1 + 0x38)
            
            if (ecx_6 != 0)
                *ecx_6 = *i
        else
            if (ecx_1 == *(arg1 + 0x3c))
                sub_415950(arg1 + 0x34, 1)
            
            int32_t* ecx_4 = *(arg1 + 0x38)
            
            if (ecx_4 != 0)
                *ecx_4 = *(*(arg1 + 0x34) + ((i - ecx_2) s>> 2 << 2))
            
            ebx = arg2
        
        *(arg1 + 0x38) += 4
    else
        while (*eax_1 != *i)
            eax_1 = &eax_1[1]
            
            if (eax_1 == ecx_1)
                break
        
        if (eax_1 == ecx_1)
            goto label_5834f6

int32_t* edx_2 = *(arg1 + 0x38)
int32_t* ecx_7 = *(arg1 + 0x34)
int32_t eax_8 = (edx_2 - ecx_7) s>> 2
int32_t result = sub_52b9a0(eax_8, edx_2, ecx_7, eax_8, 0)
*(arg1 + 0x78) += 1
return result
