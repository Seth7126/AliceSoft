// 函数: sub_4023a0
// 地址: 0x4023a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* result_2 = arg1
char* result_3 = result_2
int32_t edi_1 = arg2 | 0xf

if (edi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(result_2 + 0x14)
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> edi_1 u/ 3)
        edi_1 = ecx_1 + ebx_1
        
        if (ebx_1 u> 0xfffffffe - ecx_1)
            edi_1 = 0xfffffffe
else
    edi_1 = arg2

int32_t var_8_1 = 0
int32_t* result_1 = nullptr
int32_t* result = nullptr

if (edi_1 != 0xffffffff)
    if (edi_1 + 1 u<= 0xffffffff)
        result_1 = sub_69adc6(edi_1 + 1)
        result = result_1
    
    if (edi_1 + 1 u> 0xffffffff || result_1 == 0)
        sub_69a4fc()
        noreturn

if (arg3 != 0)
    char* result_4
    
    if (*(result_2 + 0x14) u< 0x10)
        result_4 = result_2
    else
        result_4 = *result_2
    
    if (arg3 != 0)
        sub_69d850(result_1, result_4, arg3)

if (*(result_2 + 0x14) u>= 0x10)
    j__free(*result_2)

*result_2 = 0
*result_2 = result
*(result_2 + 0x14) = edi_1
*(result_2 + 0x10) = arg3

if (edi_1 u>= 0x10)
    result_2 = result

*(result_2 + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
