// 函数: sub_43eeb0
// 地址: 0x43eeb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t edi = arg_4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi == 0)
labelid_2:
    result.b = 0
else
    int32_t __saved_edi
    result = (*(*edi + 8))(__security_cookie ^ &__saved_edi)
    
    if (result s<= 0)
    labelid_2:
        result.b = 0
    else
        int32_t esi_2 = (*(*edi + 0x10))(0) + (result << 2)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = (*(*edi + 0x10))(0)
        struct fileimage::CFileImageAnalyser::VTable* const var_34 =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_4 = 0
        
        if (sub_43f130(&var_34).b == 0)
        labelid_2:
            result.b = 0
        else
            arg_4 = 0
            
            if (sub_468b20(&var_34, &arg_4).b == 0)
            labelid_2:
                result.b = 0
            else
                int32_t var_4c_3 = sub_43f340(arg1 + 4)
                sub_43f250(arg1 + 4)
                uint32_t edi_1 = arg_4
                *(arg1 + 0x14) = 1
                
                if (edi_1 s> 0)
                    sub_43f340(arg1 + 4)
                    int32_t esi_3 = 0
                    
                    if (edi_1 s> 0)
                        do
                            struct anteater::CADVLog::VTable* var_28 = &anteater::CADVLog::`vftable'
                            void var_24
                            sub_43e6d0(&var_24, 1)
                            int32_t var_18_1 = 0
                            int32_t var_14_1 = 0
                            int32_t var_10_1 = 0
                            var_4.b = 1
                            sub_43f210(arg1 + 4, &var_28)
                            var_4.b = 0
                            sub_43e140(&var_28)
                            
                            if (sub_43e5a0(*(*(arg1 + 4) + 4) + 8, &var_34).b == 0)
                                goto label_43f016_1
                            
                            esi_3 += 1
                        while (esi_3 s< edi_1)
                
                if (eax_7 + 1 u> esi_2)
                label_43f016:
                    result.b = 0
                else
                    void* var_30_2 = eax_7 + 1
                    result.b = *eax_7 == 1
                    *(arg1 + 0x14) = result.b
                    
                    if (sub_468b20(&var_34, arg1 + 0x18).b == 0)
                    label_43f016_1:
                        result.b = 0
                    else
                        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
