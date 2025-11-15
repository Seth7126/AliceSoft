// 函数: sub_586c70
// 地址: 0x586c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* esi = *arg1
int32_t edi = arg1[1]
int32_t result

if (esi != edi)
    result = arg2
    
    do
        void* ebp_1 = *esi
        
        if (ebp_1 != 0)
            int32_t result_1 = result * arg3
            
            if (*(ebp_1 + 0x11c) == 0)
                result_1 = result
            
            sub_5d9180(ebp_1 + 0x120)
            sub_596cb0(ebp_1 + 0x174, *(ebp_1 + 0x1f8), result_1)
            sub_596cb0(ebp_1 + 0x18c, *(ebp_1 + 0x1f8), result_1)
            sub_582a60(ebp_1, result_1)
            result = arg2
        
        esi = &esi[2]
    while (esi != edi)

result.b = 1
return result
