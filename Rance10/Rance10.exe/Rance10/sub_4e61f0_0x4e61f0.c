// 函数: sub_4e61f0
// 地址: 0x4e61f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 0xc, arg3, arg2)
int32_t* result = arg3[1]

if (result == 1)
label_4e621c:
    *(arg1 + 0xe0) = 0
label_4e6223:
    result = *(arg1 + 0xc0)
    int32_t ecx_1 = *(arg1 + 0xc4)
    
    if (result != ecx_1)
        while (*result == 0xffffffff)
            result = &result[1]
            
            if (result == ecx_1)
                return result
        
        if (arg3[1] == 1)
            result.b = *(arg1 + 0xf1) == 0
            return sub_4e84a0(arg1, result.b)
else if (result == 2 || result == 4)
    if (result != 1)
        goto label_4e6223
    
    goto label_4e621c

return result
