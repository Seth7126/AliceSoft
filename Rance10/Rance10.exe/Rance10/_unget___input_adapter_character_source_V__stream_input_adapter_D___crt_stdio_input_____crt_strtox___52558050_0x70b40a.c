// 函数: ?unget@?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEXD@Z
// 地址: 0x70b40a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t temp1 = arg1[4]
arg1[4] -= 1
int32_t edx = arg1[2]
arg1[5] = adc.d(arg1[5], 0xffffffff, temp1 u>= 1)
int32_t esi = arg1[3]
int32_t result = edx | esi

if (result == 0)
label_70b430:
    result.b = arg2
    
    if (result.b != 0 && result.b != 0xff)
        return __crt_stdio_input::string_input_adapter<char>::unget(*arg1, sx.d(result.b))
else
    int32_t temp2_1 = arg1[5]
    
    if (temp2_1 u<= esi && (temp2_1 u< esi || arg1[4] u<= edx))
        goto label_70b430

return result
