// 函数: sub_44af10
// 地址: 0x44af10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aa38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0
int32_t* result
void var_2c

if (arg2 u> 4)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            char* eax_4 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            
            if (*(eax_4 + 0x14) u>= 0x10)
                eax_4 = *eax_4
            
            bool eax_5 = sub_44c4e0(eax_4)
            *arg1 = 0x2f
            int32_t ecx_1
            ecx_1.b = eax_5 != 0
            arg1[1] = ecx_1
            sub_403320(&var_2c)
            result = arg1
        case 1
            *arg3
            char* eax_6 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            void* edx_1 = *arg3
            char* eax_8 = sub_603430(edx_1 + 0x50)
            char* eax_9 = sub_603430(edx_1 + 0x40)
            int32_t* eax_10 = sub_603470(edx_1 + 0x30)
            int32_t* eax_11 = sub_603470(edx_1 + 0x20)
            int32_t* eax_12 = sub_603470(edx_1 + 0x10)
            int32_t ecx_10
            ecx_10.b = sub_44ef70(eax_12, eax_12, eax_6, eax_11, eax_10, eax_9, eax_8) != 0
            arg1[1] = ecx_10
            *arg1 = 0x2f
            sub_403320(&var_2c)
            result = arg1
        case 2
            *arg3
            char* edi_2 = sub_603290(&var_2c)
            int32_t var_8_3 = 2
            void* esi_3 = *arg3
            uint32_t* eax_15 = sub_603470(esi_3 + 0x20)
            BOOL eax_16 = sub_603470(esi_3 + 0x10)
            
            if (eax_16 != 0 && eax_15 != 0)
                if (*(edi_2 + 0x14) u>= 0x10)
                    edi_2 = *edi_2
                
                sub_44c5f0(edi_2, eax_16, eax_15)
            
            sub_403320(&var_2c)
            *arg1 = 0
            result = arg1
        case 3
            *arg3
            int32_t var_8_4 = 3
            int32_t eax_19 = sub_44efe0(sub_603290(&var_2c))
            *arg1 = 0xa
            arg1[1] = eax_19
            sub_403320(&var_2c)
            result = arg1
        case 4
            *arg3
            int32_t var_8_5 = 4
            void var_44
            uint32_t eax_21 = sub_44f020(sub_603290(&var_44))
            *arg1 = 0xa
            arg1[1] = eax_21
            sub_403320(&var_44)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
