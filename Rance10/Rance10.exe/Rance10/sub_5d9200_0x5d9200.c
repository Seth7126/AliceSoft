// 函数: sub_5d9200
// 地址: 0x5d9200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5d9e70(arg1, arg3)
__Smtx_lock_shared(&arg3[1])
int32_t esi = *arg3
__Smtx_unlock_shared(&arg3[1])

if (esi != 0)
    int128_t* var_c
    int128_t** eax_1 = sub_58ff70(arg3, arg2, &var_c)
    sub_5da0c0(arg1, _mm_cvtepi32_ps(zx.o(arg4)) * 0.00100000005f, eax_1)
    int128_t* esi_1 = var_c
    int32_t var_4
    
    if (esi_1 != 0)
        sub_403160(esi_1, (var_4 - esi_1) s/ 0x1c, 0x1c)

return sub_5d9fa0(arg1)
