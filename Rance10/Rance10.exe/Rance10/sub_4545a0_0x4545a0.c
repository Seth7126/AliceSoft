// 函数: sub_4545a0
// 地址: 0x4545a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edi[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t ecx_6 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg2 + 4) = &edi[4]
    uint32_t var_30
    
    if (ecx_6 - 1 u> 3)
        result.b = 0
    else
        switch (ecx_6)
            case 1
                if (sub_61ec90(arg2, &var_30).b == 0)
                    result.b = 0
                else
                    *(arg1 + 8) = var_30
                    result.b = 1
                    *(arg1 + 4) = 1
            case 2
                if (sub_6c9300(arg2, &var_30).b == 0)
                    result.b = 0
                else
                    uint32_t xmm0_1 = var_30
                    result.b = 1
                    *(arg1 + 4) = 2
                    *(arg1 + 0xc) = xmm0_1
            case 3
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                int32_t var_8_1 = 0
                
                if (sub_61ed80(arg2, &var_2c) != 0)
                    sub_454580(arg1, &var_2c)
                    sub_403320(&var_2c)
                    result.b = 1
                else
                    sub_403320(&var_2c)
                    result.b = 0
            case 4
                if (sub_61ec90(arg2, &var_30).b == 0)
                    result.b = 0
                else
                    bool cond:0_1 = var_30 != 0
                    *(arg1 + 4) = 4
                    result.b = cond:0_1
                    *(arg1 + 0x28) = result.b
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
