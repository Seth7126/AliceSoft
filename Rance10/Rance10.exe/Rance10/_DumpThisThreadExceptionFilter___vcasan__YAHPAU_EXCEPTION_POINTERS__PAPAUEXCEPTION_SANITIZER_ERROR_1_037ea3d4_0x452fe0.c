// 函数: ?DumpThisThreadExceptionFilter@__vcasan@@YAHPAU_EXCEPTION_POINTERS@@PAPAUEXCEPTION_SANITIZER_ERROR@1@PBGAAK@Z
// 地址: 0x452fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b4e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_34 = &fileimage::CFileImageMaker::`vftable'
void* var_30 = nullptr
char* var_2c = nullptr
int32_t var_28 = 0
int32_t var_8_1 = 0
sub_6ca100(&var_34, *(arg1 + 0x24))
int32_t* esi_1 = *(arg1 + 0x20)
void* result_4 = *esi_1
void* result_1 = result_4
char arg_7
void* result
void* ebx_2

if (result_4 == esi_1)
label_4530ad:
    struct commonsystemdata::CZlibCompressor::VTable* const var_24_1 =
        &commonsystemdata::CZlibCompressor::`vftable'
    int32_t var_20_1 = 0
    var_8_1.b = 1
    result = sub_6cc630(0x75df80)
    ebx_2 = var_30
    void* result_2 = result
    void* result_3 = result_2
    void* ecx_7
    
    if (result_2 != 0)
        ecx_7 = var_2c - ebx_2
        result = (*(*result_2 + 8))(ebx_2, ecx_7)
        result_1 = result
    
    if (result_2 == 0 || result == 0)
        result.b = 0
    else
        int32_t* esi_2 = arg2
        sub_405950(esi_2, (*(*result + 0x14))(eax_2))
        char* eax_8 = *esi_2
        void* result_5 = result_1
        
        if (eax_8 != esi_2[1])
            sub_700660(eax_8, (*(*result_5 + 0x18))((*(*result_5 + 0x14))()))
        
        *arg3 = ecx_7
        (*(*result_5 + 4))()
        result.b = 1
    
    arg_7 = result.b
    var_8_1.b = 2
    
    if (result_2 != 0)
        (*(*result_2 + 4))(eax_2)
        result.b = arg_7
else
    while (true)
        int32_t eax_3 = *(result_4 + 0x24)
        void* edx_1
        
        if (eax_3 u< 0x10)
            edx_1 = result_4 + 0x10
        else
            edx_1 = *(result_4 + 0x10)
        
        void* ecx_1
        
        if (eax_3 u< 0x10)
            ecx_1 = result_4 + 0x10
        else
            ecx_1 = *(result_4 + 0x10)
        
        int32_t var_1c
        var_1c.b = 0
        int32_t var_48_1 = 0
        sub_6ca200(&var_30, var_2c, ecx_1, edx_1 + *(result_4 + 0x20))
        char var_11 = 0
        sub_4263a0(&var_30, &var_11)
        
        if (sub_4546f0(result_4 + 0x28, &var_34).b == 0)
            ebx_2 = var_30
            result.b = 0
            arg_7 = 0
            break
        
        sub_429080(&result_1)
        result_4 = result_1
        
        if (result_4 == esi_1)
            goto label_4530ad

if (ebx_2 != 0)
    sub_403160(ebx_2, var_28 - ebx_2, 1)
    result.b = arg_7

fsbase->NtTib.ExceptionList = ExceptionList
return result
