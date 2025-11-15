// 函数: sub_566510
// 地址: 0x566510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_18 = &var_4
int32_t* esi = *(arg1 + 0x50)
int32_t edi = *(arg1 + 0x54)

if (esi != edi)
    SRWLOCK* ebx_1 = &esi[1]
    
    do
        __Smtx_lock_shared(ebx_1)
        int32_t ebp_1 = *esi
        __Smtx_unlock_shared(ebx_1)
        
        if (ebp_1 != 0)
            __Smtx_lock_shared(ebx_1)
            void* ebp_2 = *esi
            __Smtx_unlock_shared(ebx_1)
            
            if (sub_5c49e0(ebp_2 + 0x10) == 0)
                *var_18
                return 0
        
        esi = &esi[2]
        ebx_1 = &ebx_1[2]
    while (esi != edi)

void* esi_1 = *(arg1 + 0x14)

if (esi_1 != 0)
    sub_5d0f50(esi_1 + 0x64)
    sub_5d0f50(esi_1 + 0x7c)
    sub_5d09b0(esi_1 + 0x94)
    sub_5d0f50(esi_1 + 0xac)

void* result
result.b = 1
*var_18
return result
