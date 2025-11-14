// 函数: sub_5ff850
// 地址: 0x5ff850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc64c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct crayfish::CCrayfishLogViewer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CCrayfishLogViewer::VTable** var_10_1 = arg1
*arg1 = &crayfish::CCrayfishLogViewer::`vftable'
int32_t var_4 = 3
int32_t* vFunc_0 = arg1[0x10][5].vFunc_0

if (*vFunc_0 != 0)
    HWND hWnd = *vFunc_0
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *vFunc_0 = 0

int32_t* ecx = arg1[0x10]

if (ecx != 0)
    (*(*ecx + 4))(1)
    arg1[0x10] = 0

if (arg1[0x16] u>= 0x10)
    j__free(arg1[0x11])

arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0

if (arg1[0xf] u>= 0x10)
    j__free(arg1[0xa])

arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
var_4.b = 0
int32_t result = sub_5ffbc0(&arg1[5])
arg1[3] = &crayfish::CCrayfishSetting::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
