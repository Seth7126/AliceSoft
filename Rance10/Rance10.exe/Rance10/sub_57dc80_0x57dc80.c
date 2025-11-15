// 函数: sub_57dc80
// 地址: 0x57dc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t eax = 0
int32_t edx = arg1[0xc]

if (edx + arg1[0xb] s>= 0)
    eax = edx + arg1[0xb]

if (eax s<= 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t esi_2 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    return esi_2

__Smtx_lock_shared(&arg1[3])
int32_t esi_1 = arg1[2]
__Smtx_unlock_shared(&arg1[3])
return esi_1
