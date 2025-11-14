// 函数: sub_549990
// 地址: 0x549990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4936
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMeshList::VTable** var_14 = arg1
*arg1 = &sealengine::CMeshList::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[4] = &sealengine::CWriteVertexList::`vftable'
void* var_10 = &arg1[4]
__builtin_memset(&arg1[5], 0, 0x14)
var_4.b = 1
arg1[8] = sub_418350()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
