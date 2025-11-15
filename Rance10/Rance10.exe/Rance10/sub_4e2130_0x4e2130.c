// 函数: sub_4e2130
// 地址: 0x4e2130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg1 + 0xa8)
int32_t eax_4 = *(arg1 + 0xac)
int32_t* eax_5 = *(arg1 + 0x208)
void* eax_7 = *(*(arg1 + 0x220) + 8)

if (eax_7 != 0 && sub_4d62f0(eax_7, arg1 + 0x184) != 0)
    void* esi_1 = *(sub_4efcc0(*(arg1 + 0xa0)) + 0x44)
    sub_555e00(esi_1, 0x1a, 1)
    int32_t eax_10 = sub_4dbf90(*(esi_1 + 0x80), arg1 + 0x184)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10

char* eax_11

if (*(arg1 + 0x120) u< 0x10)
    eax_11 = arg1 + 0x10c
else
    eax_11 = *(arg1 + 0x10c)

if (sub_44c4e0(eax_11) != 0)
    int32_t* eax_14 = sub_4e2050(arg1, arg1 + 0x10c, arg1 + 0x1e4, arg1 + 0xc0, 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

int32_t* eax_15 = eax_5

if (eax_15 == 0)
    struct partsengine::IAddConstructionPartsProcess::partsengine::CGUIPlainCG::VTable* const 
        var_38 = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
    char var_34_1 = eax_15.b
    int32_t* var_30_1 = eax_15
    int32_t* var_8_1 = eax_15
    int32_t var_2c_1 = *(arg1 + 0xb4)
    int32_t var_28_1 = *(arg1 + 0xb8)
    int32_t var_24_1 = *(arg1 + 0xbc)
    char var_34_2 = 1
    int32_t (__stdcall* var_30_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_519270
    eax_15 = &var_38

int32_t eax_20 = sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 1, eax_15, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_20
