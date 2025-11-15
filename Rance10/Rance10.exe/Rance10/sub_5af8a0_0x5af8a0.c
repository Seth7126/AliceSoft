// 函数: sub_5af8a0
// 地址: 0x5af8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x55c) != 0)
    int32_t* eax_1 = *(arg1 + 0x564)
    void* ecx
    
    if (eax_1 != 0)
        ecx = *(arg1 + 0x560)
    
    float xmm0_1
    
    if (eax_1 == 0 || ecx == 0)
        xmm0_1 = (zx.o(0)).d
    else
        xmm0_1 = *(ecx + 0x30)
    
    float xmm0_2 = xmm0_1 + arg2
    float var_18_1 = xmm0_2
    
    if (eax_1 != 0 && *(arg1 + 0x560) != 0)
        sub_5d9200(arg1 + 0x50c, xmm0_2, eax_1, arg12)
    
    void* ecx_3 = *(arg1 + 0x55c) + 0x80
    float var_14 = *arg4 f+ *(arg1 + 0x378)
    float var_10_1 = arg4[1] f+ *(arg1 + 0x37c)
    float var_c_1 = arg4[2] f+ *(arg1 + 0x380)
    sub_5b74e0(ecx_3, &var_14)
    sub_596120(*(arg1 + 0x55c), arg6)
    void* ecx_6 = *(arg1 + 0x55c) + 0x80
    var_14 = *(arg3 + 0xc0) * *arg5
    float var_10_2 = *(arg3 + 0xc4) * arg5[1]
    float var_c_2 = *(arg3 + 0xc8) * arg5[2]
    sub_5b7450(ecx_6, &var_14)
    void* ecx_8 = *(arg1 + 0x55c) + 0x70
    var_14 = *(arg3 + 0xe4) * *arg7
    float var_10_3 = *(arg3 + 0xe8) * arg7[1]
    float var_c_3 = *(arg3 + 0xec) * arg7[2]
    float var_8_1 = *(arg3 + 0xf0) * arg7[3]
    sub_58e810(ecx_8, (zx.o(0)).d, &var_14, nullptr)
    void* ecx_10 = *(arg1 + 0x55c) + 0x70
    var_14 = *(arg3 + 0xf4) + *arg8
    float var_10_4 = *(arg3 + 0xf8) + arg8[1]
    float var_c_4 = *(arg3 + 0xfc) + arg8[2]
    float var_8_2 = *(arg3 + 0x100) + arg8[3]
    sub_58e950(ecx_10, (zx.o(0)).d, &var_14, nullptr)
    sub_58ea90(*(arg1 + 0x55c) + 0x70, arg9, (zx.o(0)).d, nullptr)
    *(*(arg1 + 0x55c) + 0x20) = *(arg1 + 0x210)
    *(*(arg1 + 0x55c) + 0x21) = *(arg1 + 0x211)
    void* ecx_14
    ecx_14.b = *(*(arg3 + 0x110) + 8) != 0
    *(*(arg1 + 0x55c) + 0x22) = ecx_14.b
    int32_t* esi_2 = *(arg1 + 0x564)
    
    if (esi_2 != 0)
        __Smtx_lock_shared(&esi_2[1])
        void** esi_3 = *esi_2
        __Smtx_unlock_shared(&esi_2[1])
        sub_58eb70(*(arg1 + 0x55c) + 0x70, esi_3)
    
    __Smtx_lock_shared(arg1 + 0x508)
    void* esi_4 = *(arg1 + 0x504)
    int32_t var_30_1 = __Smtx_unlock_shared(arg1 + 0x508)
    char eax_10 =
        sub_596180(*(arg1 + 0x55c), arg1 + 0x550, arg10, arg12, *(esi_4 + 0x34), arg13, arg14)
    
    if (eax_10 == 0)
        return eax_10
    
    arg12 = *(arg1 + 0x55c)
    sub_42ccf0(arg11, &arg12)

void* eax
eax.b = 1
return eax
