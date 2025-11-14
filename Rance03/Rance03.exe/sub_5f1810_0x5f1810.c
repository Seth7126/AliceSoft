// 函数: sub_5f1810
// 地址: 0x5f1810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (*(arg1 + 0x118) == 0xffffffff)
    void* var_30_1 = arg1 + 0x138
    result = sub_5f02c0(arg1 + 0x110)

if (*(arg1 + 0x118) != 0xffffffff || result.b != 0)
    void** arg_8
    result = sub_5f21d0(arg_8)
    
    if (result == 0)
        result.b = 0
    else
        arg_8 = nullptr
        uint32_t result_1 = 0
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        int32_t* ebx_1
        
        if (sub_5f0440(arg1 + 0x110, arg2[1] - 0x100, *(arg1 + 0x44) * arg2[2], result, &arg_8, 
                &result_1) == 0)
            ebx_1.b = 0
        else
            int32_t esi_1 = *(arg1 + 0x44)
            void** ebp_1 = arg_8
            int32_t temp0_1 = divs.dp.d(sx.q((ebp_1 - 1 + esi_1) & not.d(esi_1 - 1)), esi_1)
            int32_t edx_2 = arg2[2]
            *arg3 = temp0_1
            int32_t ecx_7 = esi_1 * edx_2
            *arg4 = edx_2
            int32_t var_30_4 = ecx_7
            
            if (sub_5f1950(arg1, ecx_7, temp0_1 * esi_1) == 0)
                ebx_1.b = 0
            else if (sub_5f1cf0(arg1, ebp_1, *arg3, *arg4, &result_1) == 0)
                ebx_1.b = 0
            else
                ebx_1.b = 1
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
