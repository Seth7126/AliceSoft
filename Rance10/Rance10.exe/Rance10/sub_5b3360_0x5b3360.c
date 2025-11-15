// 函数: sub_5b3360
// 地址: 0x5b3360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
label_5b3494:
    result.b = 0
else
    int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    uint32_t var_60
    
    if (ecx_6 != 1)
    label_5b3494_1:
        result.b = 0
    else if (sub_61ec90(arg2, &var_60).b == 0)
    label_5b3494_2:
        result.b = 0
    else
        int32_t edi_1 = 0
        
        if (var_60 s> 0)
            do
                char* edx_1 = *(arg2 + 4)
                
                if (&edx_1[4] u> *(arg2 + 8))
                    goto label_5b3494_2
                
                bool cond:0_1 = (((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
                    | zx.d(*edx_1)) != 0
                *(arg2 + 4) = &edx_1[4]
                
                if (cond:0_1)
                    goto label_5b3494_2
                
                int128_t var_44_1 = data_79a7b0
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                char var_5c = 0
                int128_t var_34
                __builtin_memset(&var_34, 0, 0x1a)
                char* var_80_2 = &var_5c
                void* var_84_1 = arg2
                int32_t var_8_1 = 0
                char* ecx_16 = &var_5c
                
                if (sub_5b2cf0(arg1) == 0)
                    sub_5b34c0(ecx_16)
                    goto label_5b3494_2
                
                int32_t var_8_2 = 0xffffffff
                sub_5b34c0(ecx_16)
                edi_1 += 1
            while (edi_1 s< var_60)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
