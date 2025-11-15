// 函数: sub_6ffa82
// 地址: 0x6ffa82
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t result

if (*arg1 s<= 0)
label_6ffab6:
    result.b = 0
else
    int32_t ebx_1 = 0
    
    while (true)
        result = ___std_type_info_compare(*(ebx_1 + arg1[1] + 4) + 4, 
            &class std::bad_exception `RTTI Type Descriptor'.spare)
        &class std::bad_exception `RTTI Type Descriptor'.spare
        
        if (result == 0)
            result.b = 1
            break
        
        esi += 1
        ebx_1 += 0x10
        
        if (esi s>= *arg1)
            goto label_6ffab6

return result
