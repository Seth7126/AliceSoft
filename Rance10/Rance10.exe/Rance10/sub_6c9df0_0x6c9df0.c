// 函数: sub_6c9df0
// 地址: 0x6c9df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72faf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_30 = ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_2c = &fileimage::CFileImageMaker::`vftable'
char* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t arg_4
void* result = sub_6ca0c0(&var_2c, arg_4)
char* esi = var_28
int32_t edi = 0
void* ecx_2 = var_24 - esi

if (esi u> var_24)
    ecx_2 = nullptr

if (ecx_2 != 0)
    void* ecx_3 = arg1
    result = ecx_3 + 4
    void* result_1 = result
    
    do
        ebx.b = *esi
        arg_4.b = ebx.b
        
        if (*(ecx_3 + 0x10) != 0)
            char* edx_2 = *result + *(result + 4) - *result - 1
            result.b = ebx.b
            void* ecx_8
            ecx_8.b = *(arg1 + 0x10)
            result.b u>>= ecx_8.b
            *edx_2 |= result.b
            ebx.b <<= 8 - (*(arg1 + 0x10)).b
            arg_4:3.b = ebx.b
            sub_4263a0(result_1, &arg_4:3)
        else
            sub_4263a0(result, &arg_4)
        
        result = result_1
        edi += 1
        ecx_3 = arg1
        esi = &esi[1]
    while (edi != ecx_2)
    
    esi = var_28

var_2c = &fileimage::CFileImageMaker::`vftable'

if (esi != 0)
    result = sub_403160(esi, var_20 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
