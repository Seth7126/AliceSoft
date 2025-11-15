// 函数: sub_563650
// 地址: 0x563650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bbc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_38 = ebx
sub_562c10(arg1)
char* edx = *arg2
int32_t** result = arg2[1]

if (edx != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_44 =
        &fileimage::CFileImageAnalyser::`vftable'
    char* var_40_1 = edx
    void* result_1 = result
    void* esi_1 = &edx[4]
    int32_t var_8_1 = 0
    
    if (esi_1 u> result_1)
        result.b = 0
    else
        uint32_t i_1 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
        
        if (esi_1 + (i_1 << 2) u> result_1)
            result.b = 0
        else
            void var_4c
            
            if (i_1 s> 0)
                uint32_t i
                
                do
                    void* var_64_1 = var_38
                    uint32_t eax_10 = zx.d(*esi_1)
                    uint32_t ecx_5 = ((zx.d(*(esi_1 + 3)) << 8 | zx.d(*(esi_1 + 2))) << 8
                        | zx.d(*(esi_1 + 1))) << 8
                    esi_1 += 4
                    uint32_t ecx_6 = ecx_5 | eax_10
                    void* var_40_2 = esi_1
                    uint32_t var_34 = ecx_6
                    uint32_t* var_68_1 = &var_34
                    sub_514cb0(ebx + 0x24, &var_4c, ecx_6)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                ebx = var_38
            
            if (esi_1 + 4 u> result_1)
                result.b = 0
            else
                void* var_40_3 = esi_1 + 4
                int32_t esi_2 = 0
                int32_t edi_13 =
                    ((zx.d(*(esi_1 + 3)) << 8 | zx.d(*(esi_1 + 2))) << 8 | zx.d(*(esi_1 + 1))) << 8
                    | zx.d(*esi_1)
                
                if (edi_13 s<= 0)
                    result.b = 1
                else
                    while (true)
                        int32_t** var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        char var_30 = 0
                        var_8_1.b = 1
                        char eax_13
                        int32_t ecx_10
                        eax_13, ecx_10 = sub_61ed80(&var_44, &var_30)
                        
                        if (eax_13 == 0)
                            if (var_1c_1 u>= 0x10)
                                sub_403160(var_30.d, var_1c_1 + 1, 1)
                            
                            break
                        
                        void* var_64_3 = var_38
                        char* var_68_2 = &var_30
                        sub_44e4f0(ebx + 0x2c, &var_4c, ecx_10)
                        var_8_1.b = 0
                        
                        if (var_1c_1 u>= 0x10)
                            sub_403160(var_30.d, var_1c_1 + 1, 1)
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi_13)
                            result.b = 1
                            goto label_5637ea
                    
                    result.b = 0
else
    result.b = 1

label_5637ea:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
