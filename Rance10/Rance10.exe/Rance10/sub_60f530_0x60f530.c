// 函数: sub_60f530
// 地址: 0x60f530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74336e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
result[4] = 0
result[5] = 0
result[5] = 0xf
bool cond:0 = result[5] u< 0x10
result[4] = 0
char* result_2

if (cond:0)
    result_2 = result
else
    result_2 = *result

void* edi = arg2
*result_2 = 0
sub_403590(arg1, edi, 0, 0xffffffff)
int32_t var_8_1 = 0
result[0xb] = 0xf
result[0xa] = 0
char* eax_3

if (result[0xb] u< 0x10)
    eax_3 = &result[6]
else
    eax_3 = result[6]

*eax_3 = 0
sub_403590(&result[6], edi + 0x18, 0, 0xffffffff)
var_8_1.b = 1
result[0xc] = &sys43vm::CObjType::`vftable'{for `IDebugFileObjType'}
result[0xd] = *(edi + 0x34)
result[0xe] = *(edi + 0x38)
arg2 = &result[0xc]
sub_600560(&result[0xf], edi + 0x3c)
var_8_1.b = 2
result[0x12] = *(edi + 0x48)
int32_t eax_7
eax_7.b = *(edi + 0x4c)
result[0x13].b = eax_7.b
result[0x14] = *(edi + 0x50)
result[0x15] = *(edi + 0x54)
result[0x1b] = 0xf
result[0x1a] = 0
result[0x16].b = 0
sub_403590(&result[0x16], edi + 0x58, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result
