// 函数: sub_675280
// 地址: 0x675280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_68
int32_t eax_1 = __security_cookie ^ &var_68
sub_675540(arg1, arg2)
sub_6756b0(arg1, arg2)
sub_675400(arg1, arg2)
void* ecx_2 = *(arg1 + 0x50)
int32_t edx = *(arg1 + 0x44)
*(ecx_2 + 0x28) = *(arg1 + 0x40)
*(ecx_2 + 0x2c) = edx
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
int32_t esi_2 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(arg1 + 8), &lpwndpl_1)
sub_67e740(*(arg1 + 0x50), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
    esi_2)
sub_69a5bc(eax_1 ^ &var_68)
return 0
