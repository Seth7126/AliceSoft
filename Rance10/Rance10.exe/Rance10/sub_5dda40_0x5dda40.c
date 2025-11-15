// 函数: sub_5dda40
// 地址: 0x5dda40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    int32_t* edi_1 = arg2
    SRWLOCK* ebx_1 = &edi_1[1]
    SRWLOCK* var_4_1 = ebx_1
    
    do
        __Smtx_lock_shared(ebx_1)
        int32_t ebp_1 = *edi_1
        __Smtx_unlock_shared(ebx_1)
        __Smtx_lock_shared(&result_2[5])
        int32_t edi_2 = result_2[4]
        __Smtx_unlock_shared(&result_2[5])
        
        if (edi_2 u>= ebp_1)
            result = result_2
            result_2 = *result_2
            result_1 = result
        else
            result_2 = result_2[2]
            result = result_1
        
        ebx_1 = var_4_1
        edi_1 = arg2
    while (*(result_2 + 0xd) == 0)

return result
