// 函数: sub_4297f0
// 地址: 0x4297f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
var_6c = arg1
RECT rect_3
GetClientRect(arg2, &rect_3)
int32_t ebx_1 = rect_3.right - rect_3.left
HWND hWnd = *(arg1 + 0x8c)
RECT rect_2
__builtin_memset(&rect_2, 0, 0x10)
GetWindowRect(hWnd, &rect_2)
void* eax_3 = var_6c
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(eax_3 + 0x90), &rect)
void* esi_1 = var_6c
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetClientRect(*(esi_1 + 0x8c), &rect_1)
HWND hWnd_1 = *(esi_1 + 0x90)
RECT rect_4
__builtin_memset(&rect_4, 0, 0x10)
GetClientRect(hWnd_1, &rect_4)
int32_t bottom = rect.bottom
int32_t arg_8
int32_t* ecx = &arg_8
int32_t var_68

if (arg_8 s<= 4)
    ecx = &var_68

var_68 = 4
int32_t var_64
int32_t* eax_4 = &var_64
var_64 = ebx_1 - 6

if (ebx_1 - 6 s>= *ecx)
    eax_4 = ecx

int32_t nHeight = bottom - rect.top
int32_t nWidth = *eax_4
MoveWindow(*(esi_1 + 0x8c), rect_1.left, rect_1.top, nWidth, rect_2.bottom - rect_2.top, 1)
BOOL result = MoveWindow(*(var_6c + 0x90), nWidth + 2, rect_4.top, ebx_1 - nWidth - 2, nHeight, 1)
sub_69a5bc(eax_1 ^ &var_6c)
return result
