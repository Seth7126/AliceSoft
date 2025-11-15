// 函数: ??$write_floating_point@M@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NABM@Z
// 地址: 0x707f1d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x6c) += 4
int32_t* edx = *(*(arg1 + 0x6c) - 4)
int32_t result

if (edx != 0)
    *(arg1 + 0x70) += 1
    *edx = *arg2
    result.b = 1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result.b = 0

return result
