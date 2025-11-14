// 函数: sub_520cc0
// 地址: 0x520cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41fff0(arg1 + 0x20)
sub_418220(*(*(arg1 + 0x28) + 4))
void* eax_7 = *(arg1 + 0x28)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(arg1 + 0x28)
*eax_8 = eax_8
void* eax_9 = *(arg1 + 0x28)
*(eax_9 + 8) = eax_9
*(arg1 + 0x2c) = 0
char* ecx_2 = *arg2
void** result = arg2[1]

if (ecx_2 != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_44 =
        &fileimage::CFileImageAnalyser::`vftable'
    char* var_40_1 = ecx_2
    void* result_2 = result
    void* result_3 = result_2
    void* esi_1 = &ecx_2[4]
    int32_t var_4 = 0
    
    if (esi_1 u> result_2)
    label_520eaa:
        result.b = 0
    else
        uint32_t edi_3 = zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])
        result_1 = nullptr
        int32_t edi_7 = (edi_3 << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
        void var_34
        
        if (edi_7 s> 0)
            do
                if (esi_1 + 4 u> result_2)
                    goto label_520eaa_2
                
                uint32_t eax_15 = zx.d(*esi_1)
                uint32_t ecx_8 =
                    ((zx.d(*(esi_1 + 3)) << 8 | zx.d(*(esi_1 + 2))) << 8 | zx.d(*(esi_1 + 1))) << 8
                esi_1 += 4
                uint32_t ecx_9 = ecx_8 | eax_15
                void* var_40_2 = esi_1
                uint32_t var_64_1 = zx.d(data_75dd2a)
                uint32_t var_38 = ecx_9
                uint32_t* var_68_1 = &var_38
                sub_4ce350(arg1 + 0x20, &var_34, ecx_9)
                result = result_1 + 1
                result_1 = result
            while (result s< edi_7)
        
        if (esi_1 + 4 u> result_2)
        label_520eaa_1:
            result.b = 0
        else
            void* var_40_3 = esi_1 + 4
            int32_t esi_2 = 0
            int32_t edi_15 =
                ((zx.d(*(esi_1 + 3)) << 8 | zx.d(*(esi_1 + 2))) << 8 | zx.d(*(esi_1 + 1))) << 8
                | zx.d(*esi_1)
            
            if (edi_15 s<= 0)
                result.b = 1
            else
                while (true)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    var_4.b = 1
                    int32_t ecx_13
                    result, ecx_13 = sub_468d00(&var_44, &var_2c)
                    
                    if (result.b == 0)
                        if (var_18_1 u>= 0x10)
                            j__free(var_2c.d)
                        
                        break
                    
                    uint32_t var_64_3 = zx.d(data_75dd2a)
                    char* var_68_2 = &var_2c
                    sub_4ce1a0(arg1 + 0x28, &var_34, ecx_13)
                    var_4.b = 0
                    
                    if (var_18_1 u>= 0x10)
                        j__free(var_2c.d)
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= edi_15)
                        result.b = 1
                        goto label_520eb0
                
            label_520eaa_2:
                result.b = 0
else
    result.b = 1

label_520eb0:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
