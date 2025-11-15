// 函数: sub_4af7a0
// 地址: 0x4af7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1

if (arg3 == 0)
    return 

int32_t* esi_1 = *arg1
int32_t edi_1 = arg1[1]

if (esi_1 == edi_1)
    return 

char* ebp_1 = &esi_1[1]

do
    int32_t eax_1 = arg2[1]
    int32_t* ecx_1 = *arg2
    
    if (ecx_1 == eax_1)
    label_4af83c:
        sub_6feca0(esi_1, ebp_1, edi_1 - ebp_1)
        arg1[1] -= 4
    else
        while (*ecx_1 != *esi_1)
            ecx_1 = &ecx_1[1]
            
            if (ecx_1 == eax_1)
                break
        
        if (ecx_1 == eax_1)
            goto label_4af83c
        
        int32_t* eax_2 = *esi_1
        int32_t* var_18_1 = eax_2
        void* eax_3 = sub_4f15e0(arg3)
        
        if (eax_3 == 0 || eax_2 s< *(eax_3 + 8) || *(eax_3 + 4) + *(eax_3 + 8) s<= eax_2)
            goto label_4af83c
        
        void* ecx_5 = *(*(eax_3 + 0xc) + ((eax_2 - *(eax_3 + 8)) << 2))
        
        if (ecx_5 == 0)
            goto label_4af83c
        
        int32_t* ecx_6 = *(ecx_5 + 0x74)
        char* eax
        
        if (ecx_6 != 0)
            eax = (*(*ecx_6 + 8))(1)
        
        if (ecx_6 == 0 || eax != 0xd)
            sub_6feca0(esi_1, ebp_1, arg1[1] - ebp_1)
            arg1[1] -= 4
        else
            esi_1 = &esi_1[1]
            ebp_1 = &ebp_1[4]
    
    edi_1 = arg1[1]
while (esi_1 != edi_1)
