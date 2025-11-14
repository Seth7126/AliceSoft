// 函数: sub_684d60
// 地址: 0x684d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0f8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CWindow::`vftable'
char* eax_3
char ecx
eax_3, ecx = sub_69adc6(0x30)
char* edi = eax_3

if (edi == 0)
    edi = nullptr
else
    _memset(edi, 0, 0x30)

arg1[1] = edi
void* edi_1 = &arg1[4]
int32_t var_4 = 0
arg1[2] = 0
arg1[3].b = 0
*(edi_1 + 0x14) = 0xf
*(edi_1 + 0x10) = 0
*edi_1 = 0
void* eax_4

if (*arg3 != 0)
    char* eax_5 = arg3
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    eax_4 = eax_5 - &eax_5[1]
else
    eax_4 = nullptr

sub_402110(edi_1, arg3, eax_4)
arg1[0xa].b = 0
*(arg1[1] + 0x14) = arg2

if (*(edi_1 + 0x14) u>= 0x10)
    edi_1 = *edi_1

arg1[1][5].vFunc_0 = edi_1
arg1[1][1].vFunc_0 = sub_6850e0
arg1[1]->vFunc_1 = arg4
arg1[1]->vFunc_0 = 0x30
arg1[1][3].vFunc_0 = arg5
*(arg1[1] + 0x2c) = arg6
*(arg1[1] + 0x1c) = arg7
*(arg1[1] + 0x24) = arg8
*(arg1[1] + 0xc) = 0
arg1[1][2].vFunc_0 = 0
arg1[1][4].vFunc_0 = arg9
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
