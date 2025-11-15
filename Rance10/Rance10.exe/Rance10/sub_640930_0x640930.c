// 函数: sub_640930
// 地址: 0x640930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (*(arg1 + 0x120) == 0xffffffff)
    void* var_30_1 = arg1 + 0x140
    result = sub_63f2b0(arg1 + 0x114)

if (*(arg1 + 0x120) != 0xffffffff || result.b != 0)
    void** arg_8
    result = sub_641380(arg_8)
    
    if (result != 0)
        arg_8 = nullptr
        void* var_1c = nullptr
        int32_t var_18 = 0
        int32_t var_14 = 0
        int32_t var_8_1 = 0
        int32_t* ebx
        
        if (sub_63f4b0(arg1 + 0x114, arg2[1] - 0x100, arg2[2] * *(arg1 + 0x48), result, &arg_8, 
                &var_1c) == 0)
            ebx.b = 0
        else
            int32_t esi_1 = *(arg1 + 0x48)
            *arg3 = divs.dp.d(sx.q((arg_8 - 1 + esi_1) & not.d(esi_1 - 1)), esi_1)
            int32_t ecx_7 = arg2[2]
            *arg4 = ecx_7
            
            if (sub_640a70(arg1, *arg3 * *(arg1 + 0x48), *(arg1 + 0x48) * ecx_7) == 0)
                ebx.b = 0
            else if (sub_640d30(arg1, arg_8, *arg3, *arg4, &var_1c) == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        void* edx_4 = var_1c
        
        if (edx_4 != 0)
            sub_403160(edx_4, var_14 - edx_4, 1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx.b

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
