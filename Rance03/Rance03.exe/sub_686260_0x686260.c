// 函数: sub_686260
// 地址: 0x686260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum DLG_BUTTON_CHECK_STATE uCheck

if (*(arg2 + 4) == 0)
    uCheck = BST_UNCHECKED
else
    uCheck = BST_CHECKED

CheckDlgButton(*(arg1 + 0x28), *(arg1 + 0x2c), uCheck)
enum DLG_BUTTON_CHECK_STATE uCheck_1

if (*(arg2 + 5) == 0)
    uCheck_1 = BST_UNCHECKED
else
    uCheck_1 = BST_CHECKED

CheckDlgButton(*(arg1 + 0x40), *(arg1 + 0x44), uCheck_1)
enum DLG_BUTTON_CHECK_STATE uCheck_2

if (*(arg2 + 6) == 0)
    uCheck_2 = BST_UNCHECKED
else
    uCheck_2 = BST_CHECKED

CheckDlgButton(*(arg1 + 0x58), *(arg1 + 0x5c), uCheck_2)
enum DLG_BUTTON_CHECK_STATE uCheck_3

if (*(arg2 + 7) == 0)
    uCheck_3 = BST_UNCHECKED
else
    uCheck_3 = BST_CHECKED

CheckDlgButton(*(arg1 + 0x70), *(arg1 + 0x74), uCheck_3)
enum DLG_BUTTON_CHECK_STATE uCheck_4

if (*(arg2 + 8) == 0)
    uCheck_4 = BST_UNCHECKED
else
    uCheck_4 = BST_CHECKED

CheckDlgButton(*(arg1 + 0x88), *(arg1 + 0x8c), uCheck_4)

if (*(arg2 + 9) == 0)
    return CheckDlgButton(*(arg1 + 0xa0), *(arg1 + 0xa4), BST_UNCHECKED)

return CheckDlgButton(*(arg1 + 0xa0), *(arg1 + 0xa4), BST_CHECKED)
