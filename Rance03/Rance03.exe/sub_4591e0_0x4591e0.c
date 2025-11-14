// 函数: sub_4591e0
// 地址: 0x4591e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7df8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_3c = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_1c = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
uint8_t var_2d = arg1.b
sub_414b60(&result_1, &var_2d)
var_2d = (arg1 u>> 8).b
sub_414b60(&result_1, &var_2d)
var_2d = (arg1 u>> 0x10).b
sub_414b60(&result_1, &var_2d)
var_2d = (arg1 u>> 0x18).b
sub_414b60(&result_1, &var_2d)
char* var_28
sub_459330(&var_28, &result_1)
int32_t eax_7 = 0
char* edx = var_28
int32_t var_24
void* ecx_6 = var_24 - edx

if (ecx_6 s> 0)
    do
        edx[eax_7] ^= 0x65
        eax_7 += 1
    while (eax_7 s< ecx_6)

uint32_t xmm0

if (&edx[4] u> var_24)
    xmm0 = (zx.o(0)).d
else
    xmm0 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)

uint32_t var_2c_2 = xmm0

if (edx != 0)
    j__free(edx)

int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
