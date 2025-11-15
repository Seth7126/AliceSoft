// 函数: sub_562e70
// 地址: 0x562e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_3 = sub_562f50(arg1)

if (eax_3 != 0)
    if (*(arg1 + 0x28) != 0 || *(arg1 + 0x30) != 0)
        int32_t var_8_1 = 0
        sub_4f2d00(*(*(arg1 + 0x24) + 4))
        void* eax_5 = *(arg1 + 0x24)
        *(eax_5 + 4) = eax_5
        int32_t* eax_6 = *(arg1 + 0x24)
        *eax_6 = eax_6
        void* eax_7 = *(arg1 + 0x24)
        *(eax_7 + 8) = eax_7
        *(arg1 + 0x28) = 0
        int32_t var_8_2 = 1
        sub_44e450(*(*(arg1 + 0x2c) + 4))
        void* eax_9 = *(arg1 + 0x2c)
        *(eax_9 + 4) = eax_9
        int32_t* eax_10 = *(arg1 + 0x2c)
        *eax_10 = eax_10
        void* eax_11 = *(arg1 + 0x2c)
        int32_t var_8_3 = 0xffffffff
        *(eax_11 + 8) = eax_11
        *(arg1 + 0x30) = 0
        eax_3 = sub_5632a0(arg1)
    
    if ((*(arg1 + 0x28) == 0 && *(arg1 + 0x30) == 0) || eax_3 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1

fsbase->NtTib.ExceptionList = ExceptionList
return 0
