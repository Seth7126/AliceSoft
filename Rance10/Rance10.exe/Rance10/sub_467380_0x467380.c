// 函数: sub_467380
// 地址: 0x467380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
int32_t* result

if (cond:0)
    result = arg1
else
    result = *arg1

*result = 0

if (*(arg2 + 0x20) != 0)
    void* ebx_1 = *(arg2 + 0x24)
    
    if (ebx_1 != *(arg2 + 0x1c) && ebx_1 != 0xfffffff8)
        if (*(ebx_1 + 0x38) != 2)
            result.b = 1
            return result
        
        if (sub_407560(ebx_1 + 8, "string").b == 0 && sub_407560(ebx_1 + 8, 0x75eec4).b == 0)
            if (arg1 != ebx_1 + 8)
                sub_403590(arg1, ebx_1 + 8, 0, 0xffffffff)
            
            if (*(arg2 + 0x20) != 0 && *(arg2 + 0x24) != *(arg2 + 0x1c))
                result = **(arg2 + 0x24)
                *(arg2 + 0x24) = result
                
                if (*(arg2 + 0x20) != 0 && result != *(arg2 + 0x1c) && result != 0xfffffff8)
                    result.b = 1
                    return result

result.b = 0
return result
