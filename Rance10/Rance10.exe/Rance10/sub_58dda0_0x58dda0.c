// 函数: sub_58dda0
// 地址: 0x58dda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$zeta_imp@OU?$policy@U?$promote_float@$0A@@policies@math@boost@@U?$promote_double@$0A@@234@Udefault_policy@234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@@policies@math@boost@@U?$int_@$0DF@@mpl@4@@detail@math@boost@@YAOOOABU?$policy@U?$promote_float@$0A@@policies@math@boost@@U?$promote_double@$0A@@234@Udefault_policy@234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@@policies@12@ABU?$int_@$0DF@@mpl@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_138 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1

if (eax_3 != arg1[1])
    void* edi_1 = *eax_3
    int32_t* esi_1 = *(edi_1 + 8)
    
    if ((esi_1[9] - esi_1[8]) s/ 0x3c s> 0)
        void* ecx_2 = *esi_1
        eax_3.b = *(ecx_2 + 0x3d)
        
        if (eax_3.b != 0)
            eax_3.b = *(ecx_2 + 0x75)
            
            if (eax_3.b == 0)
                float xmm0_1 = *(edi_1 + 0x5c)
                xmm0_1 - 1f
                eax_3:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                    | (xmm0_1 < 1f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    eax_3.b = *(*(edi_1 + 0xc) + 1)
                    
                    if (eax_3.b != 0)
                        struct IDrawParam::sealengine::CDrawParam::VTable* var_124
                        sub_577df0(&var_124)
                        int32_t var_8_1 = 0
                        int32_t* eax_7 = sub_58c240(*(edi_1 + 0x68), *(edi_1 + 0x64))
                        
                        if (eax_7 != 0)
                            int32_t var_a4_1 = sub_5ca8c0(eax_7)
                            char var_88_1 = 0
                        
                        int32_t var_24
                        int32_t* eax_9 = &var_24
                        int32_t* edi_2 = nullptr
                        int32_t ecx_8 = (arg1[1] - *arg1) s>> 2
                        var_24 = ecx_8
                        
                        if (ecx_8 s>= 0x40)
                            eax_9 = &data_76849c
                        
                        int32_t* esi_2 = *eax_9
                        void* var_3c
                        int32_t* ebx
                        
                        if (esi_2 s<= 0)
                        label_58dfd1:
                            ebx.b = 1
                        else
                            while (true)
                                int128_t* ecx_10 = nullptr
                                void* const edx_3 = nullptr
                                void* var_1c = nullptr
                                int128_t* var_18_1 = nullptr
                                int32_t var_14_1 = 0
                                var_8_1.b = 1
                                
                                if (esi_2 != 0)
                                    if (esi_2 u> 0x3ffffff)
                                        sub_6d0927("vector<T> too long")
                                        noreturn
                                    
                                    sub_58d010(&var_1c, esi_2)
                                    ecx_10 = var_18_1
                                    edx_3 = var_1c
                                
                                ebx = esi_2 + edi_2
                                
                                while (edi_2 s< ebx)
                                    void* esi_4 = *(*(*arg1 + (edi_2 << 2)) + 0xc) + 4
                                    
                                    if (esi_4 u< ecx_10 && edx_3 u<= esi_4)
                                        int32_t esi_5 = esi_4 - edx_3
                                        
                                        if (ecx_10 == var_14_1)
                                            sub_58cfb0(&var_1c, 1)
                                            ecx_10 = var_18_1
                                            edx_3 = var_1c
                                        
                                        esi_4 = (esi_5 & 0xffffffc0) + edx_3
                                    else if (ecx_10 == var_14_1)
                                        sub_58cfb0(&var_1c, 1)
                                        ecx_10 = var_18_1
                                        edx_3 = var_1c
                                    
                                    if (ecx_10 != 0)
                                        *ecx_10 = *esi_4
                                        ecx_10[1] = *(esi_4 + 0x10)
                                        ecx_10[2] = *(esi_4 + 0x20)
                                        ecx_10[3] = *(esi_4 + 0x30)
                                    
                                    ecx_10 = &ecx_10[4]
                                    edi_2 += 1
                                    var_18_1 = ecx_10
                                
                                sub_570e00(&var_3c, &var_1c)
                                
                                if (sub_56e120(*(edi_1 + 8), arg2, &var_124, 
                                        *(*(edi_1 + 0xc) + 0x44)).b == 0)
                                    void* ecx_22 = var_1c
                                    
                                    if (ecx_22 != 0)
                                        sub_403160(ecx_22, (var_14_1 - ecx_22) s>> 6, 0x40)
                                    
                                    ebx.b = 0
                                    break
                                
                                var_8_1.b = 0
                                edi_2 = ebx
                                void* ecx_16 = var_1c
                                
                                if (ecx_16 != 0)
                                    sub_403160(ecx_16, (var_14_1 - ecx_16) s>> 6, 0x40)
                                    var_1c = nullptr
                                    int32_t var_18_2 = 0
                                    int32_t var_14_2 = 0
                                
                                esi_2 = 0x40
                                eax_9 = ((arg1[1] - *arg1) s>> 2) - edi_2
                                
                                if (eax_9 s< 0x40)
                                    esi_2 = eax_9
                                
                                if (esi_2 s<= 0)
                                    goto label_58dfd1
                        
                        void* edx_4 = var_3c
                        int32_t var_34
                        
                        if (edx_4 != 0)
                            sub_403160(edx_4, (var_34 - edx_4) s>> 6, 0x40)
                        eax_9.b = ebx.b
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_9

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
