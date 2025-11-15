// 函数: sub_496c80
// 地址: 0x496c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fe6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x74]
*arg1 = &mainsystem::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &mainsystem::CMainSystem::`vftable'{for `IInitMainSystem'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x74] = 0

int32_t* ecx_1 = arg1[0x4a]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x4a] = 0

sub_498d10(&arg1[0x7d])
arg1[0x7a] = &mainsystem::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x76] = &mainsystem::CSetCallback::`vftable'{for `ISetCallback'}
void* ecx_3 = arg1[0x77]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[0x79] - ecx_3) s>> 2, 4)
    arg1[0x77] = 0
    arg1[0x78] = 0
    arg1[0x79] = 0

int32_t var_8_1 = 0
int32_t* ecx_4 = arg1[0x75]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    arg1[0x75] = 0

int32_t* ecx_5 = data_7fcbb8

if (ecx_5 != 0)
    ecx_5 = (*(*ecx_5 + 4))(eax_2)
    data_7fcbb8 = 0

int32_t var_8_2 = 1
arg1[0x73] = &mainsystem::CComponentManager::`vftable'
sub_495c70(ecx_5)
void* edi = &arg1[0x6c]
arg1[0x72] = &mainsystem::CEXFile::`vftable'
int32_t eax_10 = *(edi + 0x14)

if (eax_10 u>= 0x10)
    sub_403160(*edi, eax_10 + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
arg1[0x68] = &mainsystem::CLoadDLL::`vftable'
sub_4969c0(&arg1[0x68])
void* ecx_7 = arg1[0x69]

if (ecx_7 != 0)
    sub_403160(ecx_7, (arg1[0x6b] - ecx_7) s>> 2, 4)
    arg1[0x69] = 0
    arg1[0x6a] = 0
    arg1[0x6b] = 0

int32_t eax_15 = arg1[0x67]
void* edi_2 = &arg1[0x62]

if (eax_15 u>= 0x10)
    sub_403160(*edi_2, eax_15 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:1 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:1))
    edi_2 = *edi_2

*edi_2 = 0
arg1[0x60] = &mainsystem::CIDEWnd::`vftable'{for `IIDEWnd'}
sub_498740(&arg1[0x4d])
arg1[0x4b] = &mainsystem::CTimer::`vftable'{for `ITimer'}
sub_454d70(&arg1[0x34])
sub_6c5a30(&arg1[6])
BOOL hObject = arg1[3]
arg1[2] = &win32only::CDualBoot::`vftable'

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
