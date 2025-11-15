// 函数: sub_56d7e0
// 地址: 0x56d7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg1 + 0xc)
int32_t ecx = *(arg1 + 0x10)
int32_t* result_1 = result
int32_t var_4 = ecx

while (result != ecx)
    void* edi_1 = *result
    int32_t* esi_1 = *(edi_1 + 0x1c)
    int32_t edi_2 = *(edi_1 + 0x20)
    
    if (esi_1 != edi_2)
        SRWLOCK* ebx_1 = &esi_1[1]
        
        do
            __Smtx_lock_shared(ebx_1)
            int32_t ebp_1 = *esi_1
            __Smtx_unlock_shared(ebx_1)
            
            if (ebp_1 == arg2)
                return sub_56cc40(*result_1) __tailcall
            
            esi_1 = &esi_1[9]
            ebx_1 = &ebx_1[9]
        while (esi_1 != edi_2)
        
        result = result_1
        ecx = var_4
    
    result = &result[1]
    result_1 = result

result.b = 0
return result
