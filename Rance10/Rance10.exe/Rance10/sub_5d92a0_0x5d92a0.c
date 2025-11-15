// 函数: sub_5d92a0
// 地址: 0x5d92a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5d9e70(arg1, arg3)
__Smtx_lock_shared(&arg3[1])
int32_t esi = *arg3
int32_t result = __Smtx_unlock_shared(&arg3[1])

if (esi != 0)
    __Smtx_lock_shared(&arg4[1])
    int32_t esi_1 = *arg4
    result = __Smtx_unlock_shared(&arg4[1])
    
    if (esi_1 != 0)
        __Smtx_lock_shared(&arg4[1])
        void* edi_2 = *arg4
        __Smtx_unlock_shared(&arg4[1])
        __Smtx_lock_shared(&arg3[1])
        void* esi_2 = *arg3
        int32_t var_24_1 = __Smtx_unlock_shared(&arg3[1])
        return sub_590760(esi_2, arg2, arg5, edi_2, arg6, &arg1[0x11])

return result
