// 函数: sub_581870
// 地址: 0x581870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d3b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK* edi = arg1
sub_581bd0(arg1)
struct _RTL_SRWLOCK ecx = edi

if (ecx != 0)
    sub_403160(ecx, (edi - ecx) s>> 5, 0x20)
    edi = 0

int32_t var_8_1 = 0
int32_t* esi = edi

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        bool cond:1_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:1_1))
            (*(*esi + 4))()

struct _RTL_SRWLOCK eax_10 = edi

if (eax_10 != 0)
    int32_t var_24_1 = 0xa4
    operator new(eax_10)

void* esi_1 = &edi[0x83]
__seterrormode(esi_1)
int32_t var_8_2 = 1
int32_t* ecx_3 = edi

if (ecx_3 != 0)
    edi = 0
    (*(*ecx_3 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(esi_1)
void* esi_2 = &edi[0x80]
__seterrormode(esi_2)
int32_t var_8_3 = 2
int32_t* ecx_4 = edi

if (ecx_4 != 0)
    edi = 0
    int32_t ebx_1 = ecx_4[1]
    ecx_4[1] -= 1
    (**ecx_4)(ebx_1 - 1)

___crtSetUnhandledExceptionFilter(esi_2)
struct _RTL_SRWLOCK ecx_5 = edi

if (ecx_5 != 0)
    sub_403160(ecx_5, (edi - ecx_5) s>> 2, 4)
    edi = 0

struct _RTL_SRWLOCK eax_17 = edi
void* esi_3 = &edi[0x73]

if (eax_17 u>= 0x10)
    sub_403160(*esi_3, eax_17 + 1, 1)

*(esi_3 + 0x14) = 0xf
bool cond:2 = *(esi_3 + 0x14) u< 0x10
*(esi_3 + 0x10) = 0

if (not(cond:2))
    esi_3 = *esi_3

*esi_3 = 0
void* esi_4 = &edi[0x6d]
int32_t eax_19 = *(esi_4 + 0x14)

if (eax_19 u>= 0x10)
    sub_403160(*esi_4, eax_19 + 1, 1)

*(esi_4 + 0x14) = 0xf
bool cond:3 = *(esi_4 + 0x14) u< 0x10
*(esi_4 + 0x10) = 0

if (not(cond:3))
    esi_4 = *esi_4

*esi_4 = 0
int32_t* esi_5 = edi

if (esi_5 != 0)
    sub_586a00(esi_5)
    int32_t var_24_6 = 0x24
    operator new(esi_5)

int32_t* esi_6 = edi

if (esi_6 != 0)
    sub_586a00(esi_6)
    int32_t var_24_7 = 0x24
    operator new(esi_6)

sub_581770(&edi[0x48])
struct _RTL_SRWLOCK ecx_9 = edi

if (ecx_9 != 0)
    sub_403160(ecx_9, (edi - ecx_9) s>> 2, 4)
    edi = 0

struct _RTL_SRWLOCK ecx_10 = edi

if (ecx_10 != 0)
    sub_403160(ecx_10, (edi - ecx_10) s>> 3, 8)
    edi = 0

struct _RTL_SRWLOCK esi_7 = edi

if (esi_7 != 0)
    sub_403160(esi_7, (edi - esi_7) s/ 0xc, 0xc)

edi = &thread::CCriticalSection::`vftable'
struct _RTL_SRWLOCK ecx_13 = edi

if (ecx_13 != 0)
    (**ecx_13)(1)

struct _RTL_SRWLOCK eax_33 = edi

if (eax_33 u>= 0x10)
    eax_33 = sub_403160(edi, eax_33 + 1, 1)

edi = 0

if (0xf u< 0x10)
    edi->__offset(0x4).b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_33

struct _RTL_SRWLOCK eax_34 = edi
*eax_34 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_34
