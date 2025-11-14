// 函数: sub_4a9490
// 地址: 0x4a9490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bccb2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIEngine::VTable** esi = arg1
var_10 = esi
*esi = &partsengine::CGUIEngine::`vftable'
int32_t var_4 = 4
int32_t* ecx = esi[0x7d]

if (ecx != 0)
    (**ecx)(1)

esi[0x7d] = 0
var_4.b = 3
sub_4d6000(&esi[0x1d])
var_4.b = 2
esi[0x16] = &partsengine::CLLPartsFactory::`vftable'
sub_4817f0(&esi[0x19])
var_4.b = 1
void* ecx_3 = data_75d4e4
esi[0x15] = &partsengine::CSoundManager::`vftable'
void* eax_4 = *(ecx_3 + 0x93c)

if (eax_4 != 0)
    int32_t var_1c_1 = 2
    sub_46eb70(eax_4 + 0x94)
    ecx_3 = data_75d4e4

void* ecx_5 = *(ecx_3 + 0x93c)

if (ecx_5 != 0)
    int32_t var_1c_2 = 3
    sub_46eb70(ecx_5 + 0x94)

var_4.b = 0
sub_4e5770(&esi[6])
var_10 = &esi[1]
esi[1] = &partsengine::CFlatEngine::`vftable'
int32_t var_4_1 = 5
sub_48c900(&esi[1])
int32_t** eax_5 = esi[4]
sub_417e10(&esi[4], &var_10, *eax_5, eax_5)
int32_t result = j__free(esi[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
