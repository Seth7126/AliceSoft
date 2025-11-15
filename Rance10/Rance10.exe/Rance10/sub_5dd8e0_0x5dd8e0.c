// 函数: sub_5dd8e0
// 地址: 0x5dd8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* ebx = arg1
void** eax = sub_5dda40(arg1, arg3)

if (eax != *ebx)
    __Smtx_lock_shared(&eax[5])
    int32_t ebp_1 = eax[4]
    __Smtx_unlock_shared(&eax[5])
    __Smtx_lock_shared(&arg3[1])
    int32_t edi_3 = *arg3
    __Smtx_unlock_shared(&arg3[1])
    
    if (edi_3 u>= ebp_1)
        *arg2 = eax
        return arg2

int32_t* eax_2 = arg2
*eax_2 = *ebx
return eax_2
