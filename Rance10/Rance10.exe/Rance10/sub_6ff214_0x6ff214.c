// 函数: sub_6ff214
// 地址: 0x6ff214
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de240
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de240 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_6ff220
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1

if (result != 0 && *result == 0xe06d7363 && result[4] == 3
        && (result[5] == 0x19930520 || result[5] == 0x19930521 || result[5] == 0x19930522))
    char* ecx_1 = result[7]
    
    if (ecx_1 != 0)
        void* edx_1 = *(ecx_1 + 4)
        
        if (edx_1 != 0)
            int32_t var_8_1 = 0
            result = sub_6d5159(result[6], edx_1)
            int32_t var_8_2 = 0xfffffffe
        else if ((*ecx_1 & 0x10) != 0)
            result = result[6]
            int32_t* ecx_2 = *result
            
            if (ecx_2 != 0)
                int32_t esi_1 = *(*ecx_2 + 8)
                j_sub_4033e0()
                result = esi_1(ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ff2a7
return result
