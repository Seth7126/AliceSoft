// 函数: sub_486d40
// 地址: 0x486d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bab06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t ExceptionRecord = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (result_1 == 0)
    result.b = 0
else
    uint32_t arg_8
    uint32_t edi_1 = arg_8
    
    if (sub_487240(arg1, edi_1).b != 0)
        result.b = 0
    else if (sub_4872d0(arg1, edi_1).b != 0)
        result.b = 0
    else if (sub_487360(arg1, edi_1).b != 0)
        result.b = 0
    else if (sub_4873f0(arg1, edi_1).b != 0)
        result.b = 0
    else if (sub_487480(arg1, edi_1).b != 0)
        result.b = 0
    else
        int32_t ebp_1 = *arg3
        int32_t ebx_2 = arg3[1] - ebp_1
        
        if (ebx_2 s<= 0)
            result.b = 0
        else
            struct fileimage::CFileImageAnalyser::VTable* const var_18
            
            if (arg2 == 2)
                int32_t eax_2 = 0
                bool cond:0_1 = *(arg1 + 0x30) s< 1
                arg_8 = 0
                
                if (cond:0_1)
                    goto label_486e24
                
                var_18 = &fileimage::CFileImageAnalyser::`vftable'
                int32_t var_10_1 = ebx_2 + ebp_1
                int32_t var_14_1 = ebp_1
                
                if (sub_468b20(&var_18, &arg_8).b == 0)
                    result.b = 0
                else
                    eax_2 = 4
                    ebx_2 -= 4
                label_486e24:
                    result = (*(*result_1 + 8))(eax_2 + ebp_1, ebx_2)
                    result_1 = result
                    
                    if (result == 0)
                        result.b = 0
                    else
                        void* eax_5 = sub_427f90(arg1 + 0x40, edi_1)
                        *eax_5 = result_1
                        result = sub_41ff70(arg1 + 0x48, &result_1)
                        *result = arg_8
                        result.b = 1
            else if (arg2 == 4)
                if (sub_487130(arg1, edi_1, arg3).b != 0)
                    result.b = 1
                else
                    result.b = 0
            else
                struct _EXCEPTION_REGISTRATION_RECORD* ebx_3
                
                if (arg2 == 5)
                    ebx_3 = sub_486f90(arg1, arg3)
                    
                    if (ebx_3 == 0)
                        result.b = 0
                    else
                        *sub_427f90(arg1 + 0x58, edi_1) = ebx_3
                        result.b = 1
                else if (arg2 == 6)
                    var_18 = &fileimage::CFileImageAnalyser::`vftable'
                    int32_t var_14_2 = ebp_1
                    int32_t var_10_2 = ebx_2 + ebp_1
                    int32_t var_4 = 0
                    int32_t* result_2 = sub_69adc6(0x28)
                    result_1 = result_2
                    var_4.b = 1
                    
                    if (result_2 == 0)
                        ebx_3 = nullptr
                    else
                        ebx_3 = sub_48f980(result_2)
                    
                    var_4.b = 0
                    struct fileimage::CFileImageAnalyser::VTable* const* var_30_13 = &var_18
                    
                    if (sub_48fa80(ebx_3) != 0)
                        *sub_427f90(arg1 + 0x60, edi_1) = ebx_3
                        result.b = 1
                    else
                        ebx_3->Next->Handler(ExceptionRecord)
                        result.b = 0
                else if (arg2 != 7)
                    result.b = 1
                else
                    var_18 = &fileimage::CFileImageAnalyser::`vftable'
                    int32_t var_14_3 = ebp_1
                    int32_t var_10_3 = ebx_2 + ebp_1
                    int32_t var_4_1 = 2
                    int32_t* result_3 = sub_69adc6(0x150)
                    result_1 = result_3
                    var_4_1.b = 3
                    
                    if (result_3 == 0)
                        ebx_3 = nullptr
                    else
                        ebx_3 = sub_4881e0(result_3)
                    
                    var_4_1.b = 2
                    struct fileimage::CFileImageAnalyser::VTable* const* var_30_15 = &var_18
                    
                    if (sub_488820(ebx_3, *(arg1 + 0x30)) == 0)
                        ebx_3->Next->Handler(ExceptionRecord)
                        result.b = 0
                    else
                        *sub_427f90(arg1 + 0x68, edi_1) = ebx_3
                        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
