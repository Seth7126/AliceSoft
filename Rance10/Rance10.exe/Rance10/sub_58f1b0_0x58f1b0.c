// 函数: sub_58f1b0
// 地址: 0x58f1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_10 = &var_4
__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[3])
    int32_t esi_1 = arg1[2]
    __Smtx_unlock_shared(&arg1[3])
    
    if (esi_1 != 0)
        __Smtx_lock_shared(&arg1[3])
        int32_t* esi_2 = arg1[2]
        __Smtx_unlock_shared(&arg1[3])
        
        if ((*(*esi_2 + 0x2c))() != 0)
            __Smtx_lock_shared(&arg1[1])
            int32_t* esi_3 = *arg1
            __Smtx_unlock_shared(&arg1[1])
            bool result = (*(*esi_3 + 0x24))() != 0
            *var_10
            return result

*var_10
return 0
