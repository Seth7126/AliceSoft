// 函数: sub_688300
// 地址: 0x688300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexShader, class IInterface>::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexShader, class IInterface>::`vftable'
sub_6881c0(arg1)
int32_t** eax_3 = arg1[4]
sub_4f27c0(&arg1[4], &var_14, *eax_3, eax_3)
int32_t result = sub_403160(arg1[4], 1, 0x14)
void* ecx_1 = arg1[1]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[3] - ecx_1) s>> 2, 4)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
