// 函数: sub_549a50
// 地址: 0x549a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4976
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMeshList::VTable** var_14 = arg1
*arg1 = &sealengine::CMeshList::`vftable'
int32_t var_4 = 1
sub_59e430(&arg1[4])

for (int32_t* i = arg1[1]; i != arg1[2]; i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x10))(1)

arg1[2] = arg1[1]
var_4.b = 0
arg1[4] = &sealengine::CWriteVertexList::`vftable'
sub_59e430(&arg1[4])
int32_t** eax_5 = arg1[8]
void var_10
sub_59eaf0(&arg1[8], &var_10, *eax_5, eax_5)
j__free(arg1[8])
sub_52e850(&arg1[5])
int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
