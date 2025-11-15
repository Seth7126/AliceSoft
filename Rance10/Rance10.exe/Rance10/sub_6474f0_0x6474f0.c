// 函数: sub_6474f0
// 地址: 0x6474f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x18)
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    void* result_1 = result
    
    if (result != 0)
        sub_6491b0(result, 0, &result_1, 0, *(arg1 + 0xc), *(arg1 + 0x10), 0xffffffff)
        int32_t* ecx_2 = *(arg1 + 0x18)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
