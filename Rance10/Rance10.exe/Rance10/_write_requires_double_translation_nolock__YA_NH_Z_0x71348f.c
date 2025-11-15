// 函数: ?write_requires_double_translation_nolock@@YA_NH@Z
// 地址: 0x71348f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

enum CONSOLE_MODE mode = arg3
BOOL result

if (__isatty(arg4) != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_2 = arg4 s>> 6
    int32_t esi_2 = (arg4 & 0x3f) * 0x30
    void* eax_1
    
    if ((*((&data_7fc718)[edi_2] + esi_2 + 0x28) & 0x80) != 0)
        eax_1 = *(sub_714cce() + 0x4c)
    
    if ((*((&data_7fc718)[edi_2] + esi_2 + 0x28) & 0x80) != 0
            && (*(eax_1 + 0xa8) != 0 || *((&data_7fc718)[edi_2] + esi_2 + 0x29) != 0))
        result.b = GetConsoleMode(*((&data_7fc718)[edi_2] + esi_2 + 0x18), &mode) != 0
    else
        result.b = 0
else
    result.b = 0

return result
