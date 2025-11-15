// 函数: sub_62cd50
// 地址: 0x62cd50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = 0
int16_t* result = arg2
uint32_t ebx_3 = (arg3 - result + 1) u>> 1
int32_t edi = 0

if (result u> arg3)
    ebx_3 = 0

if (ebx_3 != 0)
    int32_t ebp_1 = arg1 + 8
    
    do
        uint32_t eax_1 = zx.d(*result)
        int32_t var_14_1 = ebp_1
        int16_t eax_2
        eax_2, arg1, edx = __Towlower(eax_1, edx, arg1, eax_1)
        *result = eax_2
        edi += 1
        result = &result[1]
    while (edi != ebx_3)

return result
