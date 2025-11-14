// 函数: sub_686580
// 地址: 0x686580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HINSTANCE ebp
HINSTANCE var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6d109b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_2c = ebx
int32_t* var_30 = &var_4
int32_t var_34 = arg4
HINSTANCE edi
HINSTANCE var_38 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg3 + 0x10))(__security_cookie ^ &var_38)
struct dpsound::CWindow::VTable** eax_4 = sub_69adc6(0xe0)
struct dpsound::CWindow::VTable** arg_4 = eax_4
int32_t arg_14 = 0
struct dpsound::CWindow::dpsound::CMainWindow::VTable** esi

if (eax_4 == 0)
    esi = nullptr
else
    void* ebx_1 = &arg3[0xc]
    
    if (arg3[0x11] u>= 0x10)
        ebx_1 = *ebx_1
    
    HCURSOR var_30_2 = LoadCursorA(nullptr, 0x7f00)
    PSTR lpIconName = 0x8e
    var_38 = arg3[0x13]
    HICON eax_6 = LoadIconA(var_38, lpIconName)
    var_38 = 0x8e
    HICON eax_7
    int32_t ecx
    eax_7, ecx = LoadIconA(arg3[0x13], var_38)
    var_38 = eax_7
    esi = sub_687780(eax_4, arg3[0x13], ebx_1, ecx, var_38, eax_6)

arg_14 = 0xffffffff
arg3[0x12] = esi
HINSTANCE eax_9 = esi[2]

if (eax_9 == 0)
    var_4 = arg3[2]
    int32_t var_8 = arg3[3]
    arg_4 = arg3[4]
    __return_addr = arg3[5]
    sub_6885e0(esi, &arg_4, &__return_addr, &var_4, &var_8)
    void* esi_1 = &arg3[0xc]
    
    if (arg3[0x11] u>= 0x10)
        esi_1 = *esi_1
    
    HINSTANCE hInstance = arg3[0x13]
    HMENU eax_14 = LoadMenuA(hInstance, 0x87)
    void* ecx_3 = arg3[0x12]
    HWND var_30_4 = nullptr
    int32_t var_34_3 = var_8
    var_38 = var_4
    sub_696020(ecx_3, esi_1, 0x12cf0000, arg_4, __return_addr, var_38, var_34_3, var_30_4, eax_14, 
        hInstance)
else
    enum SET_WINDOW_POS_FLAGS uFlags = 0x47
    HWND hWndInsertAfter
    __builtin_memset(&hWndInsertAfter, 0, 0x14)
    var_38 = eax_9
    int32_t X
    int32_t Y
    int32_t cx
    int32_t cy
    SetWindowPos(var_38, hWndInsertAfter, X, Y, cx, cy, uFlags)
    esi[0xa].b = 1

BOOL result
result.b = 1
fsbase->NtTib.ExceptionList = arg5
*var_10
return result
