// 函数: sub_4aa0c0
// 地址: 0x4aa0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[7]
*arg1 = &partsengine::CConstructionThreadSurface::`vftable'{for `common::SuicideRefCounter<class ISurface>'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[7] = 0

arg1[3] = &partsengine::CConstructionProcessList::`vftable'
int32_t ebx = arg1[5]

for (int32_t* i = arg1[4]; i != ebx; i = &i[0x32])
    (**i)(0)

arg1[5] = arg1[4]
int32_t result = sub_4aa320(&arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
