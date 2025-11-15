// 函数: sub_4da7a0
// 地址: 0x4da7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
int32_t* i = *(arg1 + 0x20)
int32_t* result

for (int32_t edi = *(arg1 + 0x24); i != edi; i = &i[1])
    void* ebx_1 = *i
    void* ecx = *(ebx_1 + 0x1c)
    
    if (ecx != 0)
        result = sub_4d8940(ecx, *(ecx + 0x34))
        
        if (result != 0)
            result, ebx_1, i, edi = sub_5505a0(result, arg2, arg3, arg4.b)
            
            if (result.b != 0)
                result.b = 1
                return result
    
    if (*(ebx_1 + 0x20) != 0)
        result = sub_4da7a0(arg2, arg3, arg4)
    
    if (*(ebx_1 + 0x20) != 0 && result.b != 0)
        result.b = 1
        return result
    
    void* ecx_3 = *(ebx_1 + 0x24)
    
    if (ecx_3 != 0)
        result = sub_4d1c00(ecx_3, arg2, arg3, arg4.b)
        
        if (result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
