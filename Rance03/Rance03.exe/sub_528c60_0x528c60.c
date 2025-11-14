// 函数: sub_528c60
// 地址: 0x528c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
int32_t* i = *(ebp + 0x28)
void* edi = ebp + 0x28
void* var_4 = ebp

for (; i != *(ebp + 0x2c); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (*(*ecx + 4))()

*(edi + 4) = *edi
int32_t eax_2

for (int32_t* i_1 = *(ebp + 4); i_1 != *(ebp + 8); i_1 = &i_1[1])
    if (*i_1 != 0)
        int32_t eax_5 = (*(*arg2 + 0x50))()
        int32_t var_8 = eax_5
        
        if (eax_5 == 0)
            eax_5.b = 0
            return eax_5
        
        int32_t ecx_6 = *i_1
        int32_t eax_6 = *(ecx_6 + 0x38)
        int32_t* ebp_1
        
        if (eax_6 + *(ecx_6 + 0x34) s< 0 || eax_6 + *(ecx_6 + 0x34) s<= 0)
            ebp_1 = *(ecx_6 + 0x10)
        else
            ebp_1 = *(ecx_6 + 0x14)
        
        void* eax_8 = *eax_5
        
        if (ebp_1 == 0)
            goto label_528d92
        
        if ((*(eax_8 + 8))(ebp_1, 0) == 0)
            int32_t eax_14
            int32_t ecx_11
            int32_t edx_1
            eax_14, edx_1, ecx_11 = (*(*ebp_1 + 0x10))((*(*ebp_1 + 0x14))())
            sub_59f4e0(eax_14, edx_1, ecx_11, 0x6e3460, eax_14)
            eax_8 = *eax_5
        label_528d92:
            (*(eax_8 + 4))()
            eax_5.b = 0
            return eax_5
        
        sub_412de0(edi, &var_8)
        ebp = var_4
    else
        eax_2 = *(edi + 4)
        int32_t var_c
        int32_t* ecx_1 = &var_c
        var_c = 0
        
        if (&var_c u< eax_2)
            ecx_1 = *edi
        
        if (&var_c u>= eax_2 || ecx_1 u> &var_c)
            if (eax_2 == *(edi + 8))
                int32_t* var_20_2 = ecx_1
                sub_412f20(edi)
            
            eax_2 = *(edi + 4)
            
            if (eax_2 != 0)
                *eax_2 = 0
            
            *(edi + 4) += 4
        else
            if (eax_2 == *(edi + 8))
                int32_t* var_20_1 = ecx_1
                sub_412f20(edi)
            
            int32_t* ecx_3 = *(edi + 4)
            
            if (ecx_3 != 0)
                *ecx_3 = *(*edi + ((&var_c - ecx_1) s>> 2 << 2))
            
            *(edi + 4) += 4

eax_2.b = 1
return eax_2
