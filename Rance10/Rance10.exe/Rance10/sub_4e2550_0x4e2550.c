// 函数: sub_4e2550
// 地址: 0x4e2550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734ee8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg1 + 0xa8)
void* ecx = arg1 + 0x154
int32_t eax_4 = *(arg1 + 0xac)
int32_t* eax_5 = *(arg1 + 0x214)
void* eax_7 = *(*(arg1 + 0x220) + 8)

if (eax_7 != 0)
    if (sub_4d62f0(eax_7, arg1 + 0x1cc) != 0)
        void* esi_1 = *(sub_4efcc0(*(arg1 + 0xa0)) + 0x44)
        sub_555e00(esi_1, 0x1a, 1)
        sub_4dbf90(*(esi_1 + 0x80), arg1 + 0x1cc)
        void* esi_2 = *(sub_4efcc0(*(arg1 + 0xa0)) + 0x44)
        sub_555e00(esi_2, 0x1a, 2)
        sub_4dbf90(*(esi_2 + 0x84), arg1 + 0x1cc)
        void* esi_3 = *(sub_4efcc0(*(arg1 + 0xa0)) + 0x44)
        sub_555e00(esi_3, 0x1a, 3)
        int32_t eax_12 = sub_4dbf90(*(esi_3 + 0x88), arg1 + 0x1cc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    ecx = arg1 + 0x154

if (*(ecx + 0x14) u>= 0x10)
    ecx = *ecx

if (sub_44c4e0(ecx) != 0)
    sub_4e2050(arg1, arg1 + 0x154, arg1 + 0x1e4, arg1 + 0xc0, 1)
    sub_4e2050(arg1, arg1 + 0x154, arg1 + 0x1e4, arg1 + 0xc0, 2)
    int32_t* eax_17 = sub_4e2050(arg1, arg1 + 0x154, arg1 + 0x1e4, arg1 + 0xc0, 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17

int32_t* var_4c_5

if (eax_5 == 0)
    struct partsengine::IAddConstructionPartsProcess::partsengine::CGUIPlainCG::VTable* const 
        var_34 = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
    char var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_8_1 = 0
    int32_t var_28_1 = *(arg1 + 0xb4)
    int32_t var_24_1 = *(arg1 + 0xb8)
    int32_t var_20_1 = *(arg1 + 0xbc)
    char var_30_2 = 1
    int32_t (__stdcall* var_2c_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_5194c0
    sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 0, &var_34, 1)
    sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 0, &var_34, 2)
    int32_t var_48_7 = 3
    var_4c_5 = &var_34
else
    sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 0, eax_5, 1)
    sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 0, eax_5, 2)
    int32_t var_48_6 = 3
    var_4c_5 = eax_5

int32_t eax_22 = sub_4e1f20(arg1, arg1 + 0x1e4, eax_3, eax_4, arg1 + 0xc0, 0, var_4c_5, 3)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
