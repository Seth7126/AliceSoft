// 函数: sub_518ab0
// 地址: 0x518ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_34 = 0f
int32_t var_30 = 0
sub_518090(arg1, &var_34, &var_30)
sub_518250(arg1)
struct partsengine::CRect::VTable* var_2c
sub_4fbef0(&var_2c, var_34, var_30, &arg1[0x2d])
int32_t var_c_1 = 0
int32_t esi_1
int32_t var_20

if (arg4 - 1 u> 8)
    esi_1 = 0
else
    switch (arg4 + &jump_table_518c14[2]:3)
        case &lookup_table_518c20, &lookup_table_518c20[3], &lookup_table_518c20[6]
            esi_1 = 0
        case &lookup_table_518c20[1], &lookup_table_518c20[4], &lookup_table_518c20[7]
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(var_20)
            esi_1 = neg.d((eax_6 - edx_1) s>> 1)
        case &lookup_table_518c20[2], &lookup_table_518c20[5], &lookup_table_518c20[8]
            esi_1 = neg.d(var_20)
float xmm1_1 = _mm_cvtepi32_ps(zx.o(esi_1))
int32_t edi_1
int32_t var_1c

if (arg4 - 1 u> 8)
    edi_1 = 0
else
    switch (arg4 + &jump_table_518c2c[2]:3)
        case &lookup_table_518c38, &lookup_table_518c38[1], &lookup_table_518c38[2]
            edi_1 = 0
        case &lookup_table_518c38[3], &lookup_table_518c38[4], &lookup_table_518c38[5]
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = sx.q(var_1c)
            edi_1 = neg.d((eax_11 - edx_2) s>> 1)
        case &lookup_table_518c38[6], &lookup_table_518c38[7], &lookup_table_518c38[8]
            edi_1 = neg.d(var_1c)
int32_t var_4c_2 = arg4 - 1
sub_5184e0(arg1, arg2, arg3, xmm1_1, _mm_cvtepi32_ps(zx.o(edi_1)), var_34)
float xmm0_3 = _mm_cvtepi32_ps(zx.o(edi_1))
int32_t* var_48_3 = arg1
int32_t ecx_5 = sub_518950(arg1, arg2, arg3, _mm_cvtepi32_ps(zx.o(esi_1)), xmm0_3)
int32_t var_48_5 = var_30
float var_4c_4 = var_34
float xmm0_5 = _mm_cvtepi32_ps(zx.o(edi_1))
int32_t var_50_1 = ecx_5
int32_t result =
    sub_518a30(arg1, arg2, arg3, _mm_cvtepi32_ps(zx.o(esi_1)), xmm0_5, var_4c_4, var_48_5)
fsbase->NtTib.ExceptionList = ExceptionList
return result
