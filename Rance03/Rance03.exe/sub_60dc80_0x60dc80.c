// 函数: sub_60dc80
// 地址: 0x60dc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd2e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CGraphicsObjectManager<class graphengined3d11::CPixelShader, class IInterface>::VTable
    ** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengine::CGraphicsObjectManager<class graphengined3d11::CPixelShader, class IInterface>::`vftable'
int32_t var_4 = 1
sub_60d670(arg1)
int32_t** eax_3 = arg1[4]
sub_4200d0(&arg1[4], &var_10, *eax_3, eax_3)
j__free(arg1[4])
int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
