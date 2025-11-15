// 函数: sub_497e70
// 地址: 0x497e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

for (int32_t* i = *(arg1 + 0x1d4); i != 0; i = *(arg1 + 0x1d4))
    (*(*i + 0xc))()
    int32_t eax_2 = *(arg1 + 0x1e0)
    int32_t* esi_1 = *(arg1 + 0x1dc)
    int32_t ebx_1 = 0
    uint32_t ebp_4 = (eax_2 - esi_1 + 3) u>> 2
    
    if (esi_1 u> eax_2)
        ebp_4 = 0
    
    if (ebp_4 != 0)
        do
            (*(**esi_1 + 4))()
            ebx_1 += 1
            esi_1 = &esi_1[1]
        while (ebx_1 != ebp_4)
    
    *(arg1 + 0x1e0) = *(arg1 + 0x1dc)
    (*(**(arg1 + 0x128) + 0x28))()
    int32_t* ecx_2 = *(arg1 + 0x1d4)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(arg1 + 0x1d4) = 0
    
    int32_t* ecx_3 = data_7fcbb8
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))()
        data_7fcbb8 = 0
    
    int32_t eax_8 = **(arg1 + 0x128)
    
    if (*(arg1 + 0x1f0) == 0)
        int32_t result = (*(eax_8 + 0x2c))()
        sub_497de0(arg1)
        return result
    
    (*(eax_8 + 0x30))()
    *(arg1 + 0x1f0) = 0
    sub_4969c0(arg1 + 0x1a0)
    int32_t* ecx_6 = *(arg1 + 0x1d0)
    
    if (ecx_6 != 0)
        ecx_6 = (*(*ecx_6 + 4))()
        *(arg1 + 0x1d0) = 0
    
    sub_495c70(ecx_6)
    
    if (sub_4972e0(arg1, 0) == 0)
        return 0

sub_497de0(arg1)
return 0
