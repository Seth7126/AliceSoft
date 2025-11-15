// 函数: sub_522030
// 地址: 0x522030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739320
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_1 = *(arg1 + 0x110) - *(arg1 + 0x114)
int32_t var_4c
int32_t* eax_3 = &var_4c
void* esi = *(arg1 + 0xac)
int32_t edi = *(arg1 + 0x10c)
int32_t var_50

if (edx_1 s<= 0)
    eax_3 = &var_50

var_4c = edx_1
var_50 = 0
bool var_45 = *eax_3 != 0
sub_4eec50(esi, nullptr, 1)
void* esi_1 = *(esi + 0x74)
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_4

if (edi != 0)
    int32_t ecx_1
    
    if (*(arg1 + 0xc) == 0)
        eax_4 = *(arg1 + 0x104)
        ecx_1 = *(arg1 + 0x10c)
    else
        eax_4 = *(arg1 + 0x10c)
        ecx_1 = *(arg1 + 0x104)
    
    if (*(esi_1 + 0xa8) != ecx_1 || *(esi_1 + 0xac) != eax_4)
        *(esi_1 + 0x218) = 1
        *(esi_1 + 0xac) = eax_4
        *(esi_1 + 0xa8) = ecx_1

eax_4.b = var_45

if (*(esi_1 + 0xb0) != eax_4.b)
    *(esi_1 + 0xb0) = eax_4.b
    *(esi_1 + 0x218) = 1

int32_t var_8_1 = 0
void* var_2c
sub_4df830(esi_1 + 0xa4, sub_4f8120(arg1 + 0xcc, &var_2c))
int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

int32_t var_8_3 = 1
void* var_44
sub_4dfb40(esi_1 + 0xa4, sub_4f88f0(arg1 + 0xcc, &var_44))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

*(esi_1 + 0x218) = 1
*(esi_1 + 0x208) = arg1 + 0x28c
*(esi_1 + 0x20c) = arg1 + 0x2a4
*(esi_1 + 0x218) = 1
*(esi_1 + 0x210) = arg1 + 0x2bc
*(esi_1 + 0x218) = 1
*(esi_1 + 0x214) = arg1 + 0x2d4
*(esi_1 + 0x218) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1 + 0x2d4
