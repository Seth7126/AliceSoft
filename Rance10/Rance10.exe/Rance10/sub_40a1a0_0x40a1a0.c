// 函数: sub_40a1a0
// 地址: 0x40a1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_c_2 = arg1
        eax = sub_40a280(esi)
    
    void** ecx_3 = esi[1]
    
    if (ecx_3 != 0)
        eax = *arg2
        *arg2 = nullptr
        *ecx_3 = eax
else
    if (eax == esi[2])
        int32_t* var_c_1 = arg1
        eax = sub_40a280(esi)
    
    int32_t* edx_1 = esi[1]
    
    if (edx_1 != 0)
        int32_t* ecx_1 = *esi + ((arg2 - arg1) s>> 2 << 2)
        int32_t eax_2 = *ecx_1
        *ecx_1 = 0
        *edx_1 = eax_2
        esi[1] += 4
        return eax_2

esi[1] += 4
return eax
