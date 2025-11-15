// 函数: sub_5c4e60
// 地址: 0x5c4e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (sub_586ec0(arg1 + 4).b != 0)
    result.b = 1
    return result

void* esi = *(arg1 + 0x1c0)

if (esi != 0)
    if (sub_58a3e0(esi + 0x228).b != 0)
        result.b = 1
        return result
    
    if (sub_5dd4d0(esi + 0x5cc).b == 0)
        result.b = 1
        return result
    
    int32_t** edx_1 = *(arg1 + 0x1c0)
    result = *edx_1
    
    if (result == 0)
        result.b = 1
        return result
    
    result.b = result[0x59] != 0
    
    if (sub_58a430(&edx_1[0x8a], &result[1], zx.d(result.b)).b == 0)
        result.b = 1
        return result

result.b = 0
return result
