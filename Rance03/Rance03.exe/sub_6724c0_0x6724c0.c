// 函数: sub_6724c0
// 地址: 0x6724c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
sub_673590(arg1, arg2)
sub_673710(arg1, arg2)
sub_673450(arg1, arg2)
void* ecx_2 = *(arg1 + 0x54)
int32_t edx = *(arg1 + 0x48)
*(ecx_2 + 0x28) = *(arg1 + 0x44)
*(ecx_2 + 0x2c) = edx
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
int32_t esi_2 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(arg1 + 8), &lpwndpl_1)
sub_67e740(*(arg1 + 0x54), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
    esi_2)
uint32_t uIDEvent = *(arg1 + 0x98)
uint32_t uElapse = *(arg1 + 0x2c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x9c), uIDEvent)
    *(arg1 + 0x98) = 0

*(arg1 + 0x9c) = arg2
*(arg1 + 0x98) = SetTimer(arg2, 1, uElapse, nullptr)
InitCommonControls()
*(arg1 + 0x74) = arg2
*(arg1 + 0x70) = CreateStatusWindowA(0x50000003, "***** StatusBar *****", arg2, 1)
sub_69a5bc(eax_1 ^ &var_6c)
return 0
