// 函数: sub_61c510
// 地址: 0x61c510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

if (esi != arg2)
    void* edi_1 = data_7fcbb4
    
    do
        int32_t var_8_1 = 0
        result = sub_602c60(esi)
        
        if (result != 0 && edi_1 != 0)
            result = sub_621db0(edi_1, esi[2])
            edi_1 = data_7fcbb4
        
        *esi = 0xffffffff
        esi = &esi[4]
        int32_t var_8_2 = 0xffffffff
    while (esi != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
