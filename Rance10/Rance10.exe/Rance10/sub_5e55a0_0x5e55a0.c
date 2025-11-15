// 函数: sub_5e55a0
// 地址: 0x5e55a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = sub_5665c0(data_7fd4cc, arg1, arg2)
void* result

if (ecx_1 == 0)
    result.b = 0
    return result

result.b = *(ecx_1 + 0x204)

if (result.b == 0)
    result.b = *(ecx_1 + 0x1a8)
    
    if (result.b == 0)
        result.b = *(ecx_1 + 0x1b0)
        
        if (result.b == 0)
            result.b = *(ecx_1 + 0x21c)
            
            if (result.b == 0)
                result.b = *(ecx_1 + 0x228)
                result.b = result.b != 0
                return result

result.b = 1
return result
