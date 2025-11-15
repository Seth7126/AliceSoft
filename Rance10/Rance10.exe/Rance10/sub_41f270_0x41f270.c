// 函数: sub_41f270
// 地址: 0x41f270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728d70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CFileMapping::VTable* const var_3c = &win32only::CFileMapping::`vftable'
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_38 = 0
struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
sub_403490(&var_54, "Sys4xVMDPVReceive", 0x11)
var_8_1.b = 1
var_8_1.b = 0
char** ebx
ebx.b = sub_6cde90(&var_3c, &var_54) == 0

if (var_40 u>= 0x10)
    sub_403160(var_54.d, var_40 + 1, 1)

int32_t* lpBaseAddress_1

if (ebx.b == 0)
    lpBaseAddress_1 = lpBaseAddress

if (ebx.b != 0 || lpBaseAddress_1 == 0)
    ebx.b = 0
else
    void* esi_1 = *lpBaseAddress_1
    sub_405950(arg1, esi_1)
    sub_700660(*arg1, &lpBaseAddress_1[1], esi_1)
    
    if (lpBaseAddress != 0)
        UnmapViewOfFile(lpBaseAddress)
        int32_t var_34 = 0
    
    ebx.b = 1

var_3c = &win32only::CFileMapping::`vftable'
sub_6cdf10(&var_3c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
