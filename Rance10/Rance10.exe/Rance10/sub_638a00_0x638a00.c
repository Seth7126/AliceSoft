// 函数: sub_638a00
// 地址: 0x638a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = arg1[1]

if (*(eax + 4) == 6 && *(eax + 0x18) != 1)
    *(eax + 0x18) -= 1
    sub_638020(arg1, zx.d(*(*(eax + 0x1c) + (*(eax + 0x18) << 1))))

void* edi = arg1[1]
int32_t eax_3 = *(edi + 4)

if (eax_3 == 9 || eax_3 == 0xe)
    edi = *(edi + 0x14)

int32_t eax_16

if (arg2 != 0 || arg3 != 1)
    struct std::_Node_base::std::_Node_end_rep::VTable** eax_19 = sub_6e810c(0x18)
    eax_19[1] = 0x13
    eax_19[2] = 0
    eax_19[3] = 0
    eax_19[4] = 0
    *eax_19 = &std::_Node_end_rep::`vftable'{for `std::_Node_base'}
    eax_19[5] = 0
    struct std::_Node_base::std::_Node_rep::VTable** eax_20 = sub_6e810c(0x28)
    void* edx_3 = *arg1
    struct std::_Node_base::std::_Node_rep::VTable** var_4_1 = eax_20
    int32_t esi_2 = *(edx_3 + 0x18)
    *(edx_3 + 0x18) = esi_2 + 1
    int32_t ecx_6 = 0
    eax_20[1] = 0x12
    
    if (arg4 != 0)
        ecx_6 = 2
    
    eax_20[3] = 0
    eax_20[2] = ecx_6
    eax_20[5] = arg2
    eax_20[4] = 0
    *eax_20 = &std::_Node_rep::`vftable'{for `std::_Node_base'}
    eax_20[6] = arg3
    eax_20[7] = eax_19
    eax_20[8] = esi_2
    eax_20[9] = 0xffffffff
    eax_19[5] = eax_20
    eax_19[4] = arg1[1]
    int32_t eax_25 = *(arg1[1] + 0xc)
    
    if (eax_25 != 0)
        eax_19[3] = eax_25
        *(*(arg1[1] + 0xc) + 0x10) = eax_19
    
    *(arg1[1] + 0xc) = eax_19
    arg1[1] = eax_19
    *(*(edi + 0x10) + 0xc) = eax_20
    eax_16 = *(edi + 0x10)
    eax_20[4] = eax_16
    *(edi + 0x10) = eax_20
    eax_20[3] = edi
else
    struct std::_Node_base::std::_Node_endif::VTable** eax_4 = sub_6e810c(0x14)
    eax_4[1] = 0x11
    eax_4[2] = 0
    eax_4[3] = 0
    eax_4[4] = 0
    *eax_4 = &std::_Node_endif::`vftable'{for `std::_Node_base'}
    struct std::_Node_base::std::_Node_if::VTable** eax_5 = sub_6e810c(0x1c)
    arg2 = eax_5
    eax_5[1] = 0x10
    eax_5[2] = 0
    eax_5[3] = 0
    eax_5[4] = 0
    *eax_5 = &std::_Node_if::`vftable'{for `std::_Node_base'}
    eax_5[5] = eax_4
    eax_5[6] = 0
    struct std::_Node_base::std::_Node_if::VTable** eax_6 = sub_6e810c(0x1c)
    eax_6[1] = 0x10
    eax_6[2] = 0
    eax_6[3] = 0
    eax_6[4] = 0
    *eax_6 = &std::_Node_if::`vftable'{for `std::_Node_base'}
    eax_6[5] = eax_4
    eax_6[6] = 0
    struct std::_Node_base::VTable** eax_7 = sub_6e810c(0x14)
    struct std::_Node_base::VTable** var_8 = eax_7
    *eax_7 = &std::_Node_base::`vftable'
    eax_7[1] = 8
    eax_7[2] = 0
    eax_7[3] = 0
    eax_7[4] = 0
    struct std::_Node_base::std::_Node_end_group::VTable** eax_8 = sub_6e810c(0x18)
    struct std::_Node_base::std::_Node_end_group::VTable** var_8_1 = eax_8
    eax_8[1] = 9
    eax_8[2] = 0
    eax_8[3] = 0
    eax_8[4] = 0
    *eax_8 = &std::_Node_end_group::`vftable'{for `std::_Node_base'}
    eax_8[5] = eax_7
    eax_6[3] = eax_7
    eax_7[4] = eax_6
    eax_7[3] = eax_8
    eax_8[4] = eax_7
    eax_8[3] = eax_4
    eax_5[6] = eax_6
    eax_4[4] = arg1[1]
    int32_t eax_11 = *(arg1[1] + 0xc)
    
    if (eax_11 != 0)
        eax_4[3] = eax_11
        *(*(arg1[1] + 0xc) + 0x10) = eax_4
    
    *(arg1[1] + 0xc) = eax_4
    arg1[1] = eax_4
    *(*(edi + 0x10) + 0xc) = eax_5
    eax_16 = *(edi + 0x10)
    eax_5[4] = eax_16
    *(edi + 0x10) = eax_5
    eax_5[3] = edi
    
    if (arg4 == 0)
        void* edx_1 = eax_6[3]
        int32_t ecx_3 = *(edi + 0x10)
        *(edi + 0x10) = *(edx_1 + 0x10)
        *(edx_1 + 0x10) = ecx_3
        int32_t ecx_4 = eax_5[3]
        int32_t eax_18 = eax_6[3]
        eax_5[3] = eax_18
        eax_6[3] = ecx_4
        return eax_18

return eax_16
