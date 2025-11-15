// 函数: sub_67be40
// 地址: 0x67be40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = arg1[0x10]
*arg1 = &crayfish::CCrayfishLogViewer::`vftable'
int32_t* esi = *(eax_3 + 0x14)

if (*esi != 0)
    HWND hWnd = *esi
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *esi = 0

int32_t* ecx = arg1[0x10]

if (ecx != 0)
    (*(*ecx + 4))(1)
    arg1[0x10] = 0

int32_t eax_6 = arg1[0x16]
void* esi_1 = &arg1[0x11]

if (eax_6 u>= 0x10)
    sub_403160(*esi_1, eax_6 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:0 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:0))
    esi_1 = *esi_1

*esi_1 = 0
void* esi_2 = &arg1[0xa]
int32_t eax_8 = *(esi_2 + 0x14)

if (eax_8 u>= 0x10)
    sub_403160(*esi_2, eax_8 + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:1 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:1))
    esi_2 = *esi_2

*esi_2 = 0
arg1[5] = &crayfish::CLogList::`vftable'
int32_t result = sub_67c2c0(&arg1[5])
void* ecx_2 = arg1[6]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[8] - ecx_2) s>> 2, 4)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

arg1[3] = &crayfish::CCrayfishSetting::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
