// 函数: sub_4a11b0
// 地址: 0x4a11b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::COriginPosMode::VTable* const var_14 = &partsengine::COriginPosMode::`vftable'
int32_t esi = *(arg1[0x58] + 0x88)
int32_t var_10 = esi
int32_t var_4 = 0
int32_t edi = (*(*arg1 + 0x28))(1)
int32_t edi_1

if (esi - 1 u> 8)
    edi_1 = 0
else
    switch (esi + &jump_table_4a1264[2]:3)
        case &lookup_table_4a1270, &lookup_table_4a1270[3], &lookup_table_4a1270[6]
            edi_1 = 0
        case &lookup_table_4a1270[1], &lookup_table_4a1270[4], &lookup_table_4a1270[7]
            int32_t eax_8
            int32_t edx_1
            edx_1:eax_8 = sx.q(edi)
            edi_1 = neg.d((eax_8 - edx_1) s>> 1)
        case &lookup_table_4a1270[2], &lookup_table_4a1270[5], &lookup_table_4a1270[8]
            edi_1 = neg.d(edi)

int32_t var_4_1 = 0xffffffff
long double result = fconvert.t(sub_4a1c10(arg1[0x58]) + _mm_cvtepi32_ps(zx.o(edi_1)))
fsbase->NtTib.ExceptionList = ExceptionList
return result
