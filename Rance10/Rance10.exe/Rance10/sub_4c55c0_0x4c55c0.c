// 函数: sub_4c55c0
// 地址: 0x4c55c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CConstructionSurfaceMaker::`vftable'
sub_4063f0(&arg1[1])
EnterCriticalSection(&arg1[0xf][1])
int32_t edi = arg1[0x11]

for (int32_t* i = arg1[0x10]; i != edi; i = &i[2])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    (*(*i[1] + 4))(eax_2)

arg1[0x11] = arg1[0x10]
LeaveCriticalSection(&arg1[0xf][1])
void* ecx_3 = arg1[0x10]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[0x12] - ecx_3) s>> 3, 8)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

arg1[0xe] = &thread::CCriticalSection::`vftable'
int32_t* ecx_4 = arg1[0xf]

if (ecx_4 != 0)
    (**ecx_4)(1)

int32_t result = sub_406310(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
