// 函数: sub_4509a0
// 地址: 0x4509a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b24f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0)
    result.b = 0
else if (*(arg1 + 0x12c) != 0)
    result.b = 1
else
    int32_t* ecx = *(arg1 + 0x118)
    
    if (ecx == 0)
    label_450a0f:
        result = *(arg1 + 0x120)
        int32_t* edx_1 = *(arg1 + 0x124)
        int32_t esi_1 = *(arg1 + 0x118)
        
        if (result != 0)
        label_450a31:
            ecx.b = result[4].b
            result.b = ecx.b == *(arg1 + 0x115)
        label_450a41:
            
            if (edx_1 != esi_1 || result.b == 0)
                if (edx_1 != 0)
                    (*(*edx_1 + 4))(eax_2)
                
                int32_t* ecx_3 = *(arg1 + 0x118)
                *(arg1 + 0x124) = ecx_3
                
                if (ecx_3 != 0)
                    (**ecx_3)(eax_2)
                
                int32_t* ecx_4 = *(arg1 + 0x120)
                
                if (ecx_4 != 0)
                    sub_451bc0(ecx_4)
                    *(arg1 + 0x120) = 0
                
                if (sub_450bf0(*(arg1 + 0x118)) != 0)
                    void var_68
                    int32_t* eax_12 =
                        sub_432270(&var_68, (*(*arg2 + 0x60))(*(arg1 + 0x118), (*(arg1 + 0x115)).d))
                    int32_t var_70 = 0
                    int32_t var_6c_1 = 0
                    sub_4323a0(&var_70, eax_12)
                    int32_t var_8_2 = 2
                    sub_431b10(&var_68)
                    
                    if (sub_451b90(&var_70) != 0)
                        char var_64_1
                        var_64_1.d = sub_6e810c(0x14)
                        var_8_2.b = 4
                        int32_t* ebx
                        ebx.b = *(arg1 + 0x115)
                        int32_t esi_2 = *(arg1 + 0x118)
                        int32_t* eax_15 = sub_431af0(&var_70)
                        struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CTexture::VTable
                            ** eax_16 = var_64_1.d
                        eax_16[1] = 1
                        *eax_16 = &chipmunk::CTexture::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
                        eax_16[2] = eax_15
                        eax_16[3] = esi_2
                        eax_16[4].b = ebx.b
                        
                        if (eax_15 != 0)
                            (**eax_15)(eax_2)
                            eax_16 = var_64_1.d
                        
                        int32_t* ecx_22 = eax_16[3]
                        
                        if (ecx_22 != 0)
                            (**ecx_22)(eax_2)
                            eax_16 = var_64_1.d
                        
                        *(arg1 + 0x120) = eax_16
                        sub_431b10(&var_70)
                        result.b = 1
                    else
                        void var_48
                        sub_403360(&var_48, 0x75ddd4)
                        var_8_2.b = 3
                        sub_6c52e0(&var_48)
                        sub_403320(&var_48)
                        sub_431b10(&var_70)
                        result.b = 0
                else
                    void var_30
                    sub_403360(&var_30, 0x75ddf8)
                    int32_t var_8_1 = 0
                    var_8_1.b = 1
                    void var_60
                    sub_6c56d0(sub_409350(arg1 + 8, &var_30, &var_60, arg1 + 8))
                    sub_403320(&var_60)
                    sub_403320(&var_30)
                    result.b = 1
            else
                result.b = 1
        else
            if (edx_1 != esi_1)
                if (result != 0)
                    goto label_450a31
                
                result.b = 0
                goto label_450a41
            
            result.b = 1
    else if ((*(*ecx + 0x10))(eax_2) s<= 0)
        result.b = 1
    else
        result, ecx = (*(**(arg1 + 0x118) + 0x14))()
        
        if (result s> 0)
            goto label_450a0f
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
