// 函数: sub_410e70
// 地址: 0x410e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
enum DLG_BUTTON_CHECK_STATE __saved_ebx

if (*(arg1 + 8) != 0)
    __saved_ebx = BST_CHECKED
else
    __saved_ebx = BST_UNCHECKED

CheckDlgButton(arg2, 0x9cdb, __saved_ebx)
uint32_t eax_1
eax_1.b = IsDlgButtonChecked(arg2, 0x9cdb) == 1
uint32_t bEnable = zx.d(eax_1.b)
EnableWindow(GetDlgItem(arg2, 0x9cce), bEnable)
EnableWindow(GetDlgItem(arg2, 0x3ea), bEnable)
EnableWindow(GetDlgItem(arg2, 0x3eb), bEnable)
void* lpString = arg1 + 0xc

if (*(arg1 + 0x20) u>= 0x10)
    lpString = *lpString

SetDlgItemTextA(arg2, 0x9cce, lpString)
int32_t eax_5 = *(arg1 + 8)
int32_t __saved_ebx_1

if (eax_5 == 1 || eax_5 != 2)
    __saved_ebx_1 = 0x3ea
else
    __saved_ebx_1 = 0x3eb

CheckRadioButton(arg2, 0x3ea, 0x3eb, __saved_ebx_1)
return 1
