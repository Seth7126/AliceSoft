// 函数: sub_518950
// 地址: 0x518950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c26d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm1 = arg2 + arg4
float xmm2 = arg3 + arg5
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8)))
int32_t esi = *(arg1 + 0xc4)
int32_t edx = *(arg1 + 0xc0)
struct partsengine::CRect::VTable* const var_20 = &partsengine::CRect::`vftable'
int32_t var_14 = edx
float var_24 = xmm1
arg5 = xmm2
int32_t var_10 = esi
int32_t var_1c = int.d(xmm0_1 + xmm1)
int32_t result = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xbc))) + xmm2)
int32_t result_1 = result
int32_t var_4 = 0
void** i = *(arg1 + 0xa8)

while (i != *(arg1 + 0xac))
    result = sub_516a00(*i, xmm1, xmm2, &var_20)
    xmm1 = var_24
    i = &i[1]
    xmm2 = arg5

fsbase->NtTib.ExceptionList = ExceptionList
return result
