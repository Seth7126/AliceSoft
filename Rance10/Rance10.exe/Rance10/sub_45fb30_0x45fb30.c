// 函数: sub_45fb30
// 地址: 0x45fb30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEXTableReader::exfile::CDefineDataTable::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &exfile::CDefineDataTable::`vftable'{for `IEXTableReader'}
sub_45fc30(arg1)
int32_t* eax_3 = arg1[0xa]
int32_t* var_24 = eax_3
sub_456ff0(&arg1[0xa], &var_14, *eax_3)
sub_403160(arg1[0xa], 1, 0x2c)
int32_t* eax_4 = arg1[8]
int32_t* var_24_1 = eax_4
sub_4602e0(&arg1[8], &var_14, *eax_4)
sub_403160(arg1[8], 1, 0x18)
void* ecx_2 = arg1[5]

if (ecx_2 != 0)
    sub_403160(ecx_2, (arg1[7] - ecx_2) s>> 2, 4)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t var_8_1 = 0
arg1[1] = &exfile::CFormatDataList::`vftable'
int32_t result = sub_45f640(&arg1[1])
void* ecx_4 = arg1[2]

if (ecx_4 != 0)
    result = sub_403160(ecx_4, (arg1[4] - ecx_4) s>> 2, 4)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
