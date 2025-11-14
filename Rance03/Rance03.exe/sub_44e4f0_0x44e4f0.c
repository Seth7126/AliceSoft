// 函数: sub_44e4f0
// 地址: 0x44e4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b72dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSactModel::VTable** var_14 = arg1
*arg1 = &chipmunk::CSactModel::`vftable'
int32_t var_4 = 1
sub_44eea0(&arg1[5])
sub_44eea0(&arg1[8])
void* var_10 = &arg1[8]
arg1[8] = &chipmunk::CSpriteList::`vftable'
var_4.b = 2
sub_44eea0(&arg1[8])
int32_t** eax_3 = arg1[9]
sub_4200d0(&arg1[9], &var_10, *eax_3, eax_3)
j__free(arg1[9])
var_10 = &arg1[5]
arg1[5] = &chipmunk::CSpriteList::`vftable'
int32_t var_4_1 = 3
sub_44eea0(&arg1[5])
int32_t** eax_4 = arg1[6]
sub_4200d0(&arg1[6], &var_10, *eax_4, eax_4)
int32_t result = j__free(arg1[6])
fsbase->NtTib.ExceptionList = ExceptionList
return result
