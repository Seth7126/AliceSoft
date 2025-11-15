// 函数: sub_637630
// 地址: 0x637630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int16_t* edx = arg4
int32_t eax = arg7
int16_t* esi = arg6
int16_t* ecx = edx

if (edx != arg5)
    while (esi != eax)
        int16_t* eax_1 = edx
        int16_t* ecx_1 = esi
        esi = &esi[1]
        edx = &edx[1]
        arg6 = esi
        arg4 = edx
        eax_1.w = *eax_1
        
        if (eax_1.w != *ecx_1)
            *arg3 = ecx
            return arg3
        
        eax = arg7
        
        if (edx == arg5)
            break

if (esi == eax)
    ecx = edx

*arg3 = ecx
return arg3
