// 函数: sub_4a7f50
// 地址: 0x4a7f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731578
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_7fcb98
int32_t* result = arg1

if (*(ebx + 8) != 0)
    void** esi_1 = sub_432330(ebx + 0x64, result)
    char eax_5
    
    if (esi_1 != *(ebx + 0x64))
        eax_5 = sub_412ca0(result, &esi_1[4])
    
    if (esi_1 == *(ebx + 0x64) || eax_5 != 0)
        esi_1 = *(ebx + 0x64)
    
    int32_t* result_2
    
    if (esi_1 == *(ebx + 0x64))
        int32_t* result_3 = result_2
        void** var_40 = arg2
        int32_t* result_4 = result_3
        int32_t var_8_1 = 0
        void* var_34
        int32_t* eax_9
        void* ecx_4
        eax_9, ecx_4 = sub_4a8fa0(sub_4a8f50(&var_40, result, &var_34, &var_40))
        int32_t* var_50_5 = eax_9
        void* var_54_2 = &eax_9[4]
        sub_4a8ff0(ebx + 0x64, &var_40, ecx_4)
        int32_t* result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_34, result + 1, 1)
    else if (esi_1[0xa] == arg2)
        int32_t** ecx_7 = &result_2
        
        if (esi_1[0xb] s>= result_2)
            ecx_7 = &esi_1[0xb]
        
        result = *ecx_7
        esi_1[0xb] = result
    else
        result = result_2
        esi_1[0xa] = arg2
        esi_1[0xb] = result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
