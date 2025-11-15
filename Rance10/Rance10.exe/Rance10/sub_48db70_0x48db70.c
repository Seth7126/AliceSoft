// 函数: sub_48db70
// 地址: 0x48db70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f346
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiCombFilterProcess::VTable*
    * ebx = arg1
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiCombFilterProcess::VTable*
    * var_18 = ebx
ebx[1] = 1
*ebx = &kiwi::CMultiCombFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
ebx[2] = 0
ebx[3] = 0
ebx[4] = 0
void* eax_4 = &ebx[5]
int32_t var_8_1 = 0
*eax_4 = 0
*(eax_4 + 4) = 0
*(eax_4 + 8) = 0
var_8_1.b = 1
void* arg_4
int32_t* edi = arg_4
int32_t* esi = *edi
int32_t edi_1 = edi[1]

if (esi != edi_1)
    do
        void* eax_5 = sub_6e810c(0x2c)
        arg_4 = eax_5
        int32_t ecx = *esi
        *(eax_5 + 4) = 1
        *(eax_5 + 0xc) = arg2
        *(eax_5 + 8) = ecx
        *eax_5 = &kiwi::CCombFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
        *(eax_5 + 0x10) = arg4
        __builtin_memset(eax_5 + 0x14, 0, 0x18)
        arg_4 = eax_5
        sub_428f00(&ebx[2], &arg_4)
        esi = &esi[1]
    while (esi != edi_1)
    
    ebx = var_18

int32_t* esi_1 = *arg3
int32_t edi_3 = arg3[1]

if (esi_1 == edi_3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx

do
    void* eax_6 = sub_6e810c(0x2c)
    arg_4 = eax_6
    int32_t ecx_2 = *esi_1
    *(eax_6 + 4) = 1
    *(eax_6 + 0xc) = arg2
    *(eax_6 + 8) = ecx_2
    *eax_6 = &kiwi::CCombFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
    *(eax_6 + 0x10) = arg4
    __builtin_memset(eax_6 + 0x14, 0, 0x18)
    arg_4 = eax_6
    sub_428f00(eax_4, &arg_4)
    esi_1 = &esi_1[1]
while (esi_1 != edi_3)

fsbase->NtTib.ExceptionList = ExceptionList
return var_18
