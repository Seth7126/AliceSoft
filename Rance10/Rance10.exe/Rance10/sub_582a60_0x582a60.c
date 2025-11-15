// 函数: sub_582a60
// 地址: 0x582a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1a4) == 0 || *(arg1 + 0x10c) == 0)
    return 

char eax = *(arg1 + 0x1a8)

if (eax != 0)
    return 

if (*(arg1 + 0x1e4) != eax && *(arg1 + 0x1b0) == 0 && *(arg1 + 0x1ac) != 0)
    int32_t* ebp_1 = *(arg1 + 0x1a4)
    __Smtx_lock_shared(&ebp_1[1])
    int32_t esi_1 = *ebp_1
    __Smtx_unlock_shared(&ebp_1[1])
    int32_t ebx_2
    
    if (esi_1 != 0)
        __Smtx_lock_shared(&ebp_1[1])
        void* esi_2 = *ebp_1
        __Smtx_unlock_shared(&ebp_1[1])
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2c) - *(esi_2 + 0x28))
        int32_t edx_2 = edx_1 s>> 3
        ebx_2 = (edx_2 u>> 0x1f) + edx_2
    else
        ebx_2 = 0
    
    int32_t* esi_3 = *(arg1 + 0x1ac)
    __Smtx_lock_shared(&esi_3[1])
    int32_t esi_4 = *esi_3
    __Smtx_unlock_shared(&esi_3[1])
    int32_t eax_2
    
    if (esi_4 != 0)
        __Smtx_lock_shared(&esi_3[1])
        void* esi_6 = *esi_3
        __Smtx_unlock_shared(&esi_3[1])
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = muls.dp.d(0x2aaaaaab, *(esi_6 + 0x2c) - *(esi_6 + 0x28))
        int32_t edx_4 = edx_3 s>> 3
        eax_2 = (edx_4 u>> 0x1f) + edx_4
    else
        eax_2 = 0
    
    if (ebx_2 == eax_2)
        sub_5d92a0(arg1 + 0x120, *(arg1 + 0x178), *(arg1 + 0x1a4), *(arg1 + 0x1ac), 
            *(arg1 + 0x190), *(arg1 + 0x1e8))
        return 

sub_5d9200(arg1 + 0x120, *(arg1 + 0x178), *(arg1 + 0x1a4), arg2)
