// 函数: sub_5bd0e0
// 地址: 0x5bd0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c16c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5bdfb0(&arg1[0x12])
int32_t var_8_1 = 0
int32_t* edi = arg1[0x10]

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (**edi)(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 4))()

int32_t var_8_2 = 1
int32_t* edi_1 = arg1[0xe]

if (edi_1 != 0)
    bool cond:1_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:1_1))
        (**edi_1)(eax_2)
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_1 + 4))()

void* ecx_5 = arg1[0xa]

if (ecx_5 != 0)
    int32_t* var_28_1 = arg1
    void* var_2c_1 = ecx_5
    Concurrency::details::Etw::Etw(ecx_5, arg1[0xb])
    void* ecx_6 = arg1[0xa]
    sub_403160(ecx_6, (arg1[0xc] - ecx_6) s>> 3, 8)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

sub_5b47d0(&arg1[7])
int32_t eax_13 = arg1[5]

if (eax_13 u>= 0x10)
    eax_13 = sub_403160(*arg1, eax_13 + 1, 1)

arg1[5] = 0xf
bool cond:3 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:3)
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_13

char* eax_15 = *arg1
*eax_15 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
