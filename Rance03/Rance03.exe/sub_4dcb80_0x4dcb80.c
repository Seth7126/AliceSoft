// 函数: sub_4dcb80
// 地址: 0x4dcb80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_485b20(arg1 + 4, arg2, 0)
int32_t* result = sub_4dfc00()

if (result.b == 0)
    if (arg2 != 1)
        if (arg2 == 0xd)
            *(arg1 + 0x1bb) = 1
    else if (*(arg1 + 0x90) == result.b)
        void* esi_1 = data_75d4e0
        int32_t var_40 = 0
        int32_t var_3c = 0
        
        if (sub_46cb80(esi_1) != 0)
            (***(esi_1 + 0xc))(&var_40, &var_3c)
        
        int32_t var_34
        sub_40d1c0(arg1 + 0xbc, arg1 + 0xa4, &var_34, arg1 + 0xbc)
        int32_t var_c_1 = 0
        int32_t esi_2 = *(arg1 + 0xf4)
        int32_t edi_1 = int.d(sub_4dffc0(arg1 - 4))
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(esi_2)
        sub_4dee20(arg1 - 4, &var_34, var_40 - ((eax_9 - edx_2) s>> 1) - edi_1)
        result = sub_4c75f0(arg1 + 0xa4)
        *(arg1 + 0x94) = result
        int32_t var_20
        
        if (var_20 u>= 0x10)
            result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
