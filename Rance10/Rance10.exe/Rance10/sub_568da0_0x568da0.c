// 函数: sub_568da0
// 地址: 0x568da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x64)
void* esi = arg1 + 0x50

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
int32_t* ecx = *(arg1 + 0x44)

if (ecx != 0)
    void* var_24_1 = arg1
    int32_t* var_28_2 = ecx
    sub_568960(ecx, *(arg1 + 0x48))
    void* ecx_1 = *(arg1 + 0x44)
    sub_403160(ecx_1, (*(arg1 + 0x4c) - ecx_1) s>> 3, 8)
    *(arg1 + 0x44) = 0
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = 0

void* ecx_2 = *(arg1 + 0x38)

if (ecx_2 != 0)
    void* var_24_2 = arg1
    void* var_28_3 = ecx_2
    Concurrency::details::Etw::Etw(ecx_2, *(arg1 + 0x3c))
    void* ecx_3 = *(arg1 + 0x38)
    sub_403160(ecx_3, (*(arg1 + 0x40) - ecx_3) s>> 3, 8)
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0

__seterrormode(arg1 + 0x34)
int32_t var_8_1 = 0
int32_t* ecx_4 = *(arg1 + 0x30)

if (ecx_4 != 0)
    *(arg1 + 0x30) = 0
    (*(*ecx_4 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x34)
void* ecx_5 = *(arg1 + 0x20)

if (ecx_5 != 0)
    result = sub_403160(ecx_5, (*(arg1 + 0x28) - ecx_5) s>> 3, 8)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

void* esi_2 = *(arg1 + 0x14)

if (esi_2 != 0)
    int32_t eax_15
    int32_t edx_3
    edx_3:eax_15 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1c) - esi_2)
    int32_t edx_4 = edx_3 s>> 1
    result = sub_403160(esi_2, (edx_4 u>> 0x1f) + edx_4, 0xc)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
