// 函数: sub_46a390
// 地址: 0x46a390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cf20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_78 = arg1
int32_t eax_3 = *(arg2 + 0x34)
int32_t var_7c = 0

if (eax_3 - 1 u> 4)
label_46a506:
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403490(arg1, 0x75ce17, nullptr)
else
    switch (eax_3)
        case 1
            if (eax_3 == 2)
                sub_6ca3a0(arg1, int.d(sub_462f40(*(arg2 + 0x40))))
            else if (eax_3 == 1)
                sub_6ca3a0(arg1, *(arg2 + 0x3c) ^ 0x65656565)
            else
                sub_6ca3a0(arg1, 0)
        case 2
            if (eax_3 == 1)
                _mm_cvtepi32_ps(zx.o(*(arg2 + 0x3c)) ^ 0x65656565)
                sub_6ca450(arg1)
            else if (eax_3 == 2)
                sub_462f40(*(arg2 + 0x40))
                sub_6ca450(arg1)
            else
                sub_6ca450(arg1)
        case 3
            void var_2c
            sub_403360(&var_2c, 0x75ce0f)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_44
            sub_46a770(arg1, sub_46dfd0(arg2, &var_44, &var_2c))
            sub_403320(&var_44)
            sub_403320(&var_2c)
        case 4
            goto label_46a506
        case 5
            void var_74
            int32_t* eax_7 = sub_4699e0(&var_74, arg2 + 0x8c)
            int32_t var_8_2 = 2
            void var_5c
            char* eax_8 = sub_41a330(eax_7.b, U"["""", &var_5c, eax_7)
            var_8_2.b = 3
            sub_4176f0(eax_8.b, eax_8, arg1, U"]")
            sub_403320(&var_5c)
            sub_403320(&var_74)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
