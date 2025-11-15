// 函数: sub_4c2800
// 地址: 0x4c2800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CComponentSet::`vftable'{for `partsengine::IEventObserver'}
int32_t* esi = arg1[0xe]
int32_t ebx = 0
uint32_t ecx_3 = (arg1[0xf] - esi + 3) u>> 2

if (esi u> arg1[0xf])
    ecx_3 = 0

if (ecx_3 != 0)
    do
        (*(**esi + 4))(eax_2)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_3)

void* ecx_5 = arg1[0x12]

if (ecx_5 != 0)
    sub_403160(ecx_5, (arg1[0x14] - ecx_5) s>> 2, 4)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

void* ecx_6 = arg1[0xe]

if (ecx_6 != 0)
    sub_403160(ecx_6, (arg1[0x10] - ecx_6) s>> 2, 4)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

arg1[1] = &partsengine::CEventSubject::`vftable'
int32_t result = arg1[2]
arg1[3] = result
void* ecx_7 = arg1[2]

if (ecx_7 != 0)
    result = sub_403160(ecx_7, (arg1[4] - ecx_7) s>> 2, 4)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
