// 函数: sub_522760
// 地址: 0x522760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2ea1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CDXSpriteList::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &chipmunk::CDXSpriteList::`vftable'
int32_t var_4 = 2
sub_522820(arg1)
int32_t eax_3 = arg1[6]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t eax_4 = arg1[3]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t** eax_5 = arg1[1]
sub_4200d0(&arg1[1], &var_10, *eax_5, eax_5)
int32_t result = j__free(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
