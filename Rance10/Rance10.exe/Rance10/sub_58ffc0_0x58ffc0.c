// 函数: sub_58ffc0
// 地址: 0x58ffc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi == 0)
    return 0xffffffff

__Smtx_lock_shared(&arg1[1])
void* esi_1 = *arg1
__Smtx_unlock_shared(&arg1[1])
return sub_5910a0(esi_1, arg2)
