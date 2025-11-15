// 函数: ?get@?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEDXZ
// 地址: 0x70aa6e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t temp0 = arg1[4]
arg1[4] += 1
int32_t edx = arg1[2]
arg1[5] = adc.d(arg1[5], 0, temp0 u>= 0xffffffff)
int32_t esi = arg1[3]

if ((edx | esi) != 0)
    int32_t temp1_1 = arg1[5]
    
    if (temp1_1 u>= esi && (temp1_1 u> esi || arg1[4] u> edx))
        int32_t eax_1
        eax_1.b = 0
        return eax_1

int32_t ecx_1 = __crt_stdio_input::string_input_adapter<char>::get(*arg1)
int32_t eax_2
eax_2.b = ecx_1 == 0xffffffff
eax_2.b -= 1
eax_2.b &= ecx_1.b
return eax_2
