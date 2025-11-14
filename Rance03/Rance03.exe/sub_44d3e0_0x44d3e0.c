// 函数: sub_44d3e0
// 地址: 0x44d3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b71eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4cc
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_75d534 == 0)
    result.b = 0
else
    int32_t ecx
    int32_t var_a0_1 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = sub_6203f0()
    
    if (ebx_1 == 0)
        result.b = 0
    else
        result = (*ebx_1)->Next(0x6db760)
        *(edi + 0xc) = result
        
        if (result == 0)
            result.b = 0
        else
            int32_t esi_1 = data_75d4d8
            int32_t ecx_2
            
            if (esi_1 != 0)
                ecx_2 = 0
                
                if (sub_43aa00(0x6db780, 0x6db950).b != 0)
                    ecx_2 = esi_1
            else
                ecx_2 = 0
            
            *(edi + 0x20) = ecx_2
            
            if (ecx_2 == 0)
                result.b = 0
            else
                result = (*ebx_1)->Next(0x6db820)
                *(edi + 0x1c) = result
                
                if (result == 0)
                    result.b = 0
                else
                    struct _EXCEPTION_REGISTRATION_RECORD** esi_2 = (*ebx_1)->Next(0x6db7a0)
                    
                    if (esi_2 == 0)
                        result.b = 0
                    else
                        result = sub_620c20()
                        *(edi + 0x14) = result
                        
                        if (result == 0)
                            result.b = 0
                        else
                            struct IEncodeCG::encodecg::CApp::VTable** ecx_5 = nullptr
                            
                            if (sub_43aa00(0x6db7c0, 0x6dcf50).b != 0)
                                ecx_5 = data_75d4dc
                            
                            *(edi + 0x10) = ecx_5
                            
                            if (ecx_5 == 0)
                                result.b = 0
                            else
                                result = sub_64ac50(ecx_5)
                                *(edi + 0x18) = result
                                
                                if (result == 0)
                                    result.b = 0
                                else
                                    result = (*ebx_1)->Next(0x6db810)
                                    
                                    if (result == 0)
                                        result.b = 0
                                    else
                                        void var_70
                                        sub_401f60(&var_70, (*result)->Next(eax_4))
                                        int32_t var_4 = 0
                                        void var_88
                                        sub_401f60(&var_88, (*esi_2)->__offset(0xc).d())
                                        var_4.b = 1
                                        void var_28
                                        char* eax_12 = sub_402a20(&var_28, &var_88)
                                        var_4.b = 2
                                        void var_40
                                        char* eax_13 = sub_410b00(eax_12, &var_70, &var_40, eax_12)
                                        var_4.b = 3
                                        void var_58
                                        char* eax_14 =
                                            sub_410a80(eax_13.b, eax_13, &var_58, "Font.fnl")
                                        var_4.b = 4
                                        
                                        if (edi + 0x174 != eax_14)
                                            sub_401ff0(edi + 0x174, eax_14, 0, 0xffffffff)
                                        
                                        sub_401fb0(&var_58)
                                        sub_401fb0(&var_40)
                                        var_4.b = 1
                                        sub_401fb0(&var_28)
                                        int32_t* ecx_18 = *(edi + 0x40)
                                        int32_t* esi_3 = *(edi + 0x14)
                                        
                                        if (ecx_18 != 0)
                                            (*(*ecx_18 + 4))()
                                            *(edi + 0x40) = 0
                                        
                                        *(edi + 0x40) = esi_3
                                        
                                        if (esi_3 != 0)
                                            (**esi_3)()
                                        
                                        int32_t* ecx_20 = *(edi + 0x44)
                                        int32_t* esi_4 = *(edi + 0x10)
                                        
                                        if (ecx_20 != 0)
                                            (*(*ecx_20 + 4))()
                                            *(edi + 0x44) = 0
                                        
                                        *(edi + 0x44) = esi_4
                                        
                                        if (esi_4 != 0)
                                            (**esi_4)()
                                        
                                        int32_t* ecx_22 = *(edi + 0x1b0)
                                        int32_t* esi_5 = *(edi + 0x14)
                                        
                                        if (ecx_22 != 0)
                                            (*(*ecx_22 + 4))()
                                            *(edi + 0x1b0) = 0
                                        
                                        *(edi + 0x1b0) = esi_5
                                        
                                        if (esi_5 != 0)
                                            (**esi_5)()
                                        
                                        int32_t* ecx_24 = *(edi + 0x1b4)
                                        int32_t* esi_6 = *(edi + 0x10)
                                        
                                        if (ecx_24 != 0)
                                            (*(*ecx_24 + 4))()
                                            *(edi + 0x1b4) = 0
                                        
                                        *(edi + 0x1b4) = esi_6
                                        
                                        if (esi_6 != 0)
                                            (**esi_6)()
                                        
                                        *(edi + 0x28c) = *(edi + 0x14)
                                        *(edi + 0x290) = *(edi + 0x10)
                                        *(edi + 0x294) = 0
                                        *(edi + 0x298) = 0
                                        *(edi + 0x2e0) = *(edi + 0x1c)
                                        *(edi + 0x2d4) = 0
                                        *(edi + 0x2dc) = 0
                                        *(edi + 0x2d8) = sub_44c3c0(edi + 0x2d0)
                                        int32_t* eax_28 = (*ebx_1)->Next(0x6db770)
                                        
                                        if (eax_28 == 0)
                                            *(edi + 0x2e8) = 0
                                        else
                                            *(edi + 0x2e8) = (**eax_28)()
                                        
                                        struct IChangeNumToISurface2::chipmunk::CGetSurface::VTable*
                                            * edx_5 = sub_69adc6(0x10)
                                        
                                        if (edx_5 == 0)
                                            edx_5 = nullptr
                                        else
                                            edx_5[1] = &IInterface::`vftable'
                                            *edx_5 = &chipmunk::CGetSurface::`vftable'{for `IChangeNumToISurface2'}
                                            edx_5[1] =
                                                &chipmunk::CGetSurface::`vftable'{for `IInterface'}
                                            edx_5[2] = 1
                                            edx_5[3] = edi
                                        
                                        int32_t* ecx_29 = *(edi + 0x20)
                                        *(edi + 0x2e4) = edx_5
                                        (*(*ecx_29 + 8))(0x6db800, edx_5)
                                        (*(**(edi + 0x20) + 8))(0x6db7d0, *(edi + 0x2e4))
                                        sub_44e320(edi)
                                        int32_t* eax_36 = (*ebx_1)->Next(0x6db790)
                                        
                                        if (eax_36 != 0)
                                            (**eax_36)(edi + 4)
                                            ebx_1.b = 1
                                        else
                                            ebx_1.b = 0
                                        
                                        sub_401fb0(&var_88)
                                        sub_401fb0(&var_70)
                                        result.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
