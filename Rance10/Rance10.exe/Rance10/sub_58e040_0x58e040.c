// 函数: sub_58e040
// 地址: 0x58e040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* esi = arg1
void* var_4 = esi
*(arg2 + 0x80) = sub_58e190(arg1, arg3)
*(arg2 + 0x9c) = 0
void* eax_1 = sub_58e200(esi, arg3)
*(arg2 + 0x84) = eax_1
*(arg2 + 0x9d) = 0
int32_t* ebp

if (arg3 == 0 || (arg3 s> 3 && arg3 s<= 5))
    void* ebp_1 = *(esi + 0x68)
    eax_1 = sub_58c200(ebp_1)
    
    if (eax_1.b != 0)
        ebp = *(ebp_1 + 0x2c)
        
        if (ebp != 0)
            void* esi_1 = &ebp[1]
            __Smtx_lock_shared(esi_1)
            ebp = *ebp
            eax_1 = __Smtx_unlock_shared(esi_1)
            esi = var_4
    else
        ebp = nullptr
else
    ebp = nullptr

*(arg2 + 0x88) = ebp
*(arg2 + 0x9e) = 0
int32_t* ebp_2

if (arg3 == 0 || (arg3 s> 3 && arg3 s<= 5))
    eax_1 = *(esi + 0x6c)
    
    if (eax_1 != 0)
        ebp_2 = *(eax_1 + 0x2c)
        
        if (ebp_2 != 0)
            SRWLOCK* esi_2 = &ebp_2[1]
            __Smtx_lock_shared(esi_2)
            ebp_2 = *ebp_2
            eax_1 = __Smtx_unlock_shared(esi_2)
    else
        ebp_2 = nullptr
else
    ebp_2 = nullptr

*(arg2 + 0x8c) = ebp_2
*(arg2 + 0x9f) = 0
*(arg2 + 0x90) = 0
*(arg2 + 0x94) = 0
*(arg2 + 0xa1) = 0

if (arg3 == 0)
label_58e15a:
    eax_1 = *(var_4 + 0x68)
    int32_t* esi_3 = *(eax_1 + 0x24)
    
    if (esi_3 != 0)
        __Smtx_lock_shared(&esi_3[1])
        int32_t esi_4 = *esi_3
        int32_t eax_3 = __Smtx_unlock_shared(&esi_3[1])
        *(arg2 + 0x98) = esi_4
        *(arg2 + 0xa2) = 0
        return eax_3
else if (arg3 s> 3 && arg3 s<= 5)
    goto label_58e15a

*(arg2 + 0x98) = 0
*(arg2 + 0xa2) = 0
return eax_1
