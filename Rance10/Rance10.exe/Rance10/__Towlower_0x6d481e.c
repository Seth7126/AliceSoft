// 函数: __Towlower
// 地址: 0x6d481e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
wchar16 arg_4
arg3.w = arg_4
var_8.w = arg3.w
int32_t result

if (arg3.w != 0xffff)
    int32_t eax_1 = *(arg4 + 0xc)
    
    if (eax_1 != 0 || arg3.w u>= 0x100)
        result, arg3 = ___crtLCMapStringW(eax_1, 0x100, &arg_4, 1, &var_8, 1)
        arg3.w = arg_4
        
        if (result != 0)
            arg3.w = var_8.w
    else if ((arg3 - 0x41).w u<= 0x19)
        arg3.w += 0x20

result.w = arg3.w
return result
