// 函数: sub_45acd0
// 地址: 0x45acd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bc20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_c
uint32_t esi = arg_c

if (esi s>= 0x24 && arg1 != 0)
    int32_t* ebx_1 = arg2
    uint32_t arg_14
    
    if (ebx_1 != 0 && arg3 != 0 && arg_14 != 0)
        uint32_t* eax_4 = ebx_1 + esi
        struct fileimage::CFileImageAnalyser::VTable* const var_34 =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t* var_30 = ebx_1
        uint32_t* var_2c = eax_4
        int32_t var_8_1 = 0
        
        if (&ebx_1[1] u> eax_4)
            ebx_1.b = 0
        else
            void* var_30_1 = &ebx_1[1]
            
            if (sub_61ec90(&var_34, &arg_c).b == 0)
                ebx_1.b = 0
            else
                uint32_t ecx_4 = arg_c
                
                if (ecx_4 != 1 || (ecx_4 == 1 && esi s< 0x28))
                    ebx_1.b = 0
                else
                    uint32_t var_24
                    
                    if (sub_61ec90(&var_34, &arg_c).b == 0)
                        ebx_1.b = 0
                    else
                        uint32_t var_20
                        
                        if (sub_61ec90(&var_34, &var_24).b == 0)
                            ebx_1.b = 0
                        else if (sub_61ec90(&var_34, &var_20).b == 0)
                            ebx_1.b = 0
                        else
                            uint32_t var_14
                            
                            if (sub_61ec90(&var_34, &arg_c).b == 0)
                                ebx_1.b = 0
                            else
                                uint32_t var_18
                                
                                if (sub_61ec90(&var_34, &var_14).b == 0)
                                    ebx_1.b = 0
                                else if (sub_61ec90(&var_34, &var_18).b == 0)
                                    ebx_1.b = 0
                                else
                                    uint32_t var_1c = 0
                                    
                                    if (sub_61ec90(&var_34, &arg_14).b == 0)
                                        ebx_1.b = 0
                                    else if (sub_61ec90(&var_34, &var_1c).b == 0)
                                        ebx_1.b = 0
                                    else
                                        uint32_t eax_5 = var_14
                                        uint32_t ecx_13 = arg_c
                                        
                                        if (eax_5 s> 0 && ecx_13 s>= 0)
                                            arg_c:3.b = 1
                                        
                                        if (eax_5 s<= 0 || ecx_13 s< 0 || ecx_13 s>= esi)
                                            arg_c:3.b = 0
                                        
                                        uint32_t edx_1 = arg_14
                                        
                                        if (edx_1 s<= 0)
                                            arg2:3.b = 0
                                        else
                                            uint32_t edi_1 = var_18
                                            
                                            if (edi_1 s< 0)
                                                arg2:3.b = 0
                                            else
                                                arg2:3.b = 1
                                                
                                                if (edi_1 s>= esi)
                                                    arg2:3.b = 0
                                        
                                        struct common::SuicideRefCounter<class ICGSurface>::decodecg::CCGSurface::VTable
                                            ** edi_2 = nullptr
                                        
                                        if (arg_c:3.b == 0)
                                            goto label_45aed3
                                        
                                        int32_t* ecx_14 = ecx_13 + ebx_1
                                        arg_c = ecx_14
                                        sub_45abe0(ecx_14, eax_5)
                                        struct common::SuicideRefCounter<class ICGSurface>::decodecg::CCGSurface::VTable
                                            ** eax_6 = sub_6e810c(0x14)
                                        struct common::SuicideRefCounter<class ICGSurface>::decodecg::CCGSurface::VTable
                                            ** var_28_1 = eax_6
                                        struct common::SuicideRefCounter<class ICGSurface>::decodecg::CCGSurface::VTable
                                            ** eax_7 = sub_45b4d0(eax_6)
                                        uint32_t esi_1 = var_14
                                        edi_2 = eax_7
                                        char eax_8 = sub_45b1d0(edi_2, arg_c, esi_1, arg3)
                                        int32_t* var_58_3 = arg_c
                                        
                                        if (eax_8 != 0)
                                            sub_45abe0(var_58_3, esi_1)
                                            edx_1 = arg_14
                                        label_45aed3:
                                            
                                            if (arg2:3.b != 0)
                                                int32_t* esi_2 = nullptr
                                                int32_t* var_40 = nullptr
                                                int32_t* var_3c_1 = nullptr
                                                int32_t var_38_1 = 0
                                                var_8_1.b = 1
                                                int32_t* ebx_2 = ebx_1 + var_18
                                                sub_45abe0(ebx_2, edx_1)
                                                int64_t* eax_10 = sub_6cc740()
                                                arg_c = eax_10
                                                
                                                if (eax_10 == 0)
                                                    ebx_1 = var_40
                                                else
                                                    uint32_t esi_3 = var_1c
                                                    sub_405950(&var_40, esi_3)
                                                    ebx_1 = var_40
                                                    esi_2 = var_3c_1
                                                    
                                                    if ((*(*arg_c + 8))(ebx_1, esi_3, ebx_2, arg_14)
                                                            == 0)
                                                        esi_2 = ebx_1
                                                    
                                                    int32_t* var_3c_2 = esi_2
                                                    (*(*arg_c + 4))(eax_2)
                                                
                                                sub_45abe0(ebx_2, arg_14)
                                                int32_t* eax_16
                                                
                                                if (ebx_1 != esi_2)
                                                    int32_t eax_15 = *arg3
                                                    
                                                    if (edi_2 == 0)
                                                        eax_16 = (*(eax_15 + 0x10))(var_24, var_20)
                                                    else
                                                        eax_16 =
                                                            (*(eax_15 + 8))(var_24, var_20, 0x20)
                                                
                                                if (ebx_1 != esi_2 && eax_16 != 0)
                                                    if (edi_2 != 0)
                                                        sub_45b040(eax_16, edi_2)
                                                    
                                                    sub_45b140(eax_16, &var_40)
                                                    
                                                    if (edi_2 != 0)
                                                        (*edi_2)->vFunc_1(eax_2)
                                                    
                                                    ebx_1.b = 1
                                                    arg1[2] = eax_16
                                                    sub_4059a0(&var_40)
                                                else
                                                    if (edi_2 != 0)
                                                        (*edi_2)->vFunc_1(eax_2)
                                                    
                                                    ebx_1.b = 0
                                                    sub_4059a0(&var_40)
                                            else
                                                ebx_1.b = 1
                                                arg1[2] = edi_2
                                        else
                                            sub_45abe0(var_58_3, esi_1)
                                            
                                            if (edi_2 != 0)
                                                (*edi_2)->vFunc_15(1)
                                            
                                            ebx_1.b = 0
        
        eax_4.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
