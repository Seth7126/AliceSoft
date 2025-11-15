// 函数: sub_4e7110
// 地址: 0x4e7110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_44
sub_4e3090(arg1 + 0xe4, &var_44)
int32_t var_8_1 = 0
char var_2c
sub_4e3820(arg1 + 0xe4, &var_2c)
var_8_1.b = 1
void* ecx_2 = *(*(arg1 + 0x1f4) + 8)
char eax_4

if (ecx_2 != 0)
    eax_4 = sub_4d62f0(ecx_2, &var_2c)

int32_t result_1

if (ecx_2 == 0 || eax_4 == 0)
    void** eax_8 = &var_44
    
    if (result_1 u>= 0x10)
        eax_8 = var_44
    
    bool eax_9
    int32_t* ecx_12
    eax_9, ecx_12 = sub_44c4e0(eax_8)
    
    if (eax_9 == 0)
        struct 
            common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
            * var_5c =
            &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
        char var_58_1 = 0
        int32_t var_54_1 = 0
        var_8_1.b = 2
        int32_t var_50_1 = *(arg1 + 0xf4)
        int32_t var_4c_1 = *(arg1 + 0xf8)
        int32_t var_48_1 = *(arg1 + 0xfc)
        int32_t (__stdcall* var_54_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
            sub_5194c0
        char var_58_2 = 1
        int32_t var_70_7 = 1
        int32_t var_70_8 = 2
        int32_t var_70_9 = 3
        sub_4e6a30(arg1, sub_4e6a30(arg1, sub_4e6a30(arg1, ecx_12, &var_5c), &var_5c), &var_5c)
    else
        void* esi_4 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
        sub_555e00(esi_4, 0x11, 1)
        sub_547af0(*(esi_4 + 0x80), &var_44, nullptr)
        void* esi_5 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
        sub_555e00(esi_5, 0x11, 2)
        sub_547af0(*(esi_5 + 0x84), &var_44, nullptr)
        void* esi_6 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
        sub_555e00(esi_6, 0x11, 3)
        sub_547af0(*(esi_6 + 0x88), &var_44, nullptr)
else
    void* esi_1 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
    sub_555e00(esi_1, 0x1a, 1)
    sub_4dbf90(*(esi_1 + 0x80), &var_2c)
    void* esi_2 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
    sub_555e00(esi_2, 0x1a, 2)
    sub_4dbf90(*(esi_2 + 0x84), &var_2c)
    void* esi_3 = *(sub_4efcc0(*(arg1 + 0xd8)) + 0x44)
    sub_555e00(esi_3, 0x1a, 3)
    sub_4dbf90(*(esi_3 + 0x88), &var_2c)

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
