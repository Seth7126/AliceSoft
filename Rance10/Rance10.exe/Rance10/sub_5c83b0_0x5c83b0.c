// 函数: sub_5c83b0
// 地址: 0x5c83b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = *(*arg1 + 0x15c)
void* result

if (arg1[0x87] s>= 2)
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    result = (*(*esi_1 + 0xac))()

if (arg1[0x87] s< 2 || result.b == 0)
    result.b = 0
else
    result.b = 1

if (ebp s> 0 && result.b != 0)
    void* eax_2 = *arg1
    int32_t edx_1 = *(eax_2 + 0xbc)
    int32_t ecx_1 = *(eax_2 + 0xc8)
    int32_t edi_2 = *(eax_2 + 0xc0)
    result = *(eax_2 + 0xcc)
    
    if (arg1[0x12c] == edx_1 && arg1[0x12d] == edi_2 && arg1[0x12e] == ecx_1
            && arg1[0x12f] == result)
        goto label_5c845e
    
    if (arg1[0x12b].b == 0)
    label_5c8469:
        
        if (ebp s> 0)
            if (sub_5dcdc0(&arg1[0x12c], edx_1, edi_2, ecx_1, result, sub_431af0(&arg1[1])).b == 0)
                result.b = 0
                return result
            
            arg1[0x12b].b = 1
        
        if (arg1[0x12b].b != 0)
            goto label_5c849f
    else
        sub_5dce70(&arg1[0x12c])
        arg1[0x12b].b = 0
    label_5c845e:
        
        if (arg1[0x12b].b == 0)
            goto label_5c8469
        
    label_5c849f:
        
        if (sub_5dc950(&arg1[0x130]).b == 0)
            result.b = 0
            return result
        
        if (sub_5dc950(&arg1[0x151]).b == 0)
            result.b = 0
            return result
else if (arg1[0x12b].b != 0)
    sub_5dce70(&arg1[0x12c])
    arg1[0x12b].b = 0

result.b = 1
return result
