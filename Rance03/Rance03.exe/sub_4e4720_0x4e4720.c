// 函数: sub_4e4720
// 地址: 0x4e4720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c04c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::COriginPosMode::VTable* const var_14 = &partsengine::COriginPosMode::`vftable'
float var_10 = arg3
int32_t var_4 = 0
int32_t __saved_esi
int32_t ecx = (*(*arg1 + 0x54))(__security_cookie ^ &__saved_esi)
int32_t ecx_1

if (arg3 i- 1 u> 8)
    ecx_1 = 0
else
    switch (arg3 i+ &jump_table_4e47b0[2]:3)
        case &lookup_table_4e47bc, &lookup_table_4e47bc[3], &lookup_table_4e47bc[6]
            ecx_1 = 0
        case &lookup_table_4e47bc[1], &lookup_table_4e47bc[4], &lookup_table_4e47bc[7]
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(ecx)
            ecx_1 = neg.d((eax_7 - edx_1) s>> 1)
        case &lookup_table_4e47bc[2], &lookup_table_4e47bc[5], &lookup_table_4e47bc[8]
            ecx_1 = neg.d(ecx)

long double result = fconvert.t(_mm_cvtepi32_ps(zx.o(ecx_1)) + arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
