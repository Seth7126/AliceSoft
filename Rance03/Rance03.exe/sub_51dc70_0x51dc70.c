// 函数: sub_51dc70
// 地址: 0x51dc70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2c38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0x154)
int32_t* i_1 = *eax_5
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x154)
*(eax_6 + 4) = eax_6
*(arg1 + 0x158) = 0

if (i_1 != *(arg1 + 0x154))
    int32_t* i
    
    do
        i = *i_1
        j__free(i_1)
        i_1 = i
    while (i != *(arg1 + 0x154))

int32_t var_4 = 0
struct partsengine::CDecoratedText::VTable* var_6c
sub_51dd80(arg1 + 0xf8, sub_503da0(&var_6c, arg1 + 8, arg1 + 0xdc))
int32_t var_4_1 = 0xffffffff
var_6c = &partsengine::CDecoratedText::`vftable'
int32_t var_14
int32_t var_28

if (var_14 u>= 0x10)
    j__free(var_28)
int32_t* esi_1 = *(arg1 + 0x154)
var_70 = arg1 + 0xf8
int32_t* eax_10 = sub_441d60(esi_1, esi_1[1], &var_70)
int32_t edx = *(arg1 + 0x158)

if (0x15555554 - edx u< 1)
    sub_69a551("list<T> too long")
    noreturn

*(arg1 + 0x158) = edx + 1
esi_1[1] = eax_10
*eax_10[1] = eax_10
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return arg1 + 0x154
