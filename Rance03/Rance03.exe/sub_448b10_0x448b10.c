// 函数: sub_448b10
// 地址: 0x448b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t ebx
uint32_t var_34 = ebx
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 4) != 0)
    uint32_t arg_4
    uint32_t esi_1 = arg_4
    struct fileimage::CFileImageAnalyser::VTable* const var_24_1 =
        &fileimage::CFileImageAnalyser::`vftable'
    char* ecx = *esi_1
    char* var_20_1 = ecx
    result = *(esi_1 + 4)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t var_4 = 0
    
    if (&ecx[4] u<= result)
        void* var_20_2 = &ecx[4]
        ebx = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    
    if (&ecx[4] u> result || ebx s<= 0)
        ebx.b = 0
    else
        int32_t var_18
        sub_448e90(&var_18, ebx)
        var_4.b = 1
        int32_t eax_7 = *esi_1
        int32_t ebp_1 = var_18
        
        if ((*(**(arg1 + 4) + 8))(ebp_1, ebx, eax_7 + 4, *(esi_1 + 4) - eax_7 - 4).b == 0)
            ebx.b = 0
        else
            struct fileimage::CFileImageAnalyser::VTable* const var_30 =
                &fileimage::CFileImageAnalyser::`vftable'
            int32_t var_2c_1 = ebp_1
            int32_t var_14
            int32_t var_28_1 = var_14
            var_4.b = 2
            
            if (sub_468b20(&var_30, &arg_4).b == 0)
                ebx.b = 0
            else
                void* edi_2 = arg_4
                
                if (edi_2 s<= 0)
                    ebx.b = 0
                else
                    sub_403540(arg2, edi_2)
                    
                    if (sub_468dd0(&var_30, *arg2, edi_2).b == 0)
                        ebx.b = 0
                    else
                        ebx.b = 1
        
        if (ebp_1 != 0)
            j__free(ebp_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
