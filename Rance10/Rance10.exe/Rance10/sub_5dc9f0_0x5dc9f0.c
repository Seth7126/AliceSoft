// 函数: sub_5dc9f0
// 地址: 0x5dc9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])
int32_t* result

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    result = (*(*esi_1 + 0x18))()
    
    if (result != 0)
        float xmm2_1 = arg2 + arg4
        result[1] = arg3
        *result = arg2
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        result[4] = arg6
        result[5] = 0
        result[6] = 0
        result[8] = arg3
        float xmm3_1 = arg3 + arg5
        result[7] = xmm2_1
        result[9] = 0x3f000000
        result[0xa] = 0x3f800000
        result[0xb] = arg6
        result[0xc] = arg7
        result[0xd] = 0
        result[0xe] = arg2
        result[0xf] = xmm3_1
        result[0x10] = 0x3f000000
        result[0x11] = 0x3f800000
        result[0x12] = arg6
        result[0x13] = 0
        result[0x14] = arg8
        result[0x15] = xmm2_1
        result[0x16] = xmm3_1
        result[0x17] = 0x3f000000
        result[0x18] = 0x3f800000
        result[0x19] = arg6
        result[0x1a] = arg7
        result[0x1b] = arg8
        __Smtx_lock_shared(&arg1[1])
        int32_t* esi_2 = *arg1
        __Smtx_unlock_shared(&arg1[1])
        return (*(*esi_2 + 0x1c))() != 0

result.b = 0
return result
