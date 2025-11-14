// 函数: sub_4a4c50
// 地址: 0x4a4c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc920
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_40
int32_t eax_2 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    int32_t __saved_edi
    ecx = (*(*ecx + 4))(__security_cookie ^ &__saved_edi)
    *(arg1 + 0x5c) = 0

int32_t var_58 = arg5
long double x87_r0
int32_t* result = sub_4bbf40(arg1 + 0x6c, x87_r0, ecx, arg3, arg4)

if (result.b != 0)
    int32_t var_4 = 0
    int32_t var_28
    int32_t* ecx_4 =
        sub_410930(sub_410930(result, arg4, &var_40, 0x6e05fc), &var_40, &var_28, 0x6e05ec)
    var_4.b = 1
    int32_t* edx_3 = arg3[1]
    int32_t* result_1
    
    if (edx_3 != 0)
        if (ecx_4[5] u>= 0x10)
            ecx_4 = *ecx_4
        
        result, ecx_4 = (*(*edx_3 + 0x44))(ecx_4)
        result_1 = result
    else
        result_1 = nullptr
    
    var_4.b = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result, ecx_4 = j__free(var_28)
    
    if (result_1 u> 0xa)
        result_1.b = 0
    else
        switch (result_1)
            case nullptr
                int32_t* var_64_1 = ecx_4
                result = sub_4999b0(sub_4a3970(arg1), arg2, arg3, &var_40)
            label_4a4ec4:
                
                if (result.b == 0)
                    result_1.b = 0
                else
                    result_1.b = 1
            case 1
                int32_t* var_64_2 = ecx_4
                result = sub_49e4b0(sub_4a3a10(arg1), arg2, arg3, &var_40)
            label_4a4d6c:
                
                if (result.b != 0)
                    result_1.b = 1
                else
                    result_1.b = 0
            case 2
                int32_t* var_64_3 = ecx_4
                result = sub_4e2f90(sub_4a3ac0(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 3
                int32_t* var_64_4 = ecx_4
                result = sub_4e2f90(sub_4a3b70(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 4
                int32_t* var_64_5 = ecx_4
                result = sub_4e05c0(sub_4a3c20(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 5
                int32_t* var_64_6 = ecx_4
                result = sub_4b4360(sub_4a3cd0(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 6
                int32_t* var_64_7 = ecx_4
                result = sub_4a1440(sub_4a3d80(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 7
                int32_t* var_64_8 = ecx_4
                result = sub_4c9260(sub_4a3e30(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 8
                int32_t* var_64_9 = ecx_4
                result = sub_4afba0(sub_4a3ee0(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 9
                int32_t var_58_13 = arg5
                result = sub_4d5620(sub_4a3f80(arg1), arg2, arg3, &var_40)
                goto label_4a4d6c
            case 0xa
                result = sub_511fe0(*(sub_4a4020(arg1) + 0x34), arg2, arg3, &var_40)
                goto label_4a4ec4
    
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    result.b = result_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
