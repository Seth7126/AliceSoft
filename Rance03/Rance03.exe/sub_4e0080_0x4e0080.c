// 函数: sub_4e0080
// 地址: 0x4e0080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::COriginPosMode::VTable* const var_14 = &partsengine::COriginPosMode::`vftable'
int32_t esi = *(arg1[0x6b] + 0x88)
int32_t var_10 = esi
int32_t var_4 = 0
int32_t edi = (*(*arg1 + 0x2c))(1)
int32_t edi_1

if (esi - 1 u> 8)
    edi_1 = 0
else
    switch (esi + &jump_table_4e0128[2]:3)
        case &lookup_table_4e0134, &lookup_table_4e0134[1], &lookup_table_4e0134[2]
            edi_1 = 0
        case &lookup_table_4e0134[3], &lookup_table_4e0134[4], &lookup_table_4e0134[5]
            int32_t eax_8
            int32_t edx_1
            edx_1:eax_8 = sx.q(edi)
            edi_1 = neg.d((eax_8 - edx_1) s>> 1)
        case &lookup_table_4e0134[6], &lookup_table_4e0134[7], &lookup_table_4e0134[8]
            edi_1 = neg.d(edi)

int32_t var_4_1 = 0xffffffff
int32_t result
float xmm0
result, xmm0 = sub_4a1cf0(arg1[0x6b])
_mm_cvtepi32_ps(zx.o(edi_1))
fsbase->NtTib.ExceptionList = ExceptionList
return result
