// 函数: sub_44b8e0
// 地址: 0x44b8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg4

if (esi == arg5)
    *arg3 = esi
    return arg3

int32_t* eax_1 = *arg2
int32_t* var_4 = eax_1

while (true)
    int32_t* ecx = &esi[2]
    int32_t* edx
    
    if (eax_1[5] u< 0x10)
        edx = eax_1
    else
        edx = *eax_1
    
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    int32_t ebx_1 = eax_1[4]
    int32_t eax_2 = ebx_1
    int32_t ebp_2 = ecx[4]
    
    if (ebp_2 u< ebx_1)
        eax_2 = ebp_2
    
    int32_t eax_3 = sub_406ac0(eax_2, edx, ecx, eax_2)
    
    if (eax_3 != 0 || ebp_2 u< ebx_1 || ebp_2 u> ebx_1)
        esi = *esi
        arg4 = esi
    
    if ((eax_3 == 0 && ebp_2 u>= ebx_1 && ebp_2 u<= ebx_1) || esi == arg5)
        *arg3 = esi
        return arg3
    
    eax_1 = var_4
