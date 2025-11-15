// 函数: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 地址: 0x433780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a6a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t ebx = arg_4
int32_t* edi = data_7fcb44
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebx != 0)
    int32_t __saved_ebp
    result = (*(*ebx + 8))(__security_cookie ^ &__saved_ebp)
    
    if (result s> 0)
        int32_t esi_2 = (*(*ebx + 0xc))(0) + (result << 2)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = (*(*ebx + 0xc))(0)
        struct fileimage::CFileImageAnalyser::VTable* const var_20 =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_8_1 = 0
        
        if (sub_4339e0(&var_20).b != 0)
            arg_4 = 0
            
            if (sub_61ec90(&var_20, &arg_4).b != 0)
                int32_t var_58_2 = sub_432f30(edi)
                sub_433aa0(edi)
                uint32_t ebx_1 = arg_4
                edi[3].b = 1
                
                if (ebx_1 s> 0)
                    sub_432f30(edi)
                    int32_t esi_3 = 0
                    
                    if (ebx_1 s> 0)
                        do
                            var_8_1.b = 1
                            void var_44
                            sub_433be0(edi, sub_432fb0(&var_44))
                            var_8_1.b = 0
                            void var_2c
                            sub_417070(&var_2c)
                            void var_38
                            sub_417070(&var_38)
                            sub_417070(&var_44)
                            
                            if (sub_433170(*(*edi + 4) + 8, &var_20).b == 0)
                                goto label_4338cc
                            
                            esi_3 += 1
                        while (esi_3 s< ebx_1)
                
                if (eax_7 + 1 u<= esi_2)
                    void* var_1c_2 = eax_7 + 1
                    result.b = *eax_7 == 1
                    edi[3].b = result.b
                    
                    if (sub_61ed80(&var_20, &edi[4]).b != 0)
                        result.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result

label_4338cc:
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
