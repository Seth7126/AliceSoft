// 函数: sub_49c1d0
// 地址: 0x49c1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = sub_485c10(arg1 + 4, arg2, 0)

if (arg2 == 1)
    *(arg1 + 0x90) = 0
label_49c1fb:
    result = *(arg1 + 0x6c)
    int32_t ecx_1 = *(arg1 + 0x70)
    
    if (result != ecx_1)
        while (*result == 0xffffffff)
            result = &result[1]
            
            if (result == ecx_1)
                return result
        
        if (arg2 == 1)
            result.b = *(arg1 + 0xa0) == 0
            return sub_49e1d0(arg1 - 4, zx.d(result.b))
else if (arg2 == 2 || arg2 == 4)
    goto label_49c1fb

return result
