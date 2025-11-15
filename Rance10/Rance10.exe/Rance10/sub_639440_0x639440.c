// 函数: sub_639440
// 地址: 0x639440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t edx_1 = arg3
int32_t eax_1 = 0
int32_t var_4 = arg1
wchar16 const (** const esi_1)[0x6] = &data_79935c
int16_t* ecx = arg2

do
    if ((((*(eax_1 + 0x799360) * 2) ^ (edx_1 - ecx)) & 0xfffffffe) == 0)
        int32_t var_18_1 = 0.d
        
        if (sub_639c00(&var_4, edx_1, ecx, *esi_1, &var_4) != 0)
            break
        
        edx_1 = arg3
        ecx = arg2
    
    edi += 1
    eax_1 = edi << 4
    esi_1 = eax_1 + &data_79935c
while (*(eax_1 + &data_79935c) != 0)

uint32_t result = 0

if ((&data_79935c)[edi * 4] != 0)
    result = zx.d(*((edi << 4) + 0x799364))

if (arg4 != 0 && (result.b & 3) != 0)
    return result | 3

return result
