// 函数: sub_493380
// 地址: 0x493380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb593
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg2
struct partsengine::ISound::partsengine::CSound::VTable** eax_5 = sub_69adc6(0x30)
struct partsengine::ISound::partsengine::CSound::VTable** var_2c = eax_5
int32_t var_4 = 0
struct partsengine::ISound::partsengine::CSound::VTable** edi

if (eax_5 == 0)
    edi = nullptr
else
    edi = sub_513e50(eax_5, 2, arg3)

int32_t var_4_1 = 0xffffffff
int32_t* eax_7 = sub_4938b0(arg1, arg2)

if (eax_7 != 0)
    (*(*eax_7 + 4))(eax_4)

char* esi_1 = sub_69adc6(0x1c)

if (esi_1 == 0)
    esi_1 = nullptr
else
    *(esi_1 + 0x14) = 0xf
    *(esi_1 + 0x10) = 0
    *esi_1 = 0

void** var_50

if (esi_1 != arg3)
    var_50 = arg3
    sub_401ff0(esi_1, var_50, 0, 0xffffffff)

int32_t var_48_3 = var_30
*(esi_1 + 0x18) = edi
int32_t var_4_2 = 1
char var_28
void* result = sub_4535b0(arg1 + 0x28, sub_487b00(&var_28, var_50))
int32_t var_4_3 = 0xffffffff
*result = esi_1
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0

if (edi != 0)
    result = (*edi)->vFunc_0(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
