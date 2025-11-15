// 函数: ?GrowAndPush@?$StructuredWorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@AAEXPAV_UnrealizedChore@23@VSlot@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@23@@Z
// 地址: 0x6f94ad
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x24
int32_t (* var_c)(void* arg1) = sub_74ae8f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
void* const var_48_4 = &data_6f94b9
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* var_28 = edi
int32_t var_48 = 4
void* ebx = (edi[2] << 1) + 2
int32_t ecx
ecx.b = mulu.dp.d(ebx, 4) u>> 0x20 != 0
int32_t var_48_1 = neg.d(ecx) | (ebx * 4)
int32_t eax_3 = sub_6e8787()
int32_t eax_4 = edi[3]
int32_t var_4c = 8
void* var_34 = ebx
int32_t ecx_3
ecx_3.b = mulu.dp.d(ebx, 8) u>> 0x20 != 0
int32_t var_4c_1 = neg.d(ecx_3) | (ebx * 8)
int32_t eax_7 = sub_6e8787()
int32_t var_20 = eax_7
int32_t var_2c = eax_7
int32_t var_8 = 0

if (eax_7 == 0)
    var_20 = 0
else
    sub_448310(eax_7, 8, ebx, 
        std::_Iterator012<struct std::random_access_iterator_tag,wchar_t,int32_t,wchar_t const*,wchar_t const&,struct std::_Iterator_base12>::_Iterator012<struct std::random_access_iterator_tag,wchar_t,int32_t,wchar_t const*,wchar_t const&,struct std::_Iterator_base12>)

int32_t* esi = edi[5]
int32_t eax_8 = edi[4]
int32_t var_8_1 = 0xffffffff
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(esi)
int32_t edx = 0
int32_t eax_9 = *edi
int32_t ebx_2 = edi[1] - *edi
int32_t var_18 = eax_9
int32_t var_14 = 0

if (ebx_2 s> 0)
    do
        *(eax_3 + (edx << 2)) = *(edi[3] + ((eax_9 & edi[2]) << 2))
        int32_t ecx_11 = edi[4]
        int32_t edx_2 = var_18 & edi[2]
        *(var_20 + (var_14 << 3)) = *(ecx_11 + (edx_2 << 3))
        edi = var_28
        *(var_20 + (var_14 << 3) + 4) = *(ecx_11 + (edx_2 << 3) + 4)
        edx = var_14 + 1
        eax_9 = var_18 + 1
        var_14 = edx
        var_18 = eax_9
    while (edx s< ebx_2)

_memset(eax_3 + (ebx_2 << 2), 0, (ebx - ebx_2) << 2)
edi[3] = eax_3
edi[4] = var_20
*edi = 0
edi[2] = ebx - 1
int32_t edx_8

if (arg3 == 0)
    edx_8 = arg2
else
    int32_t ecx_12 = edi[4]
    void* edx_6 = (ebx - 1) & ebx_2
    *(ecx_12 + (edx_6 << 3)) = arg3
    *(ecx_12 + (edx_6 << 3) + 4) = arg4
    edx_8 = arg2 | 1

*(edi[3] + ((ebx_2 & edi[2]) << 2)) = edx_8
edi[1] = ebx_2 + 1
int32_t var_8_2 = 1
sub_6eb703(esi)
_free(eax_4)
int32_t result = _free(eax_8)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f9622
return result
