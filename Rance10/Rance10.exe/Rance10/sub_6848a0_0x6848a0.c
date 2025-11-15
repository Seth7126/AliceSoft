// 函数: sub_6848a0
// 地址: 0x6848a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746e60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
struct graphengined3d11::CBlendState::VTable** eax_3
int32_t ecx
eax_3, ecx = sub_4cb3e0(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
struct graphengined3d11::CBlendState::VTable** var_1c = eax_3
int32_t var_3c = ecx
xcf5fba64::_Boost_call<class <lambda_369c2d7dd3dd31cfc9a4bef795680852> >::operator[]::_Boost_call<class <lambda_369c2d7dd3dd31cfc9a4bef795680852> >(
    eax_3, arg1[1], *arg1, eax_3)
int32_t eax_4 = arg1[1]
void* i = *arg1
char var_18
var_18.d = eax_4
int32_t ecx_4 = (eax_4 - i) s>> 3

if (i != 0)
    if (i != eax_4)
        do
            (**i)(0)
            i += 8
        while (i != var_18.d)
    
    void* ecx_6 = *arg1
    sub_403160(ecx_6, (arg1[2] - ecx_6) s>> 3, 8)

arg1[2] = &eax_3[arg2 * 2]
void* result = &eax_3[ecx_4 * 2]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
