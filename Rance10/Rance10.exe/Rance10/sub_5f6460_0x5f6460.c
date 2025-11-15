// 函数: sub_5f6460
// 地址: 0x5f6460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64
char* result

switch ((**arg3)(eax_2) - 0xa)
    case 0, 0x25, 0x52
        result = (*(*arg3 + 0x2c))(arg2, sub_602ff0())
    case 1
        int32_t ecx_3
        int32_t xmm0_1
        ecx_3, xmm0_1 = sub_603140()
        int32_t var_7c_1 = ecx_3
        result = (*(*arg3 + 0x30))(arg2, xmm0_1)
    case 2
        void var_60
        char* ecx_6 = sub_603290(&var_60)
        int32_t var_8_1 = 0
        
        if (*(ecx_6 + 0x14) u>= 0x10)
            ecx_6 = *ecx_6
        
        (*(*arg3 + 0x34))(arg2, ecx_6)
        result = sub_403320(&var_60)
    case 3
        int32_t* eax_12 = (*(*arg3 + 0x18))(arg2)
        void* ecx_10 = data_7fcbb4
        
        if (ecx_10 != 0)
            int32_t eax_13 = sub_6228d0(ecx_10, arg4[2])
            int32_t eax_14 = neg.d(eax_13)
            result = (*(*eax_12 + 4))(sbb.d(eax_14, eax_14, eax_13 != 0) & (eax_13 + 0x20))
        else
            result = (*(*eax_12 + 4))(0)
    case 8, 9, 0x29, 0x4f, 0x53
        int32_t edx_3
        
        if (sub_602c60(arg4) == 0)
            edx_3 = var_64
        else
            edx_3 = arg4[2]
        
        if (sub_602ce0(arg4) == 0)
            result = (*(*arg3 + 0x3c))(arg2, edx_3, var_64)
        else
            result = (*(*arg3 + 0x3c))(arg2, edx_3, arg4[3])
    case 0xa, 0xb
        if (sub_602c60(arg4) == 0)
            result = (*(*arg3 + 0x38))(arg2, var_64)
        else
            result = (*(*arg3 + 0x38))(arg2, arg4[2])
    default
        var_64 = (**arg3)()
        char* result_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403490(&var_30, 0x76a93c, 0x1c)
        int32_t var_8_2 = 1
        var_8_2.b = 2
        char var_48
        sub_6c52e0(sub_409350(&var_64, &var_30, &var_48, &var_64))
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, var_34 + 1, 1)
        
        result = result_1
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_30.d, &result[1], 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
