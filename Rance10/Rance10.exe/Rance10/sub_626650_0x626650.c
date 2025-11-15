// 函数: sub_626650
// 地址: 0x626650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* edi = arg2
int32_t ebp = edi[4]

if (ebp == 0)
    return 0xffffffff

void* esi = *arg1
int32_t result = 0
int32_t eax_4 = (arg1[1] - esi) s/ 0x70

if (eax_4 s> 0)
    int32_t** esi_1 = esi + 0x18
    
    while (true)
        int32_t* edx_3
        
        if (edi[5] u< 0x10)
            edx_3 = edi
        else
            edx_3 = *edi
        
        int32_t* ecx_3
        
        if (esi_1[5] u< 0x10)
            ecx_3 = esi_1
        else
            ecx_3 = *esi_1
        
        int32_t edi_1 = esi_1[4]
        int32_t eax_5 = ebp
        
        if (edi_1 u< ebp)
            eax_5 = edi_1
        
        if (sub_406ac0(eax_5, edx_3, ecx_3, eax_5) == 0 && edi_1 u>= ebp && edi_1 u<= ebp)
            return result
        
        result += 1
        esi_1 = &esi_1[0x1c]
        
        if (result s>= eax_4)
            break
        
        edi = arg2

return 0xffffffff
