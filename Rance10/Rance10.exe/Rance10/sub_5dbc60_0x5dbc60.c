// 函数: sub_5dbc60
// 地址: 0x5dbc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x10)
int32_t esi = *(arg1 + 0xc)
__Smtx_unlock_shared(arg1 + 0x10)

if (esi == 0)
label_5dbcc9:
    __Smtx_lock_shared(arg1 + 0x18)
    int32_t esi_2 = *(arg1 + 0x14)
    __Smtx_unlock_shared(arg1 + 0x18)
    
    if (esi_2 == 0)
    label_5dbd24:
        int32_t var_118 = *(arg2 + 0xc)
        int32_t var_11c = *(arg2 + 8)
        int32_t var_120 = *(arg2 + 4)
        void var_100
        sub_561770(&var_100)
        int32_t xmm1 = *(arg2 + 0x10)
        void var_c0
        void* ecx_5 = &var_c0
        int32_t var_128 = xmm1
        int32_t var_13c = xmm1
        sub_5868a0(ecx_5, xmm1)
        void var_80
        void var_40
        int32_t* result = sub_4ba000(sub_586bc0(ecx_5, &var_40, &var_100), &var_80)
        *(arg1 + 0x20) = *result
        *(arg1 + 0x30) = *(result + 0x10)
        *(arg1 + 0x40) = *(result + 0x20)
        int128_t xmm0_6 = *(result + 0x30)
        result.b = 1
        *(arg1 + 0x50) = xmm0_6
        return result
    
    __Smtx_lock_shared(arg1 + 0x18)
    int32_t* esi_3 = *(arg1 + 0x14)
    __Smtx_unlock_shared(arg1 + 0x18)
    
    if ((*(*esi_3 + 0x14))() != 0)
        goto label_5dbd24
    
    if (sub_5db840(arg1) != 0)
        goto label_5dbd24
else
    __Smtx_lock_shared(arg1 + 0x10)
    int32_t* esi_1 = *(arg1 + 0xc)
    __Smtx_unlock_shared(arg1 + 0x10)
    
    if ((*(*esi_1 + 0x3c))() != 0)
        goto label_5dbcc9
    
    if (sub_5db420(arg1) != 0)
        goto label_5dbcc9

return 0
