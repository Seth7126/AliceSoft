// 函数: sub_58dc50
// 地址: 0x58dc50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 8)
int32_t eax_6

if ((ecx[9] - ecx[8]) s/ 0x3c s> 0)
    void* ecx_1 = *ecx
    eax_6.b = *(ecx_1 + 0x3d)
    
    if (eax_6.b != 0)
        eax_6.b = *(ecx_1 + 0x75)
        
        if (eax_6.b == 0)
            float xmm0_1 = *(arg1 + 0x5c)
            xmm0_1 - 1f
            eax_6:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                | (xmm0_1 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                eax_6.b = *(*(arg1 + 0xc) + 1)
                
                if (eax_6.b != 0)
                    struct IDrawParam::sealengine::CDrawParam::VTable* var_104
                    sub_577df0(&var_104)
                    int32_t var_8_1 = 0
                    int32_t esi_2 = *(arg1 + 0x64)
                    void* ecx_3 = *(arg1 + 0x68)
                    int32_t* esi_3
                    
                    if (esi_2 s< 0 || esi_2 s>= (*(ecx_3 + 0x1c) - *(ecx_3 + 0x18)) s>> 3)
                        int32_t** esi_4 = *(ecx_3 + 0x18)
                        
                        if (((*(ecx_3 + 0x1c) - esi_4) & 0xfffffff8) s> 0)
                            esi_3 = *esi_4
                        else
                            esi_3 = nullptr
                    else
                        esi_3 = *(*(ecx_3 + 0x18) + (esi_2 << 3))
                    
                    if (esi_3 != 0)
                        __Smtx_lock_shared(&esi_3[1])
                        int32_t esi_5 = *esi_3
                        __Smtx_unlock_shared(&esi_3[1])
                        int32_t var_84_1 = esi_5
                        char var_68_1 = 0
                    
                    void* eax_13 = *(arg1 + 0xc)
                    void* ebx
                    ebx.b = sub_56df80(*(arg1 + 8), arg2, &var_104, eax_13 + 4, *(eax_13 + 0x44))
                    sub_569970(&var_104)
                    int32_t eax_15
                    eax_15.b = ebx.b
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_15

eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
