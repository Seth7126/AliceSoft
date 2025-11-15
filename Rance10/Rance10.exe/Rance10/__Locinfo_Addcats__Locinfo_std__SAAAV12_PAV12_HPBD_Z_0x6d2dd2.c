// 函数: ?_Locinfo_Addcats@_Locinfo@std@@SAAAV12@PAV12@HPBD@Z
// 地址: 0x6d2dd2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0)
    sub_6d0987("bad locale name")
    noreturn

void* result

if (*arg3 != 0x2a || arg3[1] != 0)
    char* var_14_1
    
    if (arg2 != 0)
        if (arg2 != 0x3f)
            for (int32_t i = 0; i s<= 5; i += 1)
                if ((arg2 & 1 << i.b s>> 1) != 0)
                    _setlocale(i, arg3)
        
        var_14_1 = arg3
    else
        var_14_1 = arg2
    
    char* eax_3 = _setlocale(0, var_14_1)
    
    if (eax_3 == 0)
        goto label_6d2e28
    
    result = arg1
    void* edx_1 = *(result + 0x2c)
    
    if (edx_1 == 0)
        edx_1 = result + 0x30
    
    if (*edx_1 != 0x2a || *(edx_1 + 1) != 0)
        sub_630d40(result + 0x2c, eax_3)
else
label_6d2e28:
    result = arg1
    sub_630d40(result + 0x2c, "*")

return result
