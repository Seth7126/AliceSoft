// 函数: sub_4d71c0
// 地址: 0x4d71c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** var_14 =
    arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_4d7310(arg1)
int32_t* eax_3 = arg1[0x16]
int32_t* var_24 = eax_3
sub_42e2e0(&arg1[0x16], &var_14, *eax_3)
sub_403160(arg1[0x16], 1, 0x18)
int32_t* eax_4 = arg1[0x14]
int32_t* var_24_1 = eax_4
sub_42e2e0(&arg1[0x14], &var_14, *eax_4)
sub_403160(arg1[0x14], 1, 0x18)
int32_t* ecx_2 = arg1[0x11]

if (ecx_2 != 0)
    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** 
        var_24_2 = var_14
    int32_t* var_28_2 = ecx_2
    sub_4ac600(ecx_2, arg1[0x12])
    void* esi_1 = arg1[0x11]
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = muls.dp.d(0x2aaaaaab, arg1[0x13] - esi_1)
    int32_t edx_3 = edx_2 s>> 1
    sub_403160(esi_1, (edx_3 u>> 0x1f) + edx_3, 0xc)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

int32_t eax_9 = arg1[0xe]
void* esi_2 = &arg1[9]

if (eax_9 u>= 0x10)
    sub_403160(*esi_2, eax_9 + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:0 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:0))
    esi_2 = *esi_2

*esi_2 = 0
int32_t eax_11 = arg1[8]

if (eax_11 u>= 0x10)
    eax_11 = sub_403160(arg1[3], eax_11 + 1, 1)

arg1[8] = 0xf
bool cond:1 = arg1[8] u< 0x10
arg1[7] = 0

if (cond:1)
    arg1[3].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

char* eax_13 = arg1[3]
*eax_13 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
