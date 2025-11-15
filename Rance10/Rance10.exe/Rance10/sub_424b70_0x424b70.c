// 函数: sub_424b70
// 地址: 0x424b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729600
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
sub_424b40(data_7fcb3c, &var_2c, arg1)
int32_t var_8_1 = 0
void* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
var_8_1.b = 1
int32_t* edx = &var_2c
int32_t var_18

if (var_18 u>= 0x10)
    edx = var_2c

char eax_4 = sub_63a500(&var_38, edx)
void* edi = var_38
int32_t result

if (eax_4 != 0)
    result = 0
    void* eax_5 = edi
    
    if (edi != var_34)
        do
            result <<= 3
            
            switch (*eax_5 - 0xa)
                case 0
                    result |= 1
                case 1
                    result |= 2
                case 2
                    result |= 4
                case 0x25
                    result |= 3
            
            eax_5 += 4
        while (eax_5 != var_34)
else
    result = 0

if (edi != 0)
    sub_403160(edi, (var_30 - edi) s>> 2, 4)

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
