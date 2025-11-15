// 函数: sub_546f60
// 地址: 0x546f60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
void* ebx

if (sub_61ed80(arg2, &var_2c) == 0)
    ebx.b = 0
else
    char* ecx_1 = *(arg2 + 4)
    
    if (&ecx_1[4] u> *(arg2 + 8))
        ebx.b = 0
    else
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg2 + 4) = &ecx_1[4]
        uint32_t var_38
        uint32_t var_34
        
        if (sub_61ec90(arg2, &var_38) == 0)
            ebx.b = 0
        else
            uint32_t var_30
            
            if (sub_61ec90(arg2, &var_34) == 0)
                ebx.b = 0
            else if (sub_61ec90(arg2, &var_30) == 0)
                ebx.b = 0
            else
                sub_546e90(arg1, edi_7, var_38, var_34, var_30)
                sub_546c80(arg1, &var_2c)
                ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
