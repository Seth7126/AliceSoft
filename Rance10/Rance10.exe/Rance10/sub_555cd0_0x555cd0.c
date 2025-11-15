// 函数: sub_555cd0
// 地址: 0x555cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ac46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x1d]
*arg1 = &partsengine::CLLParts::`vftable'{for `common::SuicideRefCounter<class IInterface>'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x1d] = 0

int32_t* ecx_1 = arg1[0x1e]

if (ecx_1 != 0)
    ecx_1 = (*(*ecx_1 + 4))(eax_2)
    arg1[0x1e] = 0

void* esi = &arg1[0x1f]
int32_t ebx = 0
int32_t ecx_4 = (sbb.d(ecx_1, ecx_1, esi + 0x10 u< esi) & 0xfffffffc) + 4

if (esi u<= esi + 0x10)
    do
        (*(**esi + 4))(eax_2)
        ebx += 1
        *esi = 0
        esi += 4
    while (ebx != ecx_4)

int32_t var_8_1 = 0
int32_t result = `eh vector vbase constructor iterator'(&arg1[3], 0x18, 4, sub_403320)
fsbase->NtTib.ExceptionList = ExceptionList
return result
