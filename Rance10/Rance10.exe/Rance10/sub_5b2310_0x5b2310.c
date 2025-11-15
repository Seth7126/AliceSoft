// 函数: sub_5b2310
// 地址: 0x5b2310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dc48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* edi = arg1
int32_t ebx = edi[3]

for (int32_t* i = edi[2]; i != ebx; i = &i[1])
    arg1 = sub_5b4620(i)

edi[3] = edi[2]
uint32_t* var_30 = arg1
sub_5b51a0(edi[5], edi[6])
edi[6] = edi[5]
struct fileimage::CFileImageAnalyser::VTable* const var_1c =
    &fileimage::CFileImageAnalyser::`vftable'
int32_t var_18 = arg2
int32_t var_14 = arg3 + arg2
int32_t var_8_1 = 0

if (sub_5b2420(edi, &var_1c) != 0)
    if (edi[1] s>= 4)
        if (sub_5b27c0(edi) != 0)
        label_5b23d1:
            struct fileimage::CFileImageAnalyser::VTable* const* var_30_3 = &var_1c
            
            if (sub_5b2b90(edi) != 0)
                char eax_7 = sub_5b3f50(edi, &var_1c)
                
                if (eax_7 != 0)
                    if (edi[8] != edi[9])
                        eax_7 = sub_5b42b0(edi)
                    
                    if (edi[8] == edi[9] || eax_7 != 0)
                        sub_5b4200(edi)
                        int32_t result
                        result.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
    else if (sub_5b24e0(edi, &var_1c) != 0)
        goto label_5b23d1

fsbase->NtTib.ExceptionList = ExceptionList
return 0
