// 函数: sub_46db90
// 地址: 0x46db90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x27]
*arg1 = &exfile::CDefineData::`vftable'

if (ecx != 0)
    (*(*ecx + 0x30))(1)

arg1[0x27] = 0
sub_45fc30(&arg1[0x17])
sub_45f640(&arg1[0x23])
int32_t var_8_1 = 0
arg1[0x23] = &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
sub_45f640(&arg1[0x23])
void* edx = arg1[0x24]

if (edx != 0)
    sub_403160(edx, (arg1[0x26] - edx) s>> 2, 4)
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

sub_45fb30(&arg1[0x17])
int32_t eax_7 = arg1[0x16]
void* edi_1 = &arg1[0x11]

if (eax_7 u>= 0x10)
    sub_403160(*edi_1, eax_7 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:0 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:0))
    edi_1 = *edi_1

*edi_1 = 0
void* edi_2 = &arg1[7]
int32_t eax_9 = *(edi_2 + 0x14)

if (eax_9 u>= 0x10)
    sub_403160(*edi_2, eax_9 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:1 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:1))
    edi_2 = *edi_2

*edi_2 = 0
int32_t eax_11 = arg1[6]

if (eax_11 u>= 0x10)
    eax_11 = sub_403160(arg1[1], eax_11 + 1, 1)

arg1[6] = 0xf
bool cond:2 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:2)
    arg1[1].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

char* eax_13 = arg1[1]
*eax_13 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
