// 函数: sub_65e610
// 地址: 0x65e610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg3
int32_t i = 0
int32_t* edi = *result

if (*(arg1 + 0x11c) s> 0)
    result = arg2 - edi
    arg2 = result
    
    do
        char* edx_1 = *(result + edi)
        char* j = *edi
        
        for (void* esi_2 = *(arg1 + 0x5c) + j; j u< esi_2; j = &j[2])
            char ecx = *edx_1
            edx_1 = &edx_1[1]
            *j = ecx
            j[1] = ecx
        
        result = arg2
        i += 1
        edi = &edi[1]
    while (i s< *(arg1 + 0x11c))

return result
