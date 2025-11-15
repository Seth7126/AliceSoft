// 函数: sub_4bc930
// 地址: 0x4bc930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x10) = 0

void* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0 && (*(ecx_1 + 0x1c) != 0 || *(ecx_1 + 0x20) != 0 || *(ecx_1 + 0x24) != 0))
    int32_t var_4 = 0
    int32_t var_8 = 0
    sub_4bdc50(ecx_1, &var_4, &var_8)
    void* ecx_2 = *(arg1 + 8)
    int32_t edx_1 = var_8
    *(ecx_2 + 0x14) = var_4
    *(ecx_2 + 0x18) = edx_1
    void* eax_3 = *(arg1 + 8)
    int32_t var_14_2 = *(eax_3 + 0x18)
    int32_t edx_2 = *arg2
    int32_t var_18_1 = *(eax_3 + 0x14)
    int32_t eax_4
    
    if (*(arg1 + 0xc) == 0)
        eax_4 = (*(edx_2 + 0xc))(var_18_1, var_14_2, 0x20)
    else
        eax_4 = (*(edx_2 + 8))(var_18_1, var_14_2, 0x20)
    
    *(arg1 + 0x10) = eax_4
    
    if (eax_4 == 0)
        eax_4.b = 0
        return eax_4
    
    sub_4bd9f0(*(arg1 + 8), eax_4, arg3)

int32_t eax
eax.b = 1
return eax
