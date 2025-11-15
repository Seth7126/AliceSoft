// 函数: sub_5dc950
// 地址: 0x5dc950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    char result
    int32_t ecx_1
    result, ecx_1 = (*(*esi_1 + 0x3c))()
    
    if (result == 0)
        int32_t var_28_1 = ecx_1
        result = sub_5dc9f0(arg1, arg1[2], arg1[3], arg1[4], arg1[5], arg1[6], arg1[7], arg1[8])
        
        if (result == 0)
            return result

return 1
