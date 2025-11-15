// 函数: ?convert_hexadecimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z
// 地址: 0x70a4f3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* edx = arg1
uint32_t ebx = 0
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
char* esi = &edx[2]
int32_t ecx_1
ecx_1.b = arg2[1].b == 0
int32_t var_c_1 = *edx - 1 + ((ecx_1 - 1) & 0x1d) + 0x18
void* ecx_6 = &edx[2] + edx[1]
void* var_8_1 = ecx_6
int32_t eax_4

if (esi != ecx_6)
    while (true)
        int32_t edx_1
        eax_4, edx_1 = __crt_strtox::floating_point_value::normal_mantissa_mask(arg2)
        
        if (ebx u> edx_1 || (ebx u>= edx_1 && edi_1 u> eax_4))
            ecx_6 = var_8_1
            break
        
        ecx_6 = var_8_1
        int32_t ebx_1 = ebx << 4 | edi_1 u>> 0xffffffe4
        int32_t edx_2
        edx_2:eax_4 = sx.q(zx.d(*esi))
        int32_t edi_2 = edi_1 << 4
        edi_1 = edi_2 + eax_4
        ebx = adc.d(ebx_1, edx_2, edi_2 + eax_4 u< edi_2)
        var_c_1 -= 4
        esi = &esi[1]
        
        if (esi == ecx_6)
            break
        
        continue
    
    edx = arg1

while (true)
    eax_4.b = 1
    
    while (true)
        var_8_1.b = eax_4.b
        
        if (esi == ecx_6 || eax_4.b == 0)
            return __crt_strtox::assemble_floating_point_value(edi_1, ebx, var_c_1, edx[0xc2].b, 
                var_8_1.b, arg2)
        
        eax_4.b = *esi
        esi = &esi[1]
        
        if (eax_4.b == 0)
            break
        
        eax_4.b = 0
