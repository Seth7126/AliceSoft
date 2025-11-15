// 函数: sub_55c920
// 地址: 0x55c920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 0x9c)
int32_t ebp = 0
int32_t edi = *(arg1 + 0xa0)
int32_t ebx = 0
char var_15 = 1
int32_t result

if (esi == edi)
label_55ca2f:
    result = *(arg1 + 0x9c)
    
    if (result != *(arg1 + 0xa0))
        void* ecx_8 = *(*(arg1 + 0xa0) - 4)
        result = sub_55ab70(ecx_8 + 0xb4, ecx_8 + 0x38)
        *arg3 += result
else
    int32_t* ecx_7
    
    do
        void* eax_1 = *esi
        int32_t eax_3 = sub_55aaf0(*(eax_1 + 0x6c), eax_1 + 0xb4)
        void* edx_1 = *esi
        int32_t eax_4 = sub_55ab70(edx_1 + 0xb4, edx_1 + 0x38)
        int32_t* eax_6 = *esi + 4
        int32_t* var_14_1 = eax_6
        
        if (eax_6[5] u>= 0x10)
            var_14_1 = *eax_6
        
        int32_t ecx_4 = eax_6[4]
        int32_t eax_8 = 1
        
        if (ecx_4 u< 1)
            eax_8 = ecx_4
        
        int32_t eax_9 = sub_406ac0(eax_8, U"\n\n\n\n\n", var_14_1, eax_8)
        int32_t eax_10
        
        if (eax_9 == 0)
            eax_10 = eax_6[4]
        
        if (eax_9 != 0 || eax_10 u< 1 || eax_10 u> 1)
            ebp += eax_3
            ecx_7 = arg3
            
            if (ebx s< eax_4)
                ebx = eax_4
            
            result.b = 0
        else
            if (var_15 != 0 && ebx s< eax_4)
                ebx = eax_4
            
            ebp = 0
            ecx_7 = arg3
            *ecx_7 += *(*esi + 0x70) + ebx
            ebx = 0
            result.b = 1
        
        var_15 = result.b
        
        if (*arg2 s< ebp)
            *arg2 = ebp
        
        esi = &esi[1]
    while (esi != edi)
    
    if (ebx s> 0)
        *ecx_7 += ebx
        return result
    
    if (result.b != 0)
        goto label_55ca2f

return result
