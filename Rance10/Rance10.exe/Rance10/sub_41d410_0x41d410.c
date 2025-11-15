// 函数: sub_41d410
// 地址: 0x41d410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728b6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_60 = 0
char var_70 = 0
int32_t var_8_1 = 0
void* var_98 = nullptr
int32_t var_94 = 0
int32_t var_90 = 0
var_8_1.b = 1
char eax_4 = sub_4209f0(*(arg1 + 4), &var_70, &var_98)
struct fileimage::CFileImageMaker::VTable* const var_88 = &fileimage::CFileImageMaker::`vftable'
void* var_84 = nullptr
char* var_80 = nullptr
int32_t var_7c = 0
var_8_1.b = 2
void* edi = var_98
sub_6ca100(&var_88, (var_94 - edi) s>> 3)
void* esi = edi

if (edi != var_94)
    do
        int32_t edx_1 = *(esi + 4)
        int32_t eax_8 = (*(**(*(arg1 + 4) + 8) + 0x34))(edx_1)
        int32_t ebx_1 = *esi
        int32_t var_1c_1 = 0xf
        void* var_20_1 = nullptr
        char var_30 = 0
        var_8_1.b = 3
        sub_41f9a0(*(arg1 + 4), edx_1, &var_30)
        sub_6ca100(&var_88, edx_1)
        sub_6ca100(&var_88, eax_8)
        sub_6ca100(&var_88, ebx_1)
        char* edi_2 = &var_30
        char* edx_2 = &var_30
        
        if (var_1c_1 u>= 0x10)
            edi_2 = var_30.d
        
        if (var_1c_1 u>= 0x10)
            edx_2 = var_30.d
        
        int32_t var_b4_7 = 0.d
        sub_6ca200(&var_84, var_80, edx_2, var_20_1 + edi_2)
        char var_71 = 0
        sub_4263a0(&var_84, &var_71)
        var_8_1.b = 2
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        esi += 8
    while (esi != var_94)
    
    edi = var_98

struct win32only::CFileMapping::VTable* const var_58 = &win32only::CFileMapping::`vftable'
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4c = 0
var_8_1.b = 4

if (sub_41f180(&var_58, &var_88) != 0)
    WPARAM wParam
    wParam.b = eax_4 != 0
    SendMessageA(*(arg1 + 0xc), arg2, wParam, 0)

var_58 = &win32only::CFileMapping::`vftable'
sub_6cdf10(&var_58)

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

void* ecx_14 = var_84
int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
char var_48_1 = 0

if (ecx_14 != 0)
    sub_403160(ecx_14, var_7c - ecx_14, 1)

if (edi != 0)
    sub_403160(edi, (var_90 - edi) s>> 3, 8)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_70.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
