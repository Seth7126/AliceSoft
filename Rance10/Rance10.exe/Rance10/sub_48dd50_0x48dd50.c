// 函数: sub_48dd50
// 地址: 0x48dd50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiCombFilterProcess::VTable*
    * edi = arg1
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiCombFilterProcess::VTable*
    * var_14 = edi
*edi = &kiwi::CMultiCombFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
int32_t* esi = edi[2]
int32_t ebx = 0
uint32_t ecx_3 = (edi[3] - esi + 3) u>> 2

if (esi u> edi[3])
    ecx_3 = 0

if (ecx_3 != 0)
    do
        result = (*(**esi + 4))(eax_2)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_3)
    
    edi = var_14

int32_t* esi_1 = edi[5]
int32_t ebx_1 = 0
uint32_t ecx_8 = (edi[6] - esi_1 + 3) u>> 2

if (esi_1 u> edi[6])
    ecx_8 = 0

uint32_t var_18 = ecx_8

if (ecx_8 != 0)
    do
        result = (*(**esi_1 + 4))(eax_2)
        ebx_1 += 1
        esi_1 = &esi_1[1]
    while (ebx_1 != ecx_8)
    
    edi = var_14

void* ecx_10 = edi[5]

if (ecx_10 != 0)
    result = sub_403160(ecx_10, (edi[7] - ecx_10) s>> 2, 4)
    edi[5] = 0
    edi[6] = 0
    edi[7] = 0

void* ecx_11 = edi[2]

if (ecx_11 != 0)
    result = sub_403160(ecx_11, (edi[4] - ecx_11) s>> 2, 4)
    edi[2] = 0
    edi[3] = 0
    edi[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
