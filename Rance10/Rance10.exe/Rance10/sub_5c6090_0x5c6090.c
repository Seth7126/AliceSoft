// 函数: sub_5c6090
// 地址: 0x5c6090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx_1 = sub_4068c0(*arg1)
int32_t* var_28 = var_14
int32_t var_2c = ecx_1
Concurrency::details::Etw::Etw(arg1[1], arg1[2])
arg1[2] = arg1[1]
sub_563e10(&arg1[0x67])
sub_4068c0(*arg1)
sub_5c6020(&arg1[0x67])
void* ecx_6 = arg1[0x64]

if (ecx_6 != 0)
    sub_403160(ecx_6, (arg1[0x66] - ecx_6) s>> 2, 4)
    arg1[0x64] = 0
    arg1[0x65] = 0
    arg1[0x66] = 0

int32_t var_8_1 = 0
int32_t* esi = arg1[0x63]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        int32_t ebx_1 = esi[2]
        esi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi + 4))()

int32_t* eax_10 = arg1[0x4e]
int32_t* var_28_1 = eax_10
sub_42e2e0(&arg1[0x4e], &var_14, *eax_10)
sub_403160(arg1[0x4e], 1, 0x18)
arg1[0x2d] = &common::CRect::`vftable'
arg1[0x31] = &common::CSize::`vftable'
arg1[0x2e] = &common::CPoint::`vftable'
int32_t result = sub_5c5ee0(&arg1[0x10])
void* ecx_11 = arg1[1]

if (ecx_11 != 0)
    int32_t* var_28_2 = var_14
    void* var_2c_3 = ecx_11
    Concurrency::details::Etw::Etw(ecx_11, arg1[2])
    void* ecx_12 = arg1[1]
    result = sub_403160(ecx_12, (arg1[3] - ecx_12) s>> 3, 8)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
