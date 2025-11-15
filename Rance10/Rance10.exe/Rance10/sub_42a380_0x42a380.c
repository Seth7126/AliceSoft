// 函数: sub_42a380
// 地址: 0x42a380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg4

if (arg3 == arg2)
label_42a3bd:
    
    if (result != arg5)
        return 1
else
    while (result != arg5)
        int32_t edx = *arg3
        int32_t esi_1 = *result
        
        if (edx s< esi_1)
            result.b = 1
            return result
        
        if (esi_1 s< edx)
            result.b = 0
            return result
        
        arg3 = &arg3[1]
        result = &result[1]
        
        if (arg3 == arg2)
            goto label_42a3bd
    
    if (arg3 == arg2)
        goto label_42a3bd

return 0
