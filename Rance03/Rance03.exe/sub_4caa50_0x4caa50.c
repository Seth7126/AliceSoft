// 函数: sub_4caa50
// 地址: 0x4caa50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bea90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CIntentData::VTable* const var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_5c = &partsengine::CIntentData::`vftable'
int128_t var_58 = zx.o(0)
int32_t var_4 = 0
int32_t ebp = var_58:4.d
int32_t* edi = var_58.d
void** ebx

if (sub_4e6a30(&var_5c, arg2, arg4) != 0)
    if (var_58:0xc.d != 0 || edi != ebp)
        var_4.b = 1
        void var_40
        int32_t* eax_9
        void* ecx_3
        eax_9, ecx_3 = sub_4ce450(sub_4cd7d0(&var_5c, arg3, &var_40, &var_5c))
        int32_t* var_74_3 = eax_9
        void* var_78_1 = &eax_9[4]
        void** var_48
        sub_4ce500(arg1 + 0x18, &var_48, ecx_3)
        sub_4cab50(&var_40)
    
    ebx.b = 1
else
    ebx.b = 0

if (edi != 0)
    sub_4107c0(edi, ebp)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return ebx.b
